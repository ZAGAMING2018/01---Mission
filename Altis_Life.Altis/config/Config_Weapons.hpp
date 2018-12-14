/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "MG Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Pistol_heavy_02_F", "", 2500, 0 },
            { "hgun_Pistol_01_F", "", 4000, 0 },
            { "hgun_ACPC2_F", "", 6000, 0 },
            { "hgun_Pistol_heavy_01_F", "", 8000, 0 },
            { "CSW_M500", "", 10000, 0 }
        };
        mags[] = {
            { "6Rnd_45ACP_Cylinder", "", 90 },
            { "10Rnd_9x21_Mag", "", 110 },
            { "9Rnd_45ACP_Mag", "", 130 },
            { "11Rnd_45ACP_Mag", "", 150 },
            { "CSW_5Rnd_127x41_Magnum", "", 250 }

        };
        accs[] = {
            { "optic_Yorris", "", 1050 },
            { "optic_MRD", "", 1200 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "immersion_cigs_cigar0", "Cuban Cigar", 200, 0 },
            { "murshun_cigs_lighter", "Zipo", 75, 0 },
            { "hgun_PDW2000_F", "PDW 9mm", 13500, 0 },
            { "SMG_05_F", "Protector 9mm", 17500, 0 },
            { "CSW_Desert_Eagle", "Desert Eagle", 18500, 0 }, //---------------------  <<-----------
            { "arifle_TRG20_F", "TGR-20", 45000, 0 },
            { "srifle_DMR_01_F", "Rahim 7.62", 55000, 0 },
            { "arifle_AKS_F", "AKS-74U 7.62 ", 75000, 0 },
            { "arifle_AKM_F", "AKM 7.62 ", 95000, 0 },
            { "srifle_DMR_06_olive_F", "MK14 DMR 7.62", 105000, 0 },
            { "arifle_ARX_blk_F", "Type 115 6.5mm ", 195000, 0 },
            { "STI_MK13", "MK13 GL", 25000, 0 }

        };
        mags[] = {
            { "30Rnd_9x21_Mag", "30rnd 9mm", 750 },
            { "30Rnd_9x21_Mag_SMG_02", "30rnd 9mm", 900 },
            { "CSW_7Rnd_127x33_AE", "7rnd 50cal", 1500 },
            { "30Rnd_556x45_Stanag", "30rnd 5.56", 1000 },
            { "10Rnd_762x54_Mag", "10rnd 7.62", 950 },
            { "30Rnd_762x39_Mag_F", "30rnd 7.62", 2050 },
            { "30Rnd_545x39_Mag_F", "30rnd 5.45", 1650 },
            { "20Rnd_762x51_Mag", "20rnd 7.62", 1500 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "30rnd 6.5", 1950 },
            { "10Rnd_50BW_Mag_F", "10rnd 50BW", 3500 },
            { "UGL_FlareRed_F", "Flare Red", 125 },
            { "1Rnd_SmokeRed_Grenade_shell", "Smoke GL rnd red", 250 }
        };
        accs[] = {
            { "optic_ACO_grn", "ACO Grn", 1900 },
            { "optic_Aco", "Aco Red", 1900 },
            { "optic_Holosight", "Holo", 2015 },
            { "optic_Holosight_blk_F", "Holo Blk ", 2250 },
            { "optic_MRCO", "MRCO", 3500 },
            { "optic_Arco", "ARCO", 7500 },
            { "optic_Arco_blk_F", "ARCO ", 7500 },
            { "optic_Hamr", "RCO", 7500 },
            { "optic_ERCO_blk_F", "ERCO ", 9500 },
            { "optic_DMS", "DMS", 15500 },
            { "KA_ANPEQ15_Black_IR", "Laser Sight Blk", 750 },
            { "optic_Hamr_khk_F", "Laser Sight Khk", 750 },
            { "acc_flashlight", "Gun Light", 80 },
            { "O_NVGoggles_ghex_F", "NVG Hex ", 3500 },
            { "O_NVGoggles_urb_F", "NVG Urb ", 3500 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Pistol_heavy_02_F", "Zubr ACP", 5000, 0 },
            { "hgun_Pistol_01_F", "PM ", 8000, 0 },
            { "hgun_ACPC2_F", "1911 ACP", 12000, 2500 },
            { "hgun_Pistol_heavy_01_F", "4-Five ACP", 16000, 0 },
            { "CSW_M500", "Smith Western Magnum", 21000, 0 }
        };
        mags[] = {
            { "6Rnd_45ACP_Cylinder", "6rnd 45ACP Cylinder", 200 },
            { "10Rnd_9x21_Mag", "10rnd 9mm", 300 },
            { "9Rnd_45ACP_Mag", "9rnd 45ACP", 350 },
            { "11Rnd_45ACP_Mag", "11rnd 45ACP", 370 },
            { "CSW_5Rnd_127x41_Magnum", "11rnd 45ACP", 500 }
        };
        accs[] = {
            { "optic_Yorris", "Yoris", 1050 },
            { "optic_MRD", "MRD", 1200 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "Binocular", 150, 0 },
            { "ItemGPS", "GPS", 100, 0 },
            { "ItemMap", "Map", 50, 0 },
            { "ItemCompass", "compass", 50, 0 },
            { "ItemWatch", "Watch", 50, 0 },
            { "murshun_cigs_cig0", "Endtjie", 75, 0 },
            { "murshun_cigs_cigpack", "Cig pack", 75, 0 },
            { "murshun_cigs_matches", "Lion Matches", 10, 0 },
            { "Chemlight_yellow", "Chemlight Yellow", 25, 0 },
            { "Chemlight_green", "Chemlight Green", 25, 0 },
            { "NVGoggles", "NVG Brn", 2000, 980 },
            { "NVGoggles_OPFOR", "NVG Blk", 2000, 980 },
            { "NVGoggles_INDEP", "NVG Grn", 2000, 980 },
            { "NVGoggles_tna_F", "NVG Tpc", 2000, 980 },
            { "ACRE_PRC152", "Short Radio 5KM", 500, 50 },
            { "ACRE_PRC117F", "Long Radio 20KM", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, 0 },
            { "ItemGPS", "", 500, 0 },
            { "ItemMap", "", 250, 0 },
            { "ItemCompass", "", 250, 0 },
            { "ItemWatch", "", 250, 0 },
            { "FirstAidKit", "", 750, 0 },
            { "NVGoggles", "", 10000, 0 },
            { "ACRE_PRC152", "Short Radio 5KM", 500, 0 },
            { "ACRE_PRC117F", "Long Radio 20KM", 1500, 0 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_cadet {                               // SAPS Cadet
        name = "Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 500, 0 },
            { "HandGrenade_Stone", "Flashbang", 500, 0 },
            { "Binocular", "", 50, 0 },
            { "ItemGPS", "", 75, 0 },
            { "FirstAidKit", "", 50, 0 },
            { "NVGoggles", "", 1500, 980 },
            { "ACRE_PRC152", "Short Radio 5KM", 250, 0 },
            { "ACRE_PRC117F", "Long Radio 20KM", 500, 0 },
            //{ "SatchelCharge_Remote_Mag", "Explosives", 500, 0 },
            { "SMG_02_F", "Sting PDW 9mm", 1500, 0 }        
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "30Rnd_9x21_Mag", "", 130, 65, "" },
            { "30Rnd_9x21_Red_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 200, 100, "" }
        };
        accs[] = {
            { "muzzle_snds_L", "Suppressor 9mm", 650, 325, "" },
            { "optic_Aco_smg", "ACO", 2750, 1375, "" },
            { "acc_flashlight", "Gun Light", 750, 375, "" },
            { "KA_ANPEQ15_Black_IR", "Laser", 1200, 600, "" }
        };
    };

    class cop_corporal {                    /// --- SAPS Corporal
        name = "Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Corporal Rank!" };
        items[] = {
            { "SMG_03C_TR_black", "P90 PDW", 3500, 0 },
            { "prpl_benelli_pgs_rail", "M4 Shotgun 8rnd", 5500, 0 },
            { "arifle_CTAR_blk_F", "CAR95", 6500, 0 },
            //{ "arifle_CTAR_GL_blk_F", "CAR95 GL", 7500, 0 },
            { "CSW_FN57", "FN57", 2000, 0 },
            { "SmokeShell", "Smoke Grenade White", 2000, 0 },
            { "HandGrenade_Stone", "Flashbang", 500, 0 },
            { "SatchelCharge_Remote_Mag", "Satchel", 100, 0 },
            { "Rangefinder", "Range Finder", 950, 0 }
        };
        mags[] = {
            { "50Rnd_570x28_SMG_03", "50rnd P90 Mag", 200 },
            { "30Rnd_580x42_Mag_F", "30rnd CAR Mag", 200 },
            { "prpl_8Rnd_12Gauge_Pellets", "8rnd Buckshot", 125 },
            { "prpl_8Rnd_12Gauge_Slug", "6rnd Slug", 150 },
            //{ "1Rnd_Smoke_Grenade_shell", "GL Smoke Grenade White", 80 },
            //{ "UGL_FlareCIR_F", "GL IR Round", 80 },
            //{ "UGL_FlareWhite_F", "GL Flare Grenade White", 80 },
            { "CSW_20Rnd_57x28_SS190", "20rnd FN57 Clip", 80 }
        };
        accs[] = {
            { "optic_Aco", "ACO", 300, 0 },
            { "optic_Arco_blk_F", "ARCO", 500, 0 },
            { "optic_Hamr", "RCO", 550, 0 },
            { "optic_NVS", "NVS Optic", 1200, 0 },
            { "acc_flashlight", "Gun Light", 60, 0 },
            { "CSW_FN57_flashlight_glare_2", "FN57 Pistol Light", 50, 0 },
            { "muzzle_snds_570", "P90 Suppressor", 850, 0 },
            { "CSW_FN57_silencer1", "FN57 Suppressor", 750, 0 }
        };
    };

    class cop_sergeant {                                    // SAPS Sergeant
        name = "Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "SMG_03C_TR_black", "P90 PDW", 3500, 0 },
            { "prpl_benelli_pgs_rail", "M4 Shotgun 8rnd", 5500, 0 },
            { "arifle_CTAR_blk_F", "CAR95", 6500, 0 },
            { "arifle_CTAR_GL_blk_F", "CAR95 GL", 7500, 0 },
            { "arifle_CTARS_blk_F", "CAR95 LMG", 12000, 0 },
            { "srifle_DMR_07_blk_F", "CMR Marksman", 14500, 0 },
            { "CSW_FN57", "FN57", 2000, 0 },
            { "CSW_FN57", "FN57 + Shield", 3000, 0 },
            { "SmokeShell", "Smoke Grenade White", 2000, 0 },
            { "HandGrenade_Stone", "Flashbang", 500, 0 },
            { "SatchelCharge_Remote_Mag", "Satchel", 100, 0 },
            { "Rangefinder", "Range Finder", 950, 0 }
        };
        mags[] = {
            { "50Rnd_570x28_SMG_03", "50rnd P90 Mag", 200 },
            { "30Rnd_580x42_Mag_F", "30rnd CAR Mag", 200 },
            { "100Rnd_580x42_Mag_F", "100rnd CAR Box", 450 },
            { "20Rnd_650x39_Cased_Mag_F", "20rnd CAR Clip", 350 },
            { "prpl_8Rnd_12Gauge_Pellets", "8rnd Buckshot", 125 },
            { "prpl_8Rnd_12Gauge_Slug", "6rnd Slug", 150 },
            { "1Rnd_Smoke_Grenade_shell", "GL Smoke Grenade White", 80 },
            { "UGL_FlareCIR_F", "GL IR Round", 80 },
            { "UGL_FlareWhite_F", "GL Flare Grenade White", 80 },
            { "CSW_20Rnd_57x28_SS190", "20rnd FN57 Clip", 80 }
        };
        accs[] = {
            { "optic_Aco", "ACO", 300, 0 },
            { "optic_Arco_blk_F", "ARCO", 500, 0 },
            { "optic_Hamr", "RCO", 550, 0 },
            { "optic_SOS", "MOS", 550, 0 },
            { "optic_NVS", "NVS Optic", 1200, 0 },
            { "acc_flashlight", "Gun Light", 60, 0 },
            { "CSW_FN57_flashlight_glare_2", "FN57 Pistol Light", 50, 0 },
            { "CSW_FN57_laser_green_2", "FN57 Pistol Laser", 80, 0 },
            { "CSW_FN57_Shield_P", "FN57 Ballistic Shield", 450, 0 },
            { "muzzle_snds_570", "P90 Suppressor", 850, 0 },
            { "CSW_FN57_silencer1", "FN57 Suppressor", 750, 0 }
        };
    };

    class cop_lieutenant {                          //  SAPS Lieutenant
        name = "Master Sergeant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be a Lieutenant Rank!" };
        items[] = {
            { "SMG_03C_TR_black", "P90 PDW", 3500, 0 },
            { "prpl_benelli_pgs_rail", "M4 Shotgun 8rnd", 5500, 0 },
            { "arifle_CTAR_blk_F", "CAR95", 6500, 0 },
            { "arifle_CTAR_GL_blk_F", "CAR95 GL", 7500, 0 },
            { "arifle_CTARS_blk_F", "CAR95 LMG", 12000, 0 },
            { "srifle_DMR_07_blk_F", "CMR Marksman", 14500, 0 },
            { "arifle_ARX_blk_F", "Type115", 25000, 0 },
            { "STI_M32", "MGL", 7000, 0 },
            { "CSW_FN57", "FN57", 2000, 0 },
            { "CSW_FN57", "FN57 + Shield", 3000, 0 },
            { "CSW_M26C", "Taser TEST", 0, 0 },
            { "KA_M14", "TEST Grenade", 0, 0 },
            { "KA_M7290", "TEST Grenade", 0, 0 },
            { "KA_M7A3", "TEST Grenade", 0, 0 },
            { "KA_M814", "TEST Grenade", 0, 0 },
            { "KA_M84", "TEST Grenade", 0, 0 },
            //{ "NVGogglesB_blk_F", "TEST NVG", 0, 0 },
            { "HandGrenade_Stone", "Flashbang", 500, 0 },
            { "SatchelCharge_Remote_Mag", "Satchel", 100, 0 },
            { "Rangefinder", "Range Finder", 950, 0 }
        };
        mags[] = {
            { "50Rnd_570x28_SMG_03", "50rnd P90 Mag", 200 },
            { "CSW_Taser_Probe_Mag", "TAZER clip TEST", 0 },
            { "30Rnd_580x42_Mag_F", "30rnd CAR Mag", 200 },
            { "100Rnd_580x42_Mag_F", "100rnd CAR Box", 450 },
            { "20Rnd_650x39_Cased_Mag_F", "20rnd CAR Clip", 350 },
            { "prpl_8Rnd_12Gauge_Pellets", "8rnd Buckshot", 125 },
            { "prpl_8Rnd_12Gauge_Slug", "6rnd Slug", 150 },
            { "1Rnd_Smoke_Grenade_shell", "GL Smoke Grenade White", 80 },
            { "UGL_FlareCIR_F", "GL IR Round", 80 },
            { "UGL_FlareWhite_F", "GL Flare Grenade White", 80 },
            { "CSW_20Rnd_57x28_SS190", "20rnd FN57 Clip", 80 },
            { "30Rnd_65x39_caseless_green", "30rnd Type115", 500 },
            { "10Rnd_50BW_Mag_F", "10rnd BW 50cal", 650 },
            { "CSW_20Rnd_57x28_SS190", "20rnd FN57 Clip", 80 },
            { "6Rnd_Smoke_Grenade_M32_pack", "6rnd MGL Smoke White", 80 },
            { "6Rnd_FlareWhite_M32_pack", "6rnd MGL Flare White", 80 },
            { "6Rnd_FlareCIR_M32_pack", "6rnd MGL IR", 80 },
            { "CSW_20Rnd_57x28_SS190", "20rnd FN57 Clip", 80 }
        };
        accs[] = {
            { "optic_Aco", "ACO", 300, 0 },
            { "optic_Arco_blk_F", "ARCO", 500, 0 },
            { "optic_Hamr", "RCO", 550, 0 },
            { "optic_SOS", "MOS", 550, 0 },
            { "optic_NVS", "NVS Optic", 1200, 0 },
            { "acc_flashlight", "Gun Light", 60, 0 },
            { "CSW_FN57_flashlight_glare_2", "FN57 Pistol Light", 50, 0 },
            { "CSW_FN57_laser_green_2", "FN57 Pistol Laser", 80, 0 },
            { "CSW_FN57_Shield_P", "FN57 Ballistic Shield", 450, 0 },
            { "muzzle_snds_570", "P90 Suppressor", 850, 0 },
            { "CSW_FN57_silencer1", "FN57 Suppressor", 750, 0 },
            { "muzzle_snds_65_TI_blk_F", "Type115 Suppressor", 800, 0 },
            { "bipod_02_F_blk", "Bipod", 50, 0 }
        };
    };

    class cop_chief {                  // not in use yet
        name = "Chief Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "You must be a Sergeant Rank!" };
        items[] = {

        };
        mags[] = {
            
        };
        accs[] = {

        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
             { "ItemGPS", "GPS", 50, 0 },
            { "ItemMap", "Map", 25, 0 },
            { "ItemGPS", "", 100, 45 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 1200, 980 },
            { "ACRE_PRC152", "Short Radio 5KM", 500, 50 },
            { "ACRE_PRC117F", "Long Radio 10KM", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };
};
