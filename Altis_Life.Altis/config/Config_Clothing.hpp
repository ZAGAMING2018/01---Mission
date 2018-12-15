/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Poloshirt_stripped", "", 125, "" },
            { "U_C_Poloshirt_redwhite", "", 150, "" },
            { "U_C_Poloshirt_salmon", "", 175, "" },
            { "U_C_Poloshirt_blue", "", 250, "" },
            { "U_C_Poloshirt_burgundy", "", 275, "" },
            { "U_C_Poloshirt_tricolour", "", 350, "" },
            { "U_C_Poor_2", "", 250, "" },
            { "U_IG_Guerilla2_2", "", 650, "" },
            { "U_IG_Guerilla3_1", "", 735, "" },
            { "U_OrestesBody", "", 1100, "" },
            { "U_IG_Guerilla2_3", "", 1200, "" },
            { "U_C_HunterBody_grn", "", 1500, "" },
            { "U_C_WorkerCoveralls", "", 2500, "" },
            { "U_NikosBody", "", 3000, "" },
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 5000, "" },
            { "U_C_Man_casual_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "", 5000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_surfer", "", 130, "" },
            { "H_Bandanna_khk", "", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Helmet_Skate", "", 150, "" }, //Apex DLC
            { "H_Bandanna_gry", "", 150, "" },
            { "H_Bandanna_sgg", "", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" },
            { "H_Booniehat_grn", "", 425, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_FieldPack_ghex_f", "", 5000, "" }, //Apex DLC
//            { "B_Bergen_sgg", "", 6500, "" },
//            { "B_Bergen_mcamo", "", 6500, "" },
//            { "B_Bergen_rgr", "", 6500, "" },
//            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_ghex_f", "", 7500, "" }, //Apex DLC
 //           { "B_Bergen_dgtl_f", "", 9500, "" }, //Apex DLC
//            { "B_Bergen_tna_f", "", 9500, "" } //Apex DLC
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "SAPS_Cadet_uniform", "", 100, "call life_coplevel >= 1" },
            { "SAPS_Constable_uniform", "", 200, "call life_coplevel >= 2" },
            { "SAPS_Corporal_uniform", "", 300, "call life_coplevel >= 3" },
            { "SAPS_Sergeant_uniform", "", 400, "call life_coplevel >= 4" },
            { "SAPS_Lieutenant_uniform", "", 500, "call life_coplevel >= 5" }
            
            
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "SAPS_Biker_Helmet", "", 100, "" },
            { "SAPS_cap", "", 100, "" },
            { "SAPS_beret", "", 100, "call life_coplevel >= 4" },
            { "SAPS_ECH", "", 100, "call life_coplevel >= 3" },
            { "SAPS_beret1", "", 100, "call life_coplevel >= 5" }

            
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Aviator", "", 100, "" }

        };
        vests[] = {
            
            { "SAPS_TacVest_lvl1","", 100, "call life_coplevel >= 1" },
            { "SAPS_Vests_lvl2","", 200, "call life_coplevel >= 2" },
            { "SAPS_Vests_lvl3","", 300, "call life_coplevel >= 3" },
            { "SAPS_Vests_lvl4","", 400, "call life_coplevel >= 4" },
            { "SAPS_Vests_lvl5","", 500, "call life_coplevel >= 5" }
            
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "SADF_Fieldpack", "", 100, "" }

        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", "EMS Uniform", 50, 0, "" },
            { "U_B_Wetsuit", "EMS Wetsuit", 1000, 0, "" }

        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_blu", "", 10, "" },
            { "H_Cap_red", "", 10, "" }


        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" },
            { "G_Shades_Black", "", 10, "" },
            { "G_Shades_Blue", "", 10, "" },
            { "G_Sport_Blackred", "", 10, "" },
            { "G_Sport_Checkered", "", 10, "" },
            { "G_Sport_Blackyellow", "", 10, "" },
            { "G_Sport_BlackWhite", "", 10, "" },
            { "G_Squares", "", 10, "" },
            { "G_Aviator", "", 10, "" },
            { "G_Lowprofile", "", 10, "" },
            { "G_Diving", "", 10, "" }




        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk","" , 785, "" },
            { "B_AssaultPack_blk","" , 785, "" },
            { "B_FieldPack_blk","" , 785, "" },
            { "B_Bergen_blk","" , 785, "" }



        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_I_C_Soldier_Para_2_F", "Militia Fatigues (Illegal)", 5000, "" },
            { "U_I_C_Soldier_Para_3_F", "Militia Fatigues (Illegal)", 5000, "" },            
            { "U_I_C_Soldier_Para_4_F", "Militia Fatigues (Illegal)", 5000, "" },
            { "U_I_C_Soldier_Para_1_F", "Militia Fatigues (Illegal)", 5000, "" },
            { "U_I_C_Soldier_Camo_F", "Militia Fatigues (Illegal)", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "Militia Fatigues (Illegal)", 5000, "" }


        };

        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_ShemagOpen_khk", "Shemag (Illegal)", 800, "" },
            { "H_ShemagOpen_tan", "Shemag (Illegal)", 850, "" },            
            { "H_Shemag_olive", "Shemag (Illegal)", 850, "" },
            { "H_PASGT_basic_olive_F", "Mask (Illegal)", 850, "" },            
            { "H_PASGT_basic_black_F", "Mask (Illegal)", 850, "" }
        };

        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Balaclava_blk", "Balaclava (Illegal)", 150, "" },
            { "G_Balaclava_combat", "Balaclava (Illegal)", 150, "" },
            { "G_Balaclava_lowprofile", "Balaclava (Illegal)", 150, "" },
            { "G_Balaclava_oli", "Balaclava (Illegal)", 150, "" },            
            { "G_Balaclava_TI_G_blk_F", "Balaclava (Illegal)", 150, "" },
            { "G_Balaclava_TI_blk_F", "Balaclava (Illegal)", 150, "" },
            { "G_Bandanna_beast", "Bandana (Illegal)", 150, "" },
            { "G_Bandanna_blk", "Bandana (Illegal)", 150, "" },
            { "G_Bandanna_khk", "Bandana (Illegal)", 150, "" },
            { "G_Bandanna_oli", "Bandana (Illegal)", 150, "" },
            { "G_Bandanna_shades", "Bandana (Illegal)", 150, "" },
            { "G_Bandanna_sport", "Bandana (Illegal)", 150, "" },
            { "G_Bandanna_tan", "Bandana (Illegal)", 150, "" }
        };

        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } //Apex DLC
            { "V_TacChestrig_cbr_F", "Tac Rig (Illegal)", 6500, "" },
            { "V_TacChestrig_grn_F", "Tac Vest (Illegal)", 6500, "" },
            { "V_TacChestrig_oli_F", "Tac Vest (Illegal)", 9000, "" },
            { "V_TacVest_blk", "Tac Vest (Illegal)", 9000, "" },
            { "V_TacVest_brn", "Tac Vest (Illegal)", 9000, "" },
            { "V_TacVest_camo", "Tac Vest (Illegal)", 9000, "" },
            { "V_TacVest_khk", "Tac Vest (Illegal)", 9000, "" },
            { "V_TacVest_oli", "Tac Vest (Illegal)", 9000, "" },
            { "V_I_G_resistanceLeader_F", "Tac Vest (Illegal)", 9000, "" },
            { "V_TacVestIR_blk", "Tac Vest (Illegal)", 10000, "" },
            { "V_TacVest_oli", "Tac Vest (Illegal)", 12500, "" }

        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_ghex_F", "Field Pack Camo (Illegal)", 2000, "" },
            { "B_FieldPack_ocamo", "Field Pack Camo (Illegal)", 2000, "" },
            { "B_FieldPack_oucamo", "Field Pack Camo (Illegal)", 2000, "" },
            { "B_Carryall_ghex_F", "Carry All Camo (Illegal)", 4000, "" },
            { "B_Carryall_ocamo", "Carry All Camo (Illegal)", 4000, "" },
            { "B_Carryall_oucamo", "Carry All Camo (Illegal)", 4000, "" },
            { "B_ViperLightHarness_hex_F", "Viper Pack (Illegal)", 6500, "" },
            { "B_ViperLightHarness_ghex_F", "Viper Pack (Illegal)", 6500, "" },
            { "B_ViperHarness_hex_F", "Viper Pack (Illegal)", 6500, "" },
            { "B_ViperHarness_ghex_F", "Viper Pack (Illegal)", 6500, "" },            


        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
