/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "yeast", "redgull", "bandages", "tbacon", "pickaxe", "toolkit", "rope", "fuelFull", "peach", "storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw" };
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "toolkit", "fuelFull", "peach", "defibrillator", "morphine", "bandages", "medkit", "stretcher", "panic" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_mafia";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "bandages", "morphine", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "rope", "blastingcharge" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "bandages", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "blastingcharge" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull"};
    };

    class drugdealer_M {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "license_civ_mafia";
        items[] = { "cocaine_packed", "heroin_packed", "marijuana_packed", "amfa_Packed", "meta_Packed" };
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "cocaine_processed", "heroin_processed", "marijuana", "amfa", "meta" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "diamond_cut" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "goldbar" };
    };

    class bar {
        name = "STR_Shops_Bar";
        side = "civ";
        conditions = "";
        items[] = { "beer", "whiskey", "moonshine" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = { "donuts", "coffee", "bandages", "panic", "handcuffs", "spikeStrip", "redgull", "toolkit", "fuelFull", "defusekit" };
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class stretcher {
        variable = "stretcher";
        displayName = "STR_Item_stretcher";
        weight = 5;
        buyPrice = 100;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        //icon = "\CL_Client\icons\ico_stretcher.paa";
    };
    class medkit {
        variable = "medkit";
        displayName = "STR_Item_Medkit";
        weight = 5;
        buyPrice = 100;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_medikit_CA.paa";
    };
    class handcuffs {
        variable = "handcuffs";
        displayName = "STR_Item_Handcuffs";
        weight = 1;
        buyPrice = 100;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_ziptie.paa";
    };
    class panic {
        variable = "panic";
        displayName = "STR_Item_Panic";
        weight = 1;
        buyPrice = 100;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_panic.paa";
    };
    class morphine {
        variable = "morphine";
        displayName = "STR_Item_Morphine";
        weight = 1;
        buyPrice = 100;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_Morphine.paa";
    };

    class bandages {
        variable = "bandages";
        displayName = "STR_Item_Bandages";
        weight = 1;
        buyPrice = 50;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_bandages.paa";
    };

    class rope {
        variable = "rope";
        displayName = "STR_Item_Rope";
        weight = 3;
        buyPrice = 1500;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_rope.paa";
    };

    class blindfold {
        variable = "blindfold";
        displayName = "STR_Item_Blindfold";
        weight = 1;
        buyPrice = 600;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_blindfold.paa";
    };

    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 750;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_pickaxe.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 100;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_defibrillator.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 4000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 850;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 10;
        buyPrice = 500;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 5;
        buyPrice = 150;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 95000;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_goldBar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 35000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_drill.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_defuseKit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 500;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 1000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_storageBig.paa";
    };

    //Mined Items
    //Amfa, meta, MDMA
    class amina {
        variable = "amina";
        displayName = "STR_Item_Amina";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_amina.paa";
    };

    class efedryna {
        variable = "efedryna";
        displayName = "STR_Item_Efedryna";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_efedryna.paa";
    };

    //19k za plecak
    class amfa {
        variable = "amfa";
        displayName = "STR_Item_Amfa";
        weight = 1;
        buyPrice = -1;
        sellPrice = 540;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_amfa.paa";
    };

    class amfa_Packed {
        variable = "amfa_Packed";
        displayName = "STR_Item_Amfa_Packed";
        weight = 1;
        buyPrice = -1;
        sellPrice = 5500;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_packing.paa";
    };
    
    //29k za plecak
    class meta {
        variable = "meta";
        displayName = "STR_Item_Meta";
        weight = 1;
        buyPrice = -1;
        sellPrice = 960;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_meta.paa";
    };

    class meta_Packed {
        variable = "meta_Packed";
        displayName = "STR_Item_Meta_Packed";
        weight = 1;
        buyPrice = -1;
        sellPrice = 12600;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_packing.paa";
    };

    class MDMA {
        variable = "MDMA";
        displayName = "STR_Item_MDMA";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1400;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_MDMA.paa";
    };


    //ALCOHOL
    class hop {
        variable = "hop";
        displayName = "STR_Item_Hop";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_hop.paa";
    };

    class beer {
        variable = "beer";
        displayName = "STR_Item_Beer";
        weight = 2;
        buyPrice = -1;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_beer.paa";
    };

    class yeast {
        variable = "yeast";
        displayName = "STR_Item_Yeast";
        weight = 1;
        buyPrice = 20;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_yeast.paa";
    };

    class barley {
        variable = "barley";
        displayName = "STR_Item_Barley";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_barley.paa";
    };

    class whiskey {
        variable = "whiskey";
        displayName = "STR_Item_Whiskey";
        weight = 2;
        buyPrice = -1;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_whiskey.paa";
    };

    class corn {
        variable = "corn";
        displayName = "STR_Item_Corn";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_corn.paa";
    };

    class moonshine {
        variable = "moonshine";
        displayName = "STR_Item_Moonshine";
        weight = 2;
        buyPrice = -1;
        sellPrice = 600;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_moonshine.paa";
    };
    //NOPE
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_oilUnprocessed.paa";
    };

    //NOPE
    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_oilProcessed.paa";
    };

    //19k
    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_copperOre.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 220;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_copper.paa";
    };

    //NOPE
    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_ironOre.paa";
    };

    //NOPE
    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_iron.paa";
    };

    //NOPE
    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_saltUnprocessed.paa";
    };

    //NOPE
    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_saltProcessed.paa";
    };

    //26k
    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = -1;
        sellPrice = 225;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_glass.paa";
    };

    //40k
    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 2;
        buyPrice = -1;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_diamondCut.paa";
    };

    //22k
    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 5;
        buyPrice = -1;
        sellPrice = 380;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_cement.paa";
    };

    //Drugs
    //35k
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 4;
        buyPrice = -1;
        sellPrice = 400;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_heroinProcessed.paa";
    };

    class heroin_packed {
        variable = "heroin_packed";
        displayName = "STR_Item_HeroinPacked";
        weight = 2;
        buyPrice = -1;
        sellPrice = 4000;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_packing.paa";
    };

    //30k
    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = -1;
        sellPrice = 250;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_marijuana.paa";
    };

    class marijuana_packed {
        variable = "marijuana_packed";
        displayName = "STR_Item_Marijuana_Packed";
        weight = 1;
        buyPrice = -1;
        sellPrice = 2500;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_packing.paa";
    };

    //46
    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_cocaineProcessed.paa";
    };

    class cocaine_packed {
        variable = "cocainePacked";
        displayName = "STR_Item_CocainePacked";
        weight = 1;
        buyPrice = -1;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_packing.paa";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 100;
        sellPrice = -1;
        illegal = false;
        edible = 100;
        icon = "\CL_Client\icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 10;
        sellPrice = -1;
        illegal = false;
        edible = 100;
        icon = "\CL_Client\icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = -1;
        illegal = false;
        edible = 100;
        icon = "\CL_Client\icons\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 65;
        sellPrice = 50;
        illegal = false;
        edible = 10;
        icon = "\CL_Client\icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        icon = "\CL_Client\icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = -1;
        illegal = false;
        edible = 40;
        icon = "\CL_Client\icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 50;
        sellPrice = -1;
        illegal = false;
        edible = 30;
        icon = "\CL_Client\icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 150;
        sellPrice = 115;
        illegal = false;
        edible = 20;
        icon = "\CL_Client\icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        icon = "\CL_Client\icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 40;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 175;
        sellPrice = 150;
        illegal = false;
        edible = 25;
        icon = "\CL_Client\icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 175;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 250;
        sellPrice = 200;
        illegal = false;
        edible = 30;
        icon = "\CL_Client\icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 1250;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "\CL_Client\icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 600;
        sellPrice = 400;
        illegal = false;
        edible = 80;
        icon = "\CL_Client\icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 750;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        icon = "\CL_Client\icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        icon = "\CL_Client\icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 750;
        illegal = false;
        edible = 100;
        icon = "\CL_Client\icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_wholeChickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        icon = "\CL_Client\icons\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_chickenDrumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 90;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        icon = "\CL_Client\icons\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        edible = 100;
        icon = "\CL_Client\icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 115;
        illegal = false;
        edible = -1;
        icon = "\CL_Client\icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = false;
        edible = 100;
        icon = "\CL_Client\icons\ico_muttonLeg.paa";
    };
};
