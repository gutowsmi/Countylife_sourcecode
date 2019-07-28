#include "..\..\script_macros.hpp"
/*
    File: fn_actionKeyHandler.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master action key handler, handles requests for picking up various items and
    interacting with other players (Cops = Cop Menu for unrestrain,escort,stop escort, arrest (if near cop hq), etc).
*/
private ["_curObject","_isWater","_CrateModelNames","_crate","_fish","_animal","_whatIsIt","_handle"];
_curObject = cursorObject;
if (life_action_inUse) exitWith {}; //Action is in use, exit to prevent spamming.
if (life_interrupted) exitWith {life_interrupted = false;};
_isWater = surfaceIsWater (visiblePositionASL player);


if (player getVariable ["isEscorting",false] ) exitWith {
    [] call life_fnc_copInteractionMenu;
};



if (LIFE_SETTINGS(getNumber,"global_ATM") isEqualTo 1) then{
    //Check if the player is near an ATM.
    if ((call life_fnc_nearATM) && {!dialog}) exitWith {
        [] call life_fnc_atmMenu;
    };
};

if (isNull _curObject) exitWith {
    if (_isWater) then {
        _fish = (nearestObjects[player,(LIFE_SETTINGS(getArray,"animaltypes_fish")),3]) select 0;
        if (!isNil "_fish") then {
            if (!alive _fish) then {
                [_fish] call life_fnc_catchFish;
            };
        };
    } else {
        _animal = (nearestObjects[player,(LIFE_SETTINGS(getArray,"animaltypes_hunting")),3]) select 0;
        if (!isNil "_animal") then {
            if (!alive _animal) then {
                [_animal] call life_fnc_gutAnimal;
            };
        } else {
            private "_handle";
            if (playerSide isEqualTo civilian && !life_action_gathering) then {
                _whatIsIt = [] call life_fnc_whereAmI;
                if (life_action_gathering) exitWith {};                 //Action is in use, exit to prevent spamming.
                switch (_whatIsIt) do {
                    case "mine" : { _handle = [] spawn life_fnc_mine };
                    default { _handle = [] spawn life_fnc_gather };
                };
                life_action_gathering = true;
                waitUntil {scriptDone _handle};
                life_action_gathering = false;
            };
        };
    };
};

if ((_curObject isKindOf "B_supplyCrate_F" || _curObject isKindOf "Box_IND_Grenades_F") && {player distance _curObject < 3} ) exitWith {
    if (alive _curObject) then {
        [_curObject] call life_fnc_containerMenu;
    };
};

private _vaultHouse = [[["Altis", "Land_Research_house_V1_F"], ["Malden", "Land_Medevac_house_V1_F"], ["Tanoa", "Land_Medevac_house_V1_F"]]] call TON_fnc_terrainSort;
private _altisArray = [16019.5,16952.9,0];
private _tanoaArray = [11074.2,11501.5,0.00137329];
private _maldenArray = [9755.71,3908.42,0];
private _pos = [[["Altis", _altisArray], ["Malden", _maldenArray], ["Tanoa", _tanoaArray]]] call TON_fnc_terrainSort;

if (_curObject isKindOf "House_F" && {player distance _curObject < 12} || ((nearestObject [_pos,"Land_Dome_Big_F"]) isEqualTo _curObject || (nearestObject [_pos,_vaultHouse]) isEqualTo _curObject)) exitWith {
    [_curObject] call life_fnc_houseMenu;
};

if (dialog) exitWith {}; //Don't bother when a dialog is open.
if !(isNull objectParent player) exitWith {}; //He's in a vehicle, cancel!
life_action_inUse = true;

//Temp fail safe.
[] spawn {
    sleep 60;
    life_action_inUse = false;
};

//Check if it's a dead body.
if (playerSide isEqualTo independent && _curObject isKindOf "Man" && !(_curObject isKindOf "Animal") && {!alive _curObject}) exitWith {
    //Hotfix code by ins0
    if(!alive _curObject) then {
        [_curObject] call life_fnc_medInteractionMenu;
    };
};

/*
if(!dialog && playerSide isEqualTo civilian && _curObject isKindOf "Man" && isPlayer _curObject && alive _curObject) exitwith {
		[_curObject] call life_fnc_civInteractionMenu;
};
*/


//If target is a player then check if we can use the cop menu.
if (isPlayer _curObject && _curObject isKindOf "Man") then {
    if(_curObject distance player < 5 && !dialog && playerSide isEqualTo west) then {
		[_curObject] call life_fnc_copInteractionMenu;
	};
    if(!dialog && playerSide isEqualTo civilian && alive _curObject) exitwith {
		[_curObject] call life_fnc_civInteractionMenu;
    };
    if(!dialog && playerSide isEqualTo independent && alive _curObject) exitWith {
        [_curObject] call life_fnc_medInteractionMenu;
    };
} else {
    //OK, it wasn't a player so what is it?
    private ["_isVehicle","_miscItems","_money","_list"];

    _list = ["landVehicle","Ship","Air"];
    _isVehicle = if (KINDOF_ARRAY(_curObject,_list)) then {true} else {false};
    _miscItems = ["Land_BottlePlastic_V1_F","Land_TacticalBacon_F","Land_Can_V3_F","Land_CanisterFuel_F","Land_Suitcase_F"];

    //It's a vehicle! open the vehicle interaction key!
    if (_isVehicle) then {
        if (!dialog) then {
            if (player distance _curObject < ((boundingBox _curObject select 1) select 0)+2 && (!(player getVariable ["restrained",false])) && (!(player getVariable ["playerSurrender",false])) && !life_isknocked && !life_istazed) then {
                [_curObject] call life_fnc_vInteractionMenu;
            };
        };
    } else {
        //OK, it wasn't a vehicle so let's see what else it could be?
        if ((typeOf _curObject) in _miscItems) then {
            [_curObject,player,false] remoteExecCall ["TON_fnc_pickupAction",RSERV];
        } else {
            //It wasn't a misc item so is it money?
            if ((typeOf _curObject) isEqualTo "Land_Money_F" && {!(_curObject getVariable ["inUse",false])}) then {
                [_curObject,player,true] remoteExecCall ["TON_fnc_pickupAction",RSERV];
            };
        };
    };
};