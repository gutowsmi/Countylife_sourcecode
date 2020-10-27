/*
    File: fn_welcomeNotification.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Called upon first spawn selection and welcomes our player.
*/
disableSerialization;
[
        "",
        0,
        0.2,
        10,
        0,
        0,
        8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayCtrl 2400;
_textSpoiler = _display displayCtrl 1101;
_text2 = _display displayCtrl 1102;

_message = ""; 
_message = _message + "<t align='center' shadow='0'><t color='#FF0000' size='3'>JEŚLI JESTEŚ NOWYM GRACZEM PRZECZYTAJ!</t><br />";
_message = _message + "<t size='2'>TS:<br />";
_message = _message + "137.74.4.173<br />";
_message = _message + "<a href='https://grubyRP.pl' color='#00FF00'>Forum</a><br />(otwarcie w przegladarce)<br/>";
_message = _message + "Życzymy miłej gry!<br />";
//_message = _message + "Discord invite: <a href='https://discord.gg/EaB7Jgw' color='#56BDD6'>ArmA RPG Life</a>  <br /><br />";

//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlCommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;
