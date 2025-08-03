// --- Command & Leadership ---

class VSC_4RANGER_MC_PL_IC: B_Soldier_SL_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Platoon IC";
    uniformClass = "SF_MC_Camo_G3";
    backpack = "VSC_4RANGER_MC_PL_IC_pack";
    VSC_weaponItems[] = {"", "UK3CB_BAF_LLM_Flashlight_Tan", "", "ACE_optic_MRCO_2D"};
    editorPreview = "x\VS_C\Factions\Images\sl.paa";
    weapons[] = {"SF_L403A1_D", "UK3CB_BAF_L131A1", "Put", "Throw"};
    respawnWeapons[] = {"SF_L403A1_D", "UK3CB_BAF_L131A1", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ItemAndroid","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ItemAndroid","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "sps_black_hornet_01_Static_F","sps_black_hornet_01_Static_F","sps_black_hornet_01_Static_F","sps_black_hornet_01_Static_F",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts"
    };
    respawnMagazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "sps_black_hornet_01_Static_F","sps_black_hornet_01_Static_F","sps_black_hornet_01_Static_F","sps_black_hornet_01_Static_F",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts"
    };
    linkedItems[] = {"ItemMap", "B_UavTerminal", "ItemCompass", "KAT_ChemicalDetector", "UK3CB_BAF_Soflam_Laserdesignator", "opscore_highcut_mc", "Crye_AVS_3_1_UKSF", "UK3CB_BAF_G_Tactical_Black"};
    respawnLinkedItems[] = {"ItemMap", "B_UavTerminal", "ItemCompass", "KAT_ChemicalDetector", "UK3CB_BAF_Soflam_Laserdesignator", "opscore_highcut_mc", "Crye_AVS_3_1_UKSF", "UK3CB_BAF_G_Tactical_Black"};
};

class VSC_4RANGER_MC_PL_2IC: VSC_4RANGER_MC_PL_IC
{
    displayName = "Platoon 2IC";
    backpack = "VSC_4RANGER_MC_PL_2IC_pack";
};

class VSC_4RANGER_MC_IC: VSC_4RANGER_MC_PL_IC
{
    displayName = "IC";
    VSC_weaponItems[] = {"", "UK3CB_BAF_LLM_IR_Tan", "", "ACE_optic_MRCO_2D"};
    backpack = "VSC_4RANGER_MC_IC_pack";
};

class VSC_4RANGER_MC_2IC: VSC_4RANGER_MC_IC
{
    displayName = "2IC";
    backpack = "VSC_4RANGER_MC_2IC_pack";
};

class VSC_4RANGER_MC_JFO: B_Soldier_SL_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "JFO";
    uniformClass = "SF_MC_Camo_G3";
    backpack = "VSC_4RANGER_MC_JFO_pack";
    VSC_weaponItems[] = {"", "UK3CB_BAF_LLM_Flashlight_Tan", "", "ACE_optic_MRCO_2D"};
    editorPreview = "x\VS_C\Factions\Images\jfo.paa";
    weapons[] = {"SF_L403A1_D", "UK3CB_BAF_L131A1", "Put", "Throw"};
    respawnWeapons[] = {"SF_L403A1_D", "UK3CB_BAF_L131A1", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ItemAndroid","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ItemAndroid","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts"
    };
    respawnMagazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts"
    };
    linkedItems[] = {"ItemMap", "B_UavTerminal", "ItemCompass", "KAT_ChemicalDetector", "UK3CB_BAF_Soflam_Laserdesignator", "opscore_highcut_mc", "Crye_AVS_3_1_UKSF", "UK3CB_BAF_G_Tactical_Black"};
    respawnLinkedItems[] = {"ItemMap", "B_UavTerminal", "ItemCompass", "KAT_ChemicalDetector", "UK3CB_BAF_Soflam_Laserdesignator", "opscore_highcut_mc", "Crye_AVS_3_1_UKSF", "UK3CB_BAF_G_Tactical_Black"};
};

