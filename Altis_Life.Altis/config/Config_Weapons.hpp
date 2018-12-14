/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 3250, "" },
            { "hgun_Pistol_01_F", "", 7000, 3500, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 9850, 4925, "" },
            { "hgun_ACPC2_F", "", 11500, 5750, "" },
            { "SMG_05_F", "", 18000, 9000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 20000, 10000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 250, 125, "" } //Apex DLC
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 1000, 500, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_TRG20_F", "", 25000, 12500, "" },
            { "arifle_Katiba_F", "", 30000, 15000, "" },
            { "srifle_DMR_01_F", "", 50000, 25000, "" },
            { "arifle_SDAR_F", "", 20000, 10000, "" },
            { "arifle_AK12_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKS_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKM_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 33000, 16500, "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 30000, 15000, "" } //Apex DLC
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300, 150, "" },
            { "30Rnd_762x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, 140, "" },
            { "10Rnd_762x54_Mag", "", 500, 250, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 60, "" },
            { "30Rnd_580x42_Mag_F", "", 125, 60, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
            { "acc_flashlight", "", 1000, 500, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
            { "hgun_ACPC2_F", "", 4500, 2250, "" },
            { "hgun_PDW2000_F", "", 9500, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 500, 250, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            
            
            //================================
            //============ ALL RANKS =========
            //================================
            
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "SmokeShell", "", 2000, 1000, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 1700, 850, "" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2000, 1000, "" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 20000, 10000, "" },
    
            
            //================================
            //============ CADET  ============
            //================================

            { "SMG_02_F", "", 30000, 1500, "call life_coplevel >= 1" },         
            

            //================================
            //============ CORPORAL ==========
            //================================
    
            { "SMG_03C_TR_black", "", 3500, , "call life_coplevel >= 2" },      
            { "prpl_benelli_pgs_rail", "", 5500, , "call life_coplevel >= 2" }, 
            { "arifle_CTAR_blk_F", "", 6500, , "call life_coplevel >= 2" },     
            { "CSW_FN57", "", 5500, , "call life_coplevel >= 2" },      
            { "SatchelCharge_Remote_Mag", "", 5500, , "call life_coplevel >= 2" },      
            { "Rangefinder", "", 5500, , "call life_coplevel >= 2" },       

            //================================
            //============ SERGEANT ==========
            //================================  
    
            { "arifle_CTAR_GL_blk_F", "", 12000, , "call life_coplevel >= 2" }, 
            { "arifle_CTARS_blk_F", "", 14500, , "call life_coplevel >= 2" },   
            { "srifle_DMR_07_blk_F", "", 14500, , "call life_coplevel >= 2" },  
            { "CSW_FN57", "", 3000, , "call life_coplevel >= 2" },          
            { "SatchelCharge_Remote_Mag", "", 3000, , "call life_coplevel >= 2" },


            
            //================================
            //=========== LIEUTENANT =========
            //================================              
            
            
            { "arifle_ARX_blk_F", "", 25000, , "call life_coplevel >= 2" },
            { "STI_M32", "", 7000, , "call life_coplevel >= 2" },           
            { "CSW_M26C", "", 3000, , "call life_coplevel >= 2" },
            { "KA_M14", "", 100, , "call life_coplevel >= 2" },         
            { "KA_M7290", "", 100, , "call life_coplevel >= 2" },           
            { "KA_M7A3", "", 100, , "call life_coplevel >= 2" },            
            { "KA_M814", "", 100, , "call life_coplevel >= 2" },
            { "KA_M84", "", 100, , "call life_coplevel >= 2" },

            

            
            

    
    
    
    
            
            
        };
        mags[] = {
            
            //================================
            //============ CADET  ============
            //================================
            
            
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 125, 60, "" },
            { "30Rnd_9x21_Red_Mag", "", 125, 60, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 125, 60, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },

            //================================
            //============ CORPORAL ==========
            //================================

            { "50Rnd_570x28_SMG_03", "", 200, , "call life_coplevel >= 2" },                
            { "30Rnd_580x42_Mag_F", "", 200, , "call life_coplevel >= 2" },
            { "prpl_8Rnd_12Gauge_Pellets", "", 200, , "call life_coplevel >= 2" },          
            { "prpl_8Rnd_12Gauge_Slug", "", 200, , "call life_coplevel >= 2" },                     
            { "CSW_20Rnd_57x28_SS190", "", 200, , "call life_coplevel >= 2" },                  
            
            //================================
            //============ SERGEANT ==========
            //================================

            { "100Rnd_580x42_Mag_F", "", 450, , "call life_coplevel >= 3" },
            { "20Rnd_650x39_Cased_Mag_F", "", 350, , "call life_coplevel >= 3" },
            { "1Rnd_Smoke_Grenade_shell", "", 80, , "call life_coplevel >= 3" },
            { "UGL_FlareCIR_F", "", 80, , "call life_coplevel >= 3" },
            { "UGL_FlareWhite_F", "", 80, , "call life_coplevel >= 3" },
    
            
            
            //================================
            //=========== LIEUTENANT =========
            //================================              
            
            { "CSW_Taser_Probe_Mag", "", 80, , "call life_coplevel >= 3" },         
            { "30Rnd_65x39_caseless_green", "", 80, , "call life_coplevel >= 3" },
            { "10Rnd_50BW_Mag_F", "", 80, , "call life_coplevel >= 3" },
            { "6Rnd_Smoke_Grenade_M32_pack", "", 80, , "call life_coplevel >= 3" },
            { "6Rnd_FlareWhite_M32_pack", "", 80, , "call life_coplevel >= 3" },
            { "6Rnd_FlareCIR_M32_pack", "", 80, , "call life_coplevel >= 3" },          
                   
            

            
            
        };
        accs[] = {
            
            
            //================================
            //============ ALL RANKS =========
            //================================

            
            { "muzzle_snds_L", "", 650, 325, "" },

  
            
            
            
            //================================
            //============ CADET  ============
            //================================
            
            { "optic_MRD", "", 2750, 1375, "call life_coplevel >= 1" },
            { "optic_Aco_smg", "ACO", 2750, 1375, "call life_coplevel >= 1" },
            { "KA_ANPEQ15_Black_IR", "Laser", 1200, 600, "call life_coplevel >= 1" },
    
            
            
            //================================
            //============ CORPORAL ==========
            //================================          
                        
            { "optic_Aco", "", 500, , "call life_coplevel >= 2" },
            { "optic_Arco_blk_F", "", 500, , "call life_coplevel >= 2" },
            { "optic_Hamr", "", 550, , "call life_coplevel >= 2" },
            { "optic_NVS", "", 1250, , "call life_coplevel >= 2" },
            { "CSW_FN57_flashlight_glare_2", "", , "call life_coplevel >= 2" },
            { "CSW_FN57_silencer1", "", 2750, , "call life_coplevel >= 2" },

            
            //================================
            //============ SERGEANT ==========
            //================================              
        
            { "optic_SOS", "", 550, , "call life_coplevel >= 3" },      
            { "acc_flashlight", "", 50, , "call life_coplevel >= 3" },
            { "CSW_FN57_laser_green_2", "", 80, , "call life_coplevel >= 3" },
            { "CSW_FN57_Shield_P", "", 450, , "call life_coplevel >= 3" },          
            { "muzzle_snds_570", "", 450, , "call life_coplevel >= 3" },            
            { "CSW_FN57_silencer1", "", 850, , "call life_coplevel >= 3" }                  
            

            
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