// --- Standard Infantry ---

class VSC_4RANGER_MC_Rifleman: B_Soldier_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    uniformClass = "SF_MC_Camo_G3";
    backpack = "VSC_4RANGER_MC_Rifleman_pack";
    VSC_weaponItems[] = {"", "UK3CB_BAF_LLM_Flashlight_Tan", "", "ACE_optic_MRCO_2D"};
    editorPreview = "x\VS_C\Factions\Images\rifleman.paa";
    weapons[] = {"SF_L403A1_D", "UK3CB_BAF_AT4_CS_AP_Launcher", "UK3CB_BAF_L131A1", "Put", "Throw"};
    respawnWeapons[] = {"SF_L403A1_D", "UK3CB_BAF_AT4_CS_AP_Launcher", "UK3CB_BAF_L131A1", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts"
    };
    respawnMagazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts"
    };
    linkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF", "UK3CB_BAF_G_Tactical_Black"};
    respawnLinkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF", "UK3CB_BAF_G_Tactical_Black"};
};

class VSC_4RANGER_MC_Recruit: B_Soldier_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Recruit";
    uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";
    backpack = "VSC_4RANGER_MC_Recruit_pack";
    VSC_weaponItems[] = {"", "UK3CB_BAF_LLM_Flashlight_Tan", "UK3CB_underbarrel_acc_grippod_t", "SACE_optic_MRCO_2D"};
    editorPreview = "x\VS_C\Factions\Images\rifleman.paa";
    weapons[] = {"uk3cb_baf_l85a3", "UK3CB_BAF_AT4_CS_AP_Launcher", "UK3CB_BAF_L131A1", "Put", "Throw"};
    respawnWeapons[] = {"uk3cb_baf_l85a3", "UK3CB_BAF_AT4_CS_AP_Launcher", "UK3CB_BAF_L131A1", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell",
        "HandGrenade","HandGrenade",
        "tsp_flashbang_cts","tsp_flashbang_cts","tsp_flashbang_cts","tsp_flashbang_cts"
    };
    respawnMagazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell",
        "HandGrenade","HandGrenade",
        "tsp_flashbang_cts","tsp_flashbang_cts","tsp_flashbang_cts","tsp_flashbang_cts"
    };
    linkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "mpx_cobra_patch", "Virtus_B_3", "UK3CB_BAF_G_Tactical_Black"};
    respawnLinkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "mpx_cobra_patch", "Virtus_B_3", "UK3CB_BAF_G_Tactical_Black"};
};

class VSC_4RANGER_MC_Grenadier: B_Soldier_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Grenadier";
    uniformClass = "SF_MC_Camo_G3";
    backpack = "VSC_4RANGER_MC_Grenadier_pack";
    VSC_weaponItems[] = {"", "SMA_SFPEQ_MK18TOP_BLK", "", "ACE_optic_MRCO_2D"};
    editorPreview = "x\VS_C\Factions\Images\grenadier.paa";
    weapons[] = {"sma_mk18tan_gl", "UK3CB_BAF_AT4_CS_AP_Launcher", "UK3CB_BAF_L131A1", "Put", "Throw"};
    respawnWeapons[] = {"sma_mk18tan_gl", "UK3CB_BAF_AT4_CS_AP_Launcher", "UK3CB_BAF_L131A1", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "rhs_mag_M433_HEDP",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45"
    };
    respawnMagazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "rhs_mag_M433_HEDP",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45"
    };
    linkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF", "UK3CB_BAF_G_Tactical_Black"};
    respawnLinkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF", "UK3CB_BAF_G_Tactical_Black"};
};

class VSC_4RANGER_MC_Breacher: B_Soldier_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Breacher";
    uniformClass = "SF_MC_Camo_G3";
    backpack = "VSC_4RANGER_MC_Breacher_pack";
    VSC_weaponItems[] = {"", "SMA_SFPEQ_MK18TOP_TAN", "", "ACE_optic_MRCO_2D"};
    editorPreview = "x\VS_C\Factions\Images\breacher.paa";
    weapons[] = {"sma_mk18tan_gl", "tsp_meleeWeapon_sledge_black", "UK3CB_BAF_L131A1", "Put", "Throw"};
    respawnWeapons[] = {"sma_mk18tan_gl", "tsp_meleeWeapon_sledge_black", "UK3CB_BAF_L131A1", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "rhs_mag_m576",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45"
    };
    respawnMagazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "rhs_mag_m576",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45"
    };
    linkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF", "UK3CB_BAF_G_Tactical_Black"};
    respawnLinkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF", "UK3CB_BAF_G_Tactical_Black"};
};

// --- Specialist Roles ---

class VSC_4RANGER_MC_LMG: B_soldier_AR_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "LMG";
    uniformClass = "SF_MC_Camo_G3";
    backpack = "VSC_4RANGER_MC_LMG_pack";
    VSC_weaponItems[] = {"", "", "", ""};
    editorPreview = "x\VS_C\Factions\Images\ar.paa";
    weapons[] = {"uk3cb_baf_l110_762", "UK3CB_BAF_L131A1", "Put", "Throw"};
    respawnWeapons[] = {"uk3cb_baf_l110_762", "UK3CB_BAF_L131A1", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts",
        "UK3CB_BAF_762_100Rnd","UK3CB_BAF_762_100Rnd"
    };
    respawnMagazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts",
        "UK3CB_BAF_762_100Rnd","UK3CB_BAF_762_100Rnd"
    };
    linkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "opscore_highcut_mc", "SF_Crye_AVS_1", "UK3CB_BAF_G_Tactical_Black"};
    respawnLinkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "opscore_highcut_mc", "SF_Crye_AVS_1", "UK3CB_BAF_G_Tactical_Black"};
};

class VSC_4RANGER_MC_Medic: B_medic_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Medic";
    uniformClass = "SF_MC_Camo_G3";
    backpack = "VSC_4RANGER_MC_Medic_pack";
    VSC_weaponItems[] = {"", "UK3CB_BAF_LLM_IR_Tan", "", "optic_MRCO"};
    editorPreview = "x\VS_C\Factions\Images\medic.paa";
    weapons[] = {"SF_L403A1_D", "UK3CB_BAF_L131A1", "Put", "Throw"};
    respawnWeapons[] = {"SF_L403A1_D", "UK3CB_BAF_L131A1", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts",
        "SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45"
    };
    respawnMagazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts",
        "SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45"
    };
    linkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF"};
    respawnLinkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF"};
};

class VSC_4RANGER_MC_Surgeon: B_medic_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Surgeon";
    uniformClass = "SF_MC_Camo_G3";
    backpack = "VSC_4RANGER_MC_Surgeon_pack";
    VSC_weaponItems[] = {"", "UK3CB_BAF_LLM_IR_Tan", "", "optic_MRCO"};
    editorPreview = "x\VS_C\Factions\Images\medic.paa";
    weapons[] = {"SF_L403A1_D", "UK3CB_BAF_L131A1", "Put", "Throw"};
    respawnWeapons[] = {"SF_L403A1_D", "UK3CB_BAF_L131A1", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts",
        "SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45"
    };
    respawnMagazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts",
        "SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45","SF_30Rnd_EMAG_556x45"
    };
    linkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF"};
    respawnLinkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF"};
};

class VSC_4RANGER_MC_AT: B_soldier_LAT_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Anti-Tank";
    uniformClass = "SF_MC_Camo_G3";
    backpack = "VSC_4RANGER_MC_AT_pack";
    VSC_weaponItems[] = {"", "UK3CB_BAF_LLM_IR_Tan", "", "SMA_ELCAN_SPECTER_TAN_RDS_4z"};
    editorPreview = "x\VS_C\Factions\Images\at.paa";
    weapons[] = {"SF_L403A1_D", "launch_MRAWS_green_F", "UK3CB_BAF_L131A1", "Put", "Throw"};
    respawnWeapons[] = {"SF_L403A1_D", "launch_MRAWS_green_F", "UK3CB_BAF_L131A1", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "MRAWS_HEAT_F",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts"
    };
    respawnMagazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "MRAWS_HEAT_F",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts"
    };
    linkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF", "UK3CB_BAF_G_Tactical_Black"};
    respawnLinkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF", "UK3CB_BAF_G_Tactical_Black"};
};

class VSC_4RANGER_MC_Marksman: B_recon_M_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Marksman";
    uniformClass = "SF_MC_Camo_G3";
    backpack = "VSC_4RANGER_MC_Marksman_pack";
    VSC_weaponItems[] = {"", "", "UK3CB_underbarrel_acc_fgrip_bipod", "UK3CB_BAF_TA648_308"};
    editorPreview = "x\VS_C\Factions\Images\marksman.paa";
    weapons[] = {"uk3cb_baf_l129a1", "UK3CB_BAF_AT4_CS_AP_Launcher", "UK3CB_BAF_L131A1", "Put", "Throw"};
    respawnWeapons[] = {"uk3cb_baf_l129a1", "UK3CB_BAF_AT4_CS_AP_Launcher", "UK3CB_BAF_L131A1", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts",
        "UK3CB_BAF_762_L42A1_20Rnd","UK3CB_BAF_762_L42A1_20Rnd","UK3CB_BAF_762_L42A1_20Rnd","UK3CB_BAF_762_L42A1_20Rnd"
    };
    respawnMagazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts",
        "UK3CB_BAF_762_L42A1_20Rnd","UK3CB_BAF_762_L42A1_20Rnd","UK3CB_BAF_762_L42A1_20Rnd","UK3CB_BAF_762_L42A1_20Rnd"
    };
    linkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF", "UK3CB_BAF_G_Tactical_Black"};
    respawnLinkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF", "UK3CB_BAF_G_Tactical_Black"};
};

class VSC_4RANGER_MC_EOT: B_engineer_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "EOT";
    uniformClass = "SF_MC_Camo_G3";
    backpack = "VSC_4RANGER_MC_EOT_pack";
    VSC_weaponItems[] = {"", "UK3CB_BAF_LLM_IR_Tan", "", "ACE_optic_MRCO_2D"};
    editorPreview = "x\VS_C\Factions\Images\eod.paa";
    weapons[] = {"SF_L403A1_D", "UK3CB_BAF_AT4_CS_AP_Launcher", "UK3CB_BAF_L131A1", "Put", "Throw"};
    respawnWeapons[] = {"SF_L403A1_D", "UK3CB_BAF_AT4_CS_AP_Launcher", "UK3CB_BAF_L131A1", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_DefusalKit","ACE_M26_Clacker",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_DefusalKit","ACE_M26_Clacker",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45"
    };
    respawnMagazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45"
    };
    linkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF"};
    respawnLinkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF"};
};

class VSC_4RANGER_MC_Drone_Tech: B_soldier_UAV_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Drone Tech";
    uniformClass = "SF_MC_Camo_G3";
    backpack = "VSC_4RANGER_MC_Drone_Tech_pack";
    VSC_weaponItems[] = {"", "UK3CB_BAF_LLM_IR_Tan", "", "ACE_optic_MRCO_2D"};
    editorPreview = "x\VS_C\Factions\Images\uav.paa";
    weapons[] = {"SF_L403A1_D", "UK3CB_BAF_AT4_CS_AP_Launcher", "UK3CB_BAF_L131A1", "Put", "Throw"};
    respawnWeapons[] = {"SF_L403A1_D", "UK3CB_BAF_AT4_CS_AP_Launcher", "UK3CB_BAF_L131A1", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts"
    };
    respawnMagazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts"
    };
    linkedItems[] = {"ItemMap", "B_UavTerminal", "ItemCompass", "KAT_ChemicalDetector", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF", "UK3CB_BAF_G_Tactical_Black"};
    respawnLinkedItems[] = {"ItemMap", "B_UavTerminal", "ItemCompass", "KAT_ChemicalDetector", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF", "UK3CB_BAF_G_Tactical_Black"};
};

// --- CBRN Roles ---

class VSC_4RANGER_MC_CBRN_IC: B_Soldier_SL_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "CBRN Specialist IC";
    uniformClass = "U_CBRN_A_multicam";
    backpack = "VSC_4RANGER_MC_CBRN_IC_pack";
    VSC_weaponItems[] = {"", "UK3CB_BAF_LLM_Flashlight_Tan", "", "ACE_optic_MRCO_2D"};
    editorPreview = "x\VS_C\Factions\Images\cbrn_sl.paa";
    weapons[] = {"SF_L403A1_D", "UK3CB_BAF_L131A1", "Put", "Throw"};
    respawnWeapons[] = {"SF_L403A1_D", "UK3CB_BAF_L131A1", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter",
        "CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape",
        "CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ItemAndroid","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter",
        "CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape",
        "CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ItemAndroid","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "sps_black_hornet_01_Static_F","sps_black_hornet_01_Static_F","sps_black_hornet_01_Static_F","sps_black_hornet_01_Static_F",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts"
    };
    respawnMagazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "sps_black_hornet_01_Static_F","sps_black_hornet_01_Static_F","sps_black_hornet_01_Static_F","sps_black_hornet_01_Static_F",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts"
    };
    linkedItems[] = {"ItemMap", "B_UavTerminal", "ItemCompass", "KAT_ChemicalDetector", "UK3CB_BAF_Soflam_Laserdesignator", "opscore_highcut_mc", "Crye_AVS_3_1_UKSF"};
    respawnLinkedItems[] = {"ItemMap", "B_UavTerminal", "ItemCompass", "KAT_ChemicalDetector", "UK3CB_BAF_Soflam_Laserdesignator", "opscore_highcut_mc", "Crye_AVS_3_1_UKSF"};
};

class VSC_4RANGER_MC_CBRN_EOT: B_engineer_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "CBRN Specialist EOT";
    uniformClass = "U_CBRN_A_multicam";
    backpack = "VSC_4RANGER_MC_CBRN_EOT_pack";
    VSC_weaponItems[] = {"", "UK3CB_BAF_LLM_Flashlight_Tan", "", "ACE_optic_MRCO_2D"};
    editorPreview = "x\VS_C\Factions\Images\cbrn_eod.paa";
    weapons[] = {"SF_L403A1_D", "UK3CB_BAF_AT4_CS_AP_Launcher", "UK3CB_BAF_L131A1", "Put", "Throw"};
    respawnWeapons[] = {"SF_L403A1_D", "UK3CB_BAF_AT4_CS_AP_Launcher", "UK3CB_BAF_L131A1", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape",
        "CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter",
        "CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_DefusalKit","ACE_M26_Clacker",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape",
        "CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter",
        "CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_DefusalKit","ACE_M26_Clacker",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45"
    };
    respawnMagazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45"
    };
    linkedItems[] = {"ItemMap", "B_UavTerminal", "ItemCompass", "ItemWatch", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF"};
    respawnLinkedItems[] = {"ItemMap", "B_UavTerminal", "ItemCompass", "ItemWatch", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF"};
};

class VSC_4RANGER_MC_CBRN_Rifleman: B_Soldier_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "CBRN Specialist Rifleman";
    uniformClass = "U_CBRN_A_multicam";
    backpack = "VSC_4RANGER_MC_CBRN_Rifleman_pack";
    VSC_weaponItems[] = {"", "UK3CB_BAF_LLM_Flashlight_Tan", "", "ACE_optic_MRCO_2D"};
    editorPreview = "x\VS_C\Factions\Images\cbrn.paa";
    weapons[] = {"SF_L403A1_D", "UK3CB_BAF_AT4_CS_AP_Launcher", "UK3CB_BAF_L131A1", "Put", "Throw"};
    respawnWeapons[] = {"SF_L403A1_D", "UK3CB_BAF_AT4_CS_AP_Launcher", "UK3CB_BAF_L131A1", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape",
        "CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter",
        "CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine","ACE_epinephrine","ACE_morphine","kat_suction","ACE_plasmaIV_250","kat_larynx",
        "CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape","CBRN_DuctTape",
        "CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter","CBRN_gasmaskFilter",
        "CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant","CBRN_sealant",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM","ACRE_PRC343",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts"
    };
    respawnMagazines[] = {
        "kat_Painkiller","kat_Painkiller","kat_Painkiller","kat_Painkiller",
        "UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45",
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts"
    };
    linkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF"};
    respawnLinkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "opscore_highcut_mc", "Crye_AVS_1_1_UKSF"};
};

// --- Air Crew ---

class VSC_4RANGER_MC_Heli_Pilot: B_Helipilot_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Heli Pilot";
    uniformClass = "CSU15BP_Base_Rolled_FG";
    backpack = "VSC_4RANGER_MC_Heli_Pilot_pack";
    VSC_weaponItems[] = {"UK3CB_BAF_SFFH", "SMA_SFFL_BLK", "", "SMA_MICRO_T2"};
    editorPreview = "x\VS_C\Factions\Images\pilot.paa";
    weapons[] = {"uk3cb_baf_l22a2", "SF_HGun_USPComp", "Put", "Throw"};
    respawnWeapons[] = {"uk3cb_baf_l22a2", "SF_HGun_USPComp", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45"
    };
    respawnMagazines[] = {
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45"
    };
    linkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "rhsusf_hgu56p_visor", "CMU33P"};
    respawnLinkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "rhsusf_hgu56p_visor", "CMU33P"};
};

class VSC_4RANGER_MC_Heli_Crew: B_HeliCrew_F
{
    faction = "VS_C_4RANGER";
    editorSubcategory = "VSC_Men_MC";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    displayName = "Heli Crew";
    uniformClass = "CSU15BP_Base_Rolled_FG";
    backpack = "VSC_4RANGER_MC_Heli_Crew_pack";
    VSC_weaponItems[] = {"UK3CB_BAF_SFFH", "SMA_SFFL_BLK", "", "SMA_MICRO_T2"};
    editorPreview = "x\VS_C\Factions\Images\crew.paa";
    weapons[] = {"uk3cb_baf_l22a2", "SF_HGun_USPComp", "Put", "Throw"};
    respawnWeapons[] = {"uk3cb_baf_l22a2", "SF_HGun_USPComp", "Put", "Throw"};
    items[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_MapTools","ACE_Flashlight_XL50","ACE_ATNAA_AntidoteInjector","kat_chestSeal","kat_chestSeal","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint","ACE_adenosine",
        "ACE_EarPlugs","ACE_IR_Strobe_Item","ItemMicroDAGR","ACE_ATNAA_AntidoteInjector","kat_larynx","kat_suction","kat_pocketBVM",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    magazines[] = {
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45"
    };
    respawnMagazines[] = {
        "UK3CB_BAF_SmokeShell","UK3CB_BAF_SmokeShell","tsp_flashbang_cts",
        "SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45","SF_30Rnd_EMAG_T_556x45"
    };
    linkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "rhsusf_hgu56p_visor_mask", "CMU33P"};
    respawnLinkedItems[] = {"ItemMap", "ItemGPS", "ItemCompass", "KAT_ChemicalDetector", "rhsusf_hgu56p_visor_mask", "CMU33P"};
};
