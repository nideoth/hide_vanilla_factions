class CfgPatches
{
	class NDT_HideVanillaFactions_CUP
	{
		addonRootClass = "NDT_HideVanillaFactions";
        requiredVersion = 2.12;
		requiredAddons[] = {
            "CUP_AirVehicles_412", 
            "CUP_WaterVehicles_Zubr", 
            "CUP_WheeledVehicles_M151", 
            "CUP_WheeledVehicles_T810", 
            "CUP_WaterVehicles_Weapons", 
            "CUP_TrackedVehicles_MTLB", 
            "CUP_WheeledVehicles_Hilux", 
            "CUP_WheeledVehicles_Jackal", 
            "CUP_WheeledVehicles_TowingTractor", 
            "CUP_AirVehicles_HC3", 
            "CUP_TrackedVehicles_BMP3", 
            "CUP_TrackedVehicles_BMP", 
            "CUP_TrackedVehicles_Bradley", 
            "CUP_TrackedVehicles_ChallengerII", 
            "CUP_TrackedVehicles_M113", 
            "CUP_TrackedVehicles_M1Abrams", 
            "CUP_TrackedVehicles_NewM113", 
            "CUP_TrackedVehicles_T72", 
            "CUP_TrackedVehicles_ZSU23", 
            "CUP_WheeledVehicles_BRDM2", 
            "CUP_WheeledVehicles_BTR60", 
            "CUP_WheeledVehicles_BTR80", 
            "CUP_WheeledVehicles_HMMWV", 
            "CUP_WheeledVehicles_LR", 
            "CUP_WheeledVehicles_NewHMMWV", 
            "CUP_WheeledVehicles_NewM1036", 
            "CUP_WheeledVehicles_NewM1097", 
            "CUP_WheeledVehicles_NewM998", 
            "CUP_WheeledVehicles_NewSOV", 
            "CUP_WheeledVehicles_Tractor", 
            "CUP_WheeledVehicles_UAZ", 
            "CUP_WheeledVehicles_UpHMMWV", 
            "CUP_AirVehicles_AH1Z", 
            "CUP_AirVehicles_AV8B", 
            "CUP_AirVehciles_AW159", 
            "CUP_AirVehicles_C130J", 
            "CUP_AirVehciles_Cessna", 
            "CUP_AirVehicles_L39", 
            "CUP_AirVehicles_Mi24", 
            "CUP_AirVehicles_Mi35", 
            "CUP_AirVehicles_MI6", 
            "CUP_AirVehicles_Su25", 
            "CUP_AirVehicles_SU34", 
            "CUP_TrackedVehicles_M1A2Abrams", 
            "CUP_TrackedVehicles_M270", 
            "CUP_TrackedVehicles_T55", 
            "CUP_WaterVehicles_Fregata", 
            "CUP_AirVehciles_KA60"
        };
        skipWhenMissingDependencies = 1;
        units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class CUP_412_Medic_Base_F;
	class CUP_C_IDAP_412_Medic: CUP_412_Medic_Base_F {scope=1;scopeCurator=1;};
	class CUP_412_Luxury_Base_F;
	class CUP_C_IDAP_412_Luxury: CUP_412_Luxury_Base_F {scope=1;scopeCurator=1;};
	class CUP_412_Civ_Base_F;
	class CUP_C_IDAP_412: CUP_412_Civ_Base_F {scope=1;scopeCurator=1;};
	class CUP_412_Mil_Utility_Base_F;
	class CUP_C_IDAP_412_Utility: CUP_412_Mil_Utility_Base_F {scope=1;scopeCurator=1;};
	class CUP_412_Military_Armed_Base_F;
	class CUP_I_412_Military_Armed_AAF: CUP_412_Military_Armed_Base_F {scope=1;scopeCurator=1;};
	class CUP_412_Military_Armed_AT_Base_F;
	class CUP_I_412_Military_Armed_AT_AAF: CUP_412_Military_Armed_AT_Base_F {scope=1;scopeCurator=1;};
	class CUP_I_412_Mil_Utility_AAF: CUP_412_Mil_Utility_Base_F {scope=1;scopeCurator=1;};
	class CUP_412_Mil_Transport_Base_F;
	class CUP_I_412_Mil_Transport_AAF: CUP_412_Mil_Transport_Base_F {scope=1;scopeCurator=1;};
	class CUP_412_Military_Radar_Base_F;
	class CUP_I_412_Military_Radar_AAF: CUP_412_Military_Radar_Base_F {scope=1;scopeCurator=1;};
	class CUP_412_dynamicLoadout_Base_F;
	class CUP_I_412_dynamicLoadout_AAF: CUP_412_dynamicLoadout_Base_F {scope=1;scopeCurator=1;};
	class CUP_ZUBR_Base;
	class CUP_O_ZUBR_CSAT_T: CUP_ZUBR_Base {scope=1;scopeCurator=1;};
	class CUP_I_ZUBR_AAF: CUP_ZUBR_Base {scope=1;scopeCurator=1;};
	class CUP_M151_Unarmed_Base;
	class CUP_I_M151_SYND: CUP_M151_Unarmed_Base {scope=1;scopeCurator=1;};
	class CUP_M151_M2_Base;
	class CUP_I_M151_M2_SYND: CUP_M151_M2_Base {scope=1;scopeCurator=1;};
	class CUP_T810_Unarmed_Base;
	class CUP_I_T810_Unarmed_LDF: CUP_T810_Unarmed_Base {scope=1;scopeCurator=1;};
	class CUP_T810_Refuel_Base;
	class CUP_I_T810_Refuel_LDF: CUP_T810_Refuel_Base {scope=1;scopeCurator=1;};
	class CUP_T810_Reammo_Base;
	class CUP_I_T810_Reammo_LDF: CUP_T810_Reammo_Base {scope=1;scopeCurator=1;};
	class CUP_T810_Repair_Base;
	class CUP_I_T810_Repair_LDF: CUP_T810_Repair_Base {scope=1;scopeCurator=1;};
	class CUP_WV_CRAM_base;
	class CUP_WV_B_CRAM: CUP_WV_CRAM_base {scope=1;scopeCurator=1;};
	class CUP_WV_RAM_Launcher_base;
	class CUP_WV_B_RAM_Launcher: CUP_WV_RAM_Launcher_base {scope=1;scopeCurator=1;};
	class CUP_WV_SS_Launcher_base;
	class CUP_WV_B_SS_Launcher: CUP_WV_SS_Launcher_base {scope=1;scopeCurator=1;};
	class CUP_MTLB_Base;
	class CUP_B_MTLB_pk_FIA: CUP_MTLB_Base {scope=1;scopeCurator=1;};
	class CUP_I_MTLB_pk_SYNDIKAT: CUP_MTLB_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_unarmed_Base;
	class CUP_O_Hilux_unarmed_OPF_G_F: CUP_Hilux_unarmed_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_armored_unarmed_Base;
	class CUP_O_Hilux_armored_unarmed_OPF_G_F: CUP_Hilux_armored_unarmed_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_DSHKM_Base;
	class CUP_O_Hilux_DSHKM_OPF_G_F: CUP_Hilux_DSHKM_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_armored_DSHKM_Base;
	class CUP_O_Hilux_armored_DSHKM_OPF_G_F: CUP_Hilux_armored_DSHKM_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_SPG9_Base;
	class CUP_O_Hilux_SPG9_OPF_G_F: CUP_Hilux_SPG9_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_armored_SPG9_Base;
	class CUP_O_Hilux_armored_SPG9_OPF_G_F: CUP_Hilux_armored_SPG9_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_igla_Base;
	class CUP_O_Hilux_igla_OPF_G_F: CUP_Hilux_igla_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_armored_igla_Base;
	class CUP_O_Hilux_armored_igla_OPF_G_F: CUP_Hilux_armored_igla_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_metis_Base;
	class CUP_O_Hilux_metis_OPF_G_F: CUP_Hilux_metis_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_armored_metis_Base;
	class CUP_O_Hilux_armored_metis_OPF_G_F: CUP_Hilux_armored_metis_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_podnos_Base;
	class CUP_O_Hilux_podnos_OPF_G_F: CUP_Hilux_podnos_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_armored_podnos_Base;
	class CUP_O_Hilux_armored_podnos_OPF_G_F: CUP_Hilux_armored_podnos_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_MLRS_Base;
	class CUP_O_Hilux_MLRS_OPF_G_F: CUP_Hilux_MLRS_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_armored_MLRS_Base;
	class CUP_O_Hilux_armored_MLRS_OPF_G_F: CUP_Hilux_armored_MLRS_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_zu23_Base;
	class CUP_O_Hilux_zu23_OPF_G_F: CUP_Hilux_zu23_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_armored_zu23_Base;
	class CUP_O_Hilux_armored_zu23_OPF_G_F: CUP_Hilux_armored_zu23_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_btr60_base;
	class CUP_O_Hilux_btr60_OPF_G_F: CUP_Hilux_btr60_base {scope=1;scopeCurator=1;};
	class CUP_Hilux_armored_BTR60_Base;
	class CUP_O_Hilux_armored_BTR60_OPF_G_F: CUP_Hilux_armored_BTR60_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_AGS30_Base;
	class CUP_O_Hilux_AGS30_OPF_G_F: CUP_Hilux_AGS30_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_armored_AGS30_Base;
	class CUP_O_Hilux_armored_AGS30_OPF_G_F: CUP_Hilux_armored_AGS30_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_M2_Base;
	class CUP_O_Hilux_M2_OPF_G_F: CUP_Hilux_M2_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_armored_M2_Base;
	class CUP_O_Hilux_armored_M2_OPF_G_F: CUP_Hilux_armored_M2_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_UB32_Base;
	class CUP_O_Hilux_UB32_OPF_G_F: CUP_Hilux_UB32_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_armored_UB32_Base;
	class CUP_O_Hilux_armored_UB32_OPF_G_F: CUP_Hilux_armored_UB32_Base {scope=1;scopeCurator=1;};
	class CUP_Hilux_BMP1_base;
	class CUP_O_Hilux_BMP1_OPF_G_F: CUP_Hilux_BMP1_base {scope=1;scopeCurator=1;};
	class CUP_Hilux_armored_BMP1_Base;
	class CUP_O_Hilux_armored_BMP1_OPF_G_F: CUP_Hilux_armored_BMP1_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_unarmed_IND_G_F: CUP_Hilux_unarmed_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_armored_unarmed_IND_G_F: CUP_Hilux_armored_unarmed_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_DSHKM_IND_G_F: CUP_Hilux_DSHKM_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_armored_DSHKM_IND_G_F: CUP_Hilux_armored_DSHKM_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_SPG9_IND_G_F: CUP_Hilux_SPG9_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_armored_SPG9_IND_G_F: CUP_Hilux_armored_SPG9_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_igla_IND_G_F: CUP_Hilux_igla_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_armored_igla_IND_G_F: CUP_Hilux_armored_igla_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_metis_IND_G_F: CUP_Hilux_metis_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_armored_metis_IND_G_F: CUP_Hilux_armored_metis_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_podnos_IND_G_F: CUP_Hilux_podnos_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_armored_podnos_IND_G_F: CUP_Hilux_armored_podnos_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_MLRS_IND_G_F: CUP_Hilux_MLRS_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_armored_MLRS_IND_G_F: CUP_Hilux_armored_MLRS_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_zu23_IND_G_F: CUP_Hilux_zu23_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_armored_zu23_IND_G_F: CUP_Hilux_armored_zu23_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_btr60_IND_G_F: CUP_Hilux_btr60_base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_armored_BTR60_IND_G_F: CUP_Hilux_armored_BTR60_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_AGS30_IND_G_F: CUP_Hilux_AGS30_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_armored_AGS30_IND_G_F: CUP_Hilux_armored_AGS30_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_M2_IND_G_F: CUP_Hilux_M2_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_armored_M2_IND_G_F: CUP_Hilux_armored_M2_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_UB32_IND_G_F: CUP_Hilux_UB32_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_armored_UB32_IND_G_F: CUP_Hilux_armored_UB32_Base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_BMP1_IND_G_F: CUP_Hilux_BMP1_base {scope=1;scopeCurator=1;};
	class CUP_I_Hilux_armored_BMP1_IND_G_F: CUP_Hilux_armored_BMP1_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_unarmed_BLU_G_F: CUP_Hilux_unarmed_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_armored_unarmed_BLU_G_F: CUP_Hilux_armored_unarmed_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_DSHKM_BLU_G_F: CUP_Hilux_DSHKM_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_armored_DSHKM_BLU_G_F: CUP_Hilux_armored_DSHKM_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_SPG9_BLU_G_F: CUP_Hilux_SPG9_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_armored_SPG9_BLU_G_F: CUP_Hilux_armored_SPG9_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_igla_BLU_G_F: CUP_Hilux_igla_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_armored_igla_BLU_G_F: CUP_Hilux_armored_igla_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_metis_BLU_G_F: CUP_Hilux_metis_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_armored_metis_BLU_G_F: CUP_Hilux_armored_metis_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_podnos_BLU_G_F: CUP_Hilux_podnos_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_armored_podnos_BLU_G_F: CUP_Hilux_armored_podnos_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_MLRS_BLU_G_F: CUP_Hilux_MLRS_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_armored_MLRS_BLU_G_F: CUP_Hilux_armored_MLRS_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_zu23_BLU_G_F: CUP_Hilux_zu23_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_armored_zu23_BLU_G_F: CUP_Hilux_armored_zu23_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_btr60_BLU_G_F: CUP_Hilux_btr60_base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_armored_BTR60_BLU_G_F: CUP_Hilux_armored_BTR60_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_AGS30_BLU_G_F: CUP_Hilux_AGS30_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_armored_AGS30_BLU_G_F: CUP_Hilux_armored_AGS30_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_M2_BLU_G_F: CUP_Hilux_M2_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_armored_M2_BLU_G_F: CUP_Hilux_armored_M2_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_UB32_BLU_G_F: CUP_Hilux_UB32_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_armored_UB32_BLU_G_F: CUP_Hilux_armored_UB32_Base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_BMP1_BLU_G_F: CUP_Hilux_BMP1_base {scope=1;scopeCurator=1;};
	class CUP_B_Hilux_armored_BMP1_BLU_G_F: CUP_Hilux_armored_BMP1_Base {scope=1;scopeCurator=1;};
	class CUP_BAF_Jackal2_GMG_W;
	class CUP_B_Jackal2_GMG_FIA: CUP_BAF_Jackal2_GMG_W {scope=1;scopeCurator=1;};
	class CUP_BAF_Jackal2_L2A1_W;
	class CUP_B_Jackal2_L2A1_FIA: CUP_BAF_Jackal2_L2A1_W {scope=1;scopeCurator=1;};
	class CUP_TowingTractor_Base;
	class CUP_B_TowingTractor_NATO: CUP_TowingTractor_Base {scope=1;scopeCurator=1;};
	class CUP_O_TowingTractor_CSAT: CUP_TowingTractor_Base {scope=1;scopeCurator=1;};
	class CUP_I_TowingTractor_AAF: CUP_TowingTractor_Base {scope=1;scopeCurator=1;};
	class CUP_Merlin_HC3_Lux_Base;
	class CUP_C_Merlin_HC3_IDAP_Lux: CUP_Merlin_HC3_Lux_Base {scope=1;scopeCurator=1;};
	class CUP_Merlin_Rescue_Base;
	class CUP_C_Merlin_HC3_IDAP_Rescue: CUP_Merlin_Rescue_Base {scope=1;scopeCurator=1;};
	class CUP_BMP3_Base;
	class CUP_O_BMP3_CSAT_T: CUP_BMP3_Base {scope=1;scopeCurator=1;};
	class CUP_BMP1_base;
	class CUP_O_BMP1_CSAT: CUP_BMP1_base {scope=1;scopeCurator=1;};
	class CUP_BMP1P_base;
	class CUP_O_BMP1P_CSAT: CUP_BMP1P_base {scope=1;scopeCurator=1;};
	class CUP_BMP2_base;
	class CUP_O_BMP2_CSAT: CUP_BMP2_base {scope=1;scopeCurator=1;};
	class CUP_BMP2_HQ_Base;
	class CUP_O_BMP_HQ_CSAT: CUP_BMP2_HQ_Base {scope=1;scopeCurator=1;};
	class CUP_BMP2_Ambul_Base;
	class CUP_O_BMP2_AMB_CSAT: CUP_BMP2_Ambul_Base {scope=1;scopeCurator=1;};
	class CUP_BMP2_ZU_base;
	class CUP_O_BMP2_ZU_CSAT: CUP_BMP2_ZU_base {scope=1;scopeCurator=1;};
	class CUP_O_BMP1_CSAT_T: CUP_BMP1_base {scope=1;scopeCurator=1;};
	class CUP_O_BMP1P_CSAT_T: CUP_BMP1P_base {scope=1;scopeCurator=1;};
	class CUP_O_BMP2_CSAT_T: CUP_BMP2_base {scope=1;scopeCurator=1;};
	class CUP_O_BMP_HQ_CSAT_T: CUP_BMP2_HQ_Base {scope=1;scopeCurator=1;};
	class CUP_O_BMP2_AMB_CSAT_T: CUP_BMP2_Ambul_Base {scope=1;scopeCurator=1;};
	class CUP_O_BMP2_ZU_CSAT_T: CUP_BMP2_ZU_base {scope=1;scopeCurator=1;};
	class CUP_B_M2Bradley_USA_D;
	class CUP_B_M2Bradley_NATO_T: CUP_B_M2Bradley_USA_D {scope=1;scopeCurator=1;};
	class CUP_B_M6LineBacker_USA_D;
	class CUP_B_M6LineBacker_NATO_T: CUP_B_M6LineBacker_USA_D {scope=1;scopeCurator=1;};
	class CUP_B_M2A3Bradley_USA_D;
	class CUP_B_M2A3Bradley_NATO_T: CUP_B_M2A3Bradley_USA_D {scope=1;scopeCurator=1;};
	class CUP_B_Challenger2_Woodland_BAF;
	class CUP_B_Challenger2_Green_CTRG: CUP_B_Challenger2_Woodland_BAF {scope=1;scopeCurator=1;};
	class CUP_B_Challenger2_Sand_CTRG: CUP_B_Challenger2_Woodland_BAF {scope=1;scopeCurator=1;};
	class CUP_B_Challenger2_NATO: CUP_B_Challenger2_Woodland_BAF {scope=1;scopeCurator=1;};
	class CUP_M113_Base;
	class CUP_I_M113_AAF: CUP_M113_Base {scope=1;scopeCurator=1;};
	class CUP_M113_Med_Base;
	class CUP_I_M113_Med_AAF: CUP_M113_Med_Base {scope=1;scopeCurator=1;};
	class CUP_M163_Base;
	class CUP_I_M163_AAF: CUP_M163_Base {scope=1;scopeCurator=1;};
	class CUP_M1Abrams_M1A2SEP_Base;
	class CUP_B_M1A2SEP_NATO_T: CUP_M1Abrams_M1A2SEP_Base {scope=1;scopeCurator=1;};
	class CUP_B_M1A2SEP_NATO: CUP_M1Abrams_M1A2SEP_Base {scope=1;scopeCurator=1;};
	class CUP_M1Abrams_M1A2SEP_TUSK_Base;
	class CUP_B_M1A2SEP_TUSK_NATO_T: CUP_M1Abrams_M1A2SEP_TUSK_Base {scope=1;scopeCurator=1;};
	class CUP_B_M1A2SEP_TUSK_NATO: CUP_M1Abrams_M1A2SEP_TUSK_Base {scope=1;scopeCurator=1;};
	class CUP_M1Abrams_A2_TUSK_II_Base;
	class CUP_B_M1A2SEP_TUSK_II_NATO_T: CUP_M1Abrams_A2_TUSK_II_Base {scope=1;scopeCurator=1;};
	class CUP_B_M1A2SEP_TUSK_II_NATO: CUP_M1Abrams_A2_TUSK_II_Base {scope=1;scopeCurator=1;};
	class CUP_M163New_Base;
	class CUP_I_M163_Vulcan_AAF: CUP_M163New_Base {scope=1;scopeCurator=1;};
	class CUP_M113A3_Base;
	class CUP_I_M113A3_AAF: CUP_M113A3_Base {scope=1;scopeCurator=1;};
	class CUP_M113A3_HQ_Base;
	class CUP_I_M113A3_HQ_AAF: CUP_M113A3_HQ_Base {scope=1;scopeCurator=1;};
	class CUP_B_M113A3_Med_USA;
	class CUP_I_M113A3_Med_AAF: CUP_B_M113A3_Med_USA {scope=1;scopeCurator=1;};
	class CUP_M113A3_Reammo_Base;
	class CUP_I_M113A3_Reammo_AAF: CUP_M113A3_Reammo_Base {scope=1;scopeCurator=1;};
	class CUP_M113A3_Repair_Base;
	class CUP_I_M113A3_Repair_AAF: CUP_M113A3_Repair_Base {scope=1;scopeCurator=1;};
	class CUP_T72_Base;
	class CUP_O_T72_CSAT: CUP_T72_Base {scope=1;scopeCurator=1;};
	class CUP_O_T72_CSAT_T: CUP_T72_Base {scope=1;scopeCurator=1;};
	class CUP_ZSU23_Base;
	class CUP_I_ZSU23_AAF: CUP_ZSU23_Base {scope=1;scopeCurator=1;};
	class CUP_O_ZSU23_CSAT: CUP_ZSU23_Base {scope=1;scopeCurator=1;};
	class CUP_ZSU23_Afghan_Base;
	class CUP_I_ZSU23_Afghan_AAF: CUP_ZSU23_Afghan_Base {scope=1;scopeCurator=1;};
	class CUP_O_ZSU23_Afghan_CSAT: CUP_ZSU23_Afghan_Base {scope=1;scopeCurator=1;};
	class CUP_BRDM2_Base;
	class CUP_O_BRDM2_CSAT: CUP_BRDM2_Base {scope=1;scopeCurator=1;};
	class CUP_BRDM2_ATGM_Base;
	class CUP_O_BRDM2_ATGM_CSAT: CUP_BRDM2_ATGM_Base {scope=1;scopeCurator=1;};
	class CUP_BRDM2_HQ_Base;
	class CUP_O_BRDM2_HQ_CSAT: CUP_BRDM2_HQ_Base {scope=1;scopeCurator=1;};
	class CUP_O_BRDM2_CSAT_T: CUP_BRDM2_Base {scope=1;scopeCurator=1;};
	class CUP_O_BRDM2_ATGM_CSAT_T: CUP_BRDM2_ATGM_Base {scope=1;scopeCurator=1;};
	class CUP_O_BRDM2_HQ_CSAT_T: CUP_BRDM2_HQ_Base {scope=1;scopeCurator=1;};
	class CUP_BTR60_Base;
	class CUP_O_BTR60_CSAT: CUP_BTR60_Base {scope=1;scopeCurator=1;};
	class CUP_B_BTR60_FIA: CUP_BTR60_Base {scope=1;scopeCurator=1;};
	class CUP_BTR80A_Base;
	class CUP_B_BTR80A_FIA: CUP_BTR80A_Base {scope=1;scopeCurator=1;};
	class CUP_O_BTR80A_CSAT: CUP_BTR80A_Base {scope=1;scopeCurator=1;};
	class CUP_O_BTR80A_CSAT_T: CUP_BTR80A_Base {scope=1;scopeCurator=1;};
	class CUP_BTR80_Base;
	class CUP_B_BTR80_FIA: CUP_BTR80_Base {scope=1;scopeCurator=1;};
	class CUP_O_BTR80_CSAT: CUP_BTR80_Base {scope=1;scopeCurator=1;};
	class CUP_O_BTR80_CSAT_T: CUP_BTR80_Base {scope=1;scopeCurator=1;};
	class CUP_HMMWV_M2_GPK_Base;
	class CUP_B_HMMWV_M2_GPK_NATO_T: CUP_HMMWV_M2_GPK_Base {scope=1;scopeCurator=1;};
	class CUP_HMMWV_Crows_M2_Base;
	class CUP_B_HMMWV_Crows_M2_NATO_T: CUP_HMMWV_Crows_M2_Base {scope=1;scopeCurator=1;};
	class CUP_HMMWV_crows_MK19_Base;
	class CUP_B_HMMWV_Crows_MK19_NATO_T: CUP_HMMWV_crows_MK19_Base {scope=1;scopeCurator=1;};
	class CUP_LR_Transport_Base;
	class CUP_I_LR_Transport_AAF: CUP_LR_Transport_Base {scope=1;scopeCurator=1;};
	class CUP_LR_MG_Base;
	class CUP_I_LR_MG_AAF: CUP_LR_MG_Base {scope=1;scopeCurator=1;};
	class CUP_LR_Special_Base;
	class CUP_I_LR_SF_HMG_AAF: CUP_LR_Special_Base {scope=1;scopeCurator=1;};
	class CUP_I_LR_SF_GMG_AAF: CUP_LR_Special_Base {scope=1;scopeCurator=1;};
	class CUP_LR_Ambulance_Base;
	class CUP_I_LR_Ambulance_AAF: CUP_LR_Ambulance_Base {scope=1;scopeCurator=1;};
	class CUP_LR_AA_Base;
	class CUP_I_LR_AA_AAF: CUP_LR_AA_Base {scope=1;scopeCurator=1;};
	class CUP_nM1025_Unarmed_Base;
	class CUP_B_nM1025_Unarmed_NATO: CUP_nM1025_Unarmed_Base {scope=1;scopeCurator=1;};
	class CUP_nM1025_Unarmed_DF_Base;
	class CUP_B_nM1025_Unarmed_DF_NATO: CUP_nM1025_Unarmed_DF_Base {scope=1;scopeCurator=1;};
	class CUP_nM1025_M2_Base;
	class CUP_B_nM1025_M2_NATO: CUP_nM1025_M2_Base {scope=1;scopeCurator=1;};
	class CUP_nM1025_M2_DF_Base;
	class CUP_B_nM1025_M2_DF_NATO: CUP_nM1025_M2_DF_Base {scope=1;scopeCurator=1;};
	class CUP_nM1025_Mk19_Base;
	class CUP_B_nM1025_Mk19_NATO: CUP_nM1025_Mk19_Base {scope=1;scopeCurator=1;};
	class CUP_nM1025_Mk19_DF_Base;
	class CUP_B_nM1025_Mk19_DF_NATO: CUP_nM1025_Mk19_DF_Base {scope=1;scopeCurator=1;};
	class CUP_nM1025_M240_Base;
	class CUP_B_nM1025_M240_NATO: CUP_nM1025_M240_Base {scope=1;scopeCurator=1;};
	class CUP_nM1025_M240_DF_Base;
	class CUP_B_nM1025_M240_DF_NATO: CUP_nM1025_M240_DF_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1025_Unarmed_NATO_T: CUP_nM1025_Unarmed_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1025_Unarmed_DF_NATO_T: CUP_nM1025_Unarmed_DF_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1025_M2_NATO_T: CUP_nM1025_M2_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1025_M2_DF_NATO_T: CUP_nM1025_M2_DF_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1025_Mk19_NATO_T: CUP_nM1025_Mk19_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1025_Mk19_DF_NATO_T: CUP_nM1025_Mk19_DF_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1025_M240_NATO_T: CUP_nM1025_M240_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1025_M240_DF_NATO_T: CUP_nM1025_M240_DF_Base {scope=1;scopeCurator=1;};
	class CUP_nM1036_TOW_Base;
	class CUP_B_nM1036_TOW_NATO: CUP_nM1036_TOW_Base {scope=1;scopeCurator=1;};
	class CUP_nM1036_TOW_DF_Base;
	class CUP_B_nM1036_TOW_DF_NATO: CUP_nM1036_TOW_DF_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1036_TOW_NATO_T: CUP_nM1036_TOW_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1036_TOW_DF_NATO_T: CUP_nM1036_TOW_DF_Base {scope=1;scopeCurator=1;};
	class CUP_nM1097_Avenger_Base;
	class CUP_B_nM1097_AVENGER_NATO: CUP_nM1097_Avenger_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1097_AVENGER_NATO_T: CUP_nM1097_Avenger_Base {scope=1;scopeCurator=1;};
	class CUP_nM1038_Base;
	class CUP_B_nM1038_NATO: CUP_nM1038_Base {scope=1;scopeCurator=1;};
	class CUP_nM1038_DF_Base;
	class CUP_B_nM1038_DF_NATO: CUP_nM1038_DF_Base {scope=1;scopeCurator=1;};
	class CUP_nM1038_Ammo_Base;
	class CUP_B_nM1038_Ammo_NATO: CUP_nM1038_Ammo_Base {scope=1;scopeCurator=1;};
	class CUP_nM1038_Ammo_DF_Base;
	class CUP_B_nM1038_Ammo_DF_NATO: CUP_nM1038_Ammo_DF_Base {scope=1;scopeCurator=1;};
	class CUP_nM1038_Repair_Base;
	class CUP_B_nM1038_Repair_NATO: CUP_nM1038_Repair_Base {scope=1;scopeCurator=1;};
	class CUP_nM1038_Repair_DF_Base;
	class CUP_B_nM1038_Repair_DF_NATO: CUP_nM1038_Repair_DF_Base {scope=1;scopeCurator=1;};
	class CUP_nM1038_4s_Base;
	class CUP_B_nM1038_4s_NATO: CUP_nM1038_4s_Base {scope=1;scopeCurator=1;};
	class CUP_nM1038_4s_DF_Base;
	class CUP_B_nM1038_4s_DF_NATO: CUP_nM1038_4s_DF_Base {scope=1;scopeCurator=1;};
	class CUP_nM997_amb_Base;
	class CUP_B_nM997_NATO: CUP_nM997_amb_Base {scope=1;scopeCurator=1;};
	class CUP_nM997_amb_DF_Base;
	class CUP_B_nM997_DF_NATO: CUP_nM997_amb_DF_Base {scope=1;scopeCurator=1;};
	class CUP_nM1037sc_Base;
	class CUP_B_nM1037sc_NATO: CUP_nM1037sc_Base {scope=1;scopeCurator=1;};
	class CUP_nM1037sc_DF_Base;
	class CUP_B_nM1037sc_DF_NATO: CUP_nM1037sc_DF_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1038_NATO_T: CUP_nM1038_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1038_DF_NATO_T: CUP_nM1038_DF_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1038_Ammo_NATO_T: CUP_nM1038_Ammo_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1038_Ammo_DF_NATO_T: CUP_nM1038_Ammo_DF_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1038_Repair_NATO_T: CUP_nM1038_Repair_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1038_Repair_DF_NATO_T: CUP_nM1038_Repair_DF_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1038_4s_NATO_T: CUP_nM1038_4s_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1038_4s_DF_NATO_T: CUP_nM1038_4s_DF_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM997_NATO_T: CUP_nM997_amb_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM997_DF_NATO_T: CUP_nM997_amb_DF_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1037sc_NATO_T: CUP_nM1037sc_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1037sc_DF_NATO_T: CUP_nM1037sc_DF_Base {scope=1;scopeCurator=1;};
	class CUP_nM1025_SOV_M2_Base;
	class CUP_B_nM1025_SOV_M2_NATO: CUP_nM1025_SOV_M2_Base {scope=1;scopeCurator=1;};
	class CUP_nM1025_SOV_Mk19_Base;
	class CUP_B_nM1025_SOV_Mk19_NATO: CUP_nM1025_SOV_Mk19_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1025_SOV_M2_NATO_T: CUP_nM1025_SOV_M2_Base {scope=1;scopeCurator=1;};
	class CUP_B_nM1025_SOV_Mk19_NATO_T: CUP_nM1025_SOV_Mk19_Base {scope=1;scopeCurator=1;};
	class CUP_Tractor_Old_Base;
	class CUP_I_Tractor_Old_SYND: CUP_Tractor_Old_Base {scope=1;scopeCurator=1;};
	class CUP_UAZ_Unarmed_Base;
	class CUP_O_UAZ_Unarmed_CSAT: CUP_UAZ_Unarmed_Base {scope=1;scopeCurator=1;};
	class CUP_UAZ_Open_Base;
	class CUP_O_UAZ_Open_CSAT: CUP_UAZ_Open_Base {scope=1;scopeCurator=1;};
	class CUP_UAZ_MG_Base;
	class CUP_O_UAZ_MG_CSAT: CUP_UAZ_MG_Base {scope=1;scopeCurator=1;};
	class CUP_UAZ_AGS30_Base;
	class CUP_O_UAZ_AGS30_CSAT: CUP_UAZ_AGS30_Base {scope=1;scopeCurator=1;};
	class CUP_UAZ_SPG9_Base;
	class CUP_O_UAZ_SPG9_CSAT: CUP_UAZ_SPG9_Base {scope=1;scopeCurator=1;};
	class CUP_UAZ_AA_Base;
	class CUP_O_UAZ_AA_CSAT: CUP_UAZ_AA_Base {scope=1;scopeCurator=1;};
	class CUP_UAZ_METIS_Base;
	class CUP_O_UAZ_METIS_CSAT: CUP_UAZ_METIS_Base {scope=1;scopeCurator=1;};
	class CUP_M1165_GMV_BASE;
	class CUP_B_M1165_GMV_NATO_T: CUP_M1165_GMV_BASE {scope=1;scopeCurator=1;};
	class CUP_M1151_M2_BASE;
	class CUP_B_M1151_M2_NATO_T: CUP_M1151_M2_BASE {scope=1;scopeCurator=1;};
	class CUP_M1151_Deploy_BASE;
	class CUP_B_M1151_Deploy_NATO_T: CUP_M1151_Deploy_BASE {scope=1;scopeCurator=1;};
	class CUP_M1151_Mk19_BASE;
	class CUP_B_M1151_Mk19_NATO_T: CUP_M1151_Mk19_BASE {scope=1;scopeCurator=1;};
	class CUP_M1151_Unarmed_BASE;
	class CUP_B_M1151_NATO_T: CUP_M1151_Unarmed_BASE {scope=1;scopeCurator=1;};
	class CUP_M1152_BASE;
	class CUP_B_M1152_NATO_T: CUP_M1152_BASE {scope=1;scopeCurator=1;};
	class CUP_M1167_BASE;
	class CUP_B_M1167_NATO_T: CUP_M1167_BASE {scope=1;scopeCurator=1;};
	class CUP_B_AH1Z;
	class CUP_I_AH1Z_AAF: CUP_B_AH1Z {scope=1;scopeCurator=1;};
	class CUP_B_AH1Z_AT;
	class CUP_I_AH1Z_AT_AAF: CUP_B_AH1Z_AT {scope=1;scopeCurator=1;};
	class CUP_B_AH1Z_Escort;
	class CUP_I_AH1Z_Escort_AAF: CUP_B_AH1Z_Escort {scope=1;scopeCurator=1;};
	class CUP_AH1Z_Dynamic_Base;
	class CUP_I_AH1Z_Dynamic_AAF: CUP_AH1Z_Dynamic_Base {scope=1;scopeCurator=1;};
	class CUP_B_AV8B_DYN_USMC;
	class CUP_I_AV8B_DYN_AAF: CUP_B_AV8B_DYN_USMC {scope=1;scopeCurator=1;};
	class CUP_AW159_Unarmed_Base;
	class CUP_I_Wildcat_Unarmed_Green_AAF: CUP_AW159_Unarmed_Base {scope=1;scopeCurator=1;};
	class CUP_I_Wildcat_Hellfire_Armed_Green_AAF: CUP_AW159_Unarmed_Base {scope=1;scopeCurator=1;};
	class CUP_I_Wildcat_Cannon_Armed_Green_AAF: CUP_AW159_Unarmed_Base {scope=1;scopeCurator=1;};
	class CUP_I_Wildcat_Unarmed_Digital_AAF: CUP_AW159_Unarmed_Base {scope=1;scopeCurator=1;};
	class CUP_I_Wildcat_Hellfire_Armed_Digital_AAF: CUP_AW159_Unarmed_Base {scope=1;scopeCurator=1;};
	class CUP_I_Wildcat_Cannon_Armed_Digital_AAF: CUP_AW159_Unarmed_Base {scope=1;scopeCurator=1;};
	class CUP_AW159_Dynamic_Base;
	class CUP_I_Wildcat_Green_AAF: CUP_AW159_Dynamic_Base {scope=1;scopeCurator=1;};
	class CUP_I_Wildcat_Digital_AAF: CUP_I_Wildcat_Green_AAF {scope=1;scopeCurator=1;};
	class CUP_B_Wildcat_Unarmed_Green_AAF: CUP_I_Wildcat_Unarmed_Green_AAF {scope=1;scopeCurator=1;};
	class CUP_B_Wildcat_Hellfire_Armed_Green_AAF: CUP_I_Wildcat_Hellfire_Armed_Green_AAF {scope=1;scopeCurator=1;};
	class CUP_B_Wildcat_Cannon_Armed_Green_AAF: CUP_I_Wildcat_Cannon_Armed_Green_AAF {scope=1;scopeCurator=1;};
	class CUP_B_Wildcat_Unarmed_Digital_AAF: CUP_I_Wildcat_Unarmed_Digital_AAF {scope=1;scopeCurator=1;};
	class CUP_B_Wildcat_Hellfire_Armed_Digital_AAF: CUP_I_Wildcat_Hellfire_Armed_Digital_AAF {scope=1;scopeCurator=1;};
	class CUP_B_Wildcat_Cannon_Armed_Digital_AAF: CUP_I_Wildcat_Cannon_Armed_Digital_AAF {scope=1;scopeCurator=1;};
	class CUP_C130J_Base;
	class CUP_I_C130J_AAF: CUP_C130J_Base {scope=1;scopeCurator=1;};
	class CUP_C130J_VIV_Base;
	class CUP_I_C130J_Cargo_AAF: CUP_C130J_VIV_Base {scope=1;scopeCurator=1;};
	class cup_cessna_t41_base;
	class CUP_I_CESSNA_T41_UNARMED_LDF: cup_cessna_t41_base {scope=1;scopeCurator=1;};
	class CUP_L39_DYN_Base;
	class CUP_I_L39_AAF: CUP_L39_DYN_Base {scope=1;scopeCurator=1;};
	class CUP_Mi24_D_Dynamic_Base;
	class CUP_O_Mi24_D_Dynamic_CSAT_T: CUP_Mi24_D_Dynamic_Base {scope=1;scopeCurator=1;};
	class CUP_Mi24_P_Dynamic_Base;
	class CUP_O_Mi24_P_Dynamic_CSAT_T: CUP_Mi24_P_Dynamic_Base {scope=1;scopeCurator=1;};
	class CUP_Mi24_V_Dynamic_Base;
	class CUP_O_Mi24_V_Dynamic_CSAT_T: CUP_Mi24_V_Dynamic_Base {scope=1;scopeCurator=1;};
	class CUP_I_Mi24_D_Dynamic_AAF: CUP_Mi24_D_Dynamic_Base {scope=1;scopeCurator=1;};
	class CUP_Mi35_TOH_Dynamic_Base;
	class CUP_I_Mi24_Mk3_AAF: CUP_Mi35_TOH_Dynamic_Base {scope=1;scopeCurator=1;};
	class CUP_I_Mi24_Mk4_AAF: CUP_I_Mi24_Mk3_AAF {scope=1;scopeCurator=1;};
	class CUP_O_Mi24_Mk3_CSAT_T: CUP_Mi35_TOH_Dynamic_Base {scope=1;scopeCurator=1;};
	class CUP_O_Mi24_Mk4_CSAT_T: CUP_O_Mi24_Mk3_CSAT_T {scope=1;scopeCurator=1;};
	class CUP_MI6A_Base;
	class CUP_O_MI6A_CSAT_T: CUP_MI6A_Base {scope=1;scopeCurator=1;};
	class CUP_MI6T_Base;
	class CUP_O_MI6T_CSAT_T: CUP_MI6T_Base {scope=1;scopeCurator=1;};
	class CUP_Su25_Dyn_Base;
	class CUP_O_Su25_Dyn_CSAT_T: CUP_Su25_Dyn_Base {scope=1;scopeCurator=1;};
	class CUP_SU34_Dynamic_Base;
	class CUP_O_SU34_CSAT: CUP_SU34_Dynamic_Base {scope=1;scopeCurator=1;};
	class CUP_I_SU34_AAF: CUP_SU34_Dynamic_Base {scope=1;scopeCurator=1;};
	class CUP_SU34_LGB_Base;
	class CUP_O_SU34_LGB_CSAT: CUP_SU34_LGB_Base {scope=1;scopeCurator=1;};
	class CUP_SU34_AGM_Base;
	class CUP_O_SU34_AGM_CSAT: CUP_SU34_AGM_Base {scope=1;scopeCurator=1;};
	class CUP_I_SU34_LGB_AAF: CUP_SU34_LGB_Base {scope=1;scopeCurator=1;};
	class CUP_I_SU34_AGM_AAF: CUP_SU34_AGM_Base {scope=1;scopeCurator=1;};
	class CUP_M1A2Abrams_Base;
	class CUP_B_M1A2C_NATO_T: CUP_M1A2Abrams_Base {scope=1;scopeCurator=1;};
	class CUP_M1A2Abrams_TUSK_Base;
	class CUP_B_M1A2C_TUSK_NATO_T: CUP_M1A2Abrams_TUSK_Base {scope=1;scopeCurator=1;};
	class CUP_M1A2Abrams_TUSK_II_Base;
	class CUP_B_M1A2C_TUSK_II_NATO_T: CUP_M1A2Abrams_TUSK_II_Base {scope=1;scopeCurator=1;};
	class CUP_B_M1A2C_NATO: CUP_M1A2Abrams_Base {scope=1;scopeCurator=1;};
	class CUP_B_M1A2C_TUSK_NATO: CUP_M1A2Abrams_TUSK_Base {scope=1;scopeCurator=1;};
	class CUP_B_M1A2C_TUSK_II_NATO: CUP_M1A2Abrams_TUSK_II_Base {scope=1;scopeCurator=1;};
	class CUP_B_M1A2C_LDF: CUP_M1A2Abrams_Base {scope=1;scopeCurator=1;};
	class CUP_B_M1A2C_TUSK_LDF: CUP_M1A2Abrams_TUSK_Base {scope=1;scopeCurator=1;};
	class CUP_B_M1A2C_TUSK_II_LDF: CUP_M1A2Abrams_TUSK_II_Base {scope=1;scopeCurator=1;};
	class CUP_M270_HE_Base;
	class CUP_I_M270_HE_AAF: CUP_M270_HE_Base {scope=1;scopeCurator=1;};
	class CUP_M270_DPICM_Base;
	class CUP_I_M270_DPICM_AAF: CUP_M270_DPICM_Base {scope=1;scopeCurator=1;};
	class CUP_T55_Base;
	class CUP_O_T55_CSAT: CUP_T55_Base {scope=1;scopeCurator=1;};
	class CUP_O_T55_CSAT_T: CUP_T55_Base {scope=1;scopeCurator=1;};
	class CUP_Frigate_Base;
	class CUP_I_Frigate_AAF: CUP_Frigate_Base {scope=1;scopeCurator=1;};
	class CUP_Ka60_GL_BASE;
	class CUP_I_Ka60_GL_Digi_AAF: CUP_Ka60_GL_BASE {scope=1;scopeCurator=1;};
	class CUP_Ka60_Base;
	class CUP_I_Ka60_Digi_AAF: CUP_Ka60_Base {scope=1;scopeCurator=1;};
	class CUP_O_Ka60_GL_Hex_CSAT: CUP_Ka60_GL_BASE {scope=1;scopeCurator=1;};
	class CUP_O_Ka60_Hex_CSAT: CUP_Ka60_Base {scope=1;scopeCurator=1;};
	class CUP_O_Ka60_GL_Blk_CSAT: CUP_Ka60_GL_BASE {scope=1;scopeCurator=1;};
	class CUP_O_Ka60_Blk_CSAT: CUP_Ka60_Base {scope=1;scopeCurator=1;};
	class CUP_O_Ka60_GL_Whale_CSAT: CUP_Ka60_GL_BASE {scope=1;scopeCurator=1;};
	class CUP_O_Ka60_Whale_CSAT: CUP_Ka60_Base {scope=1;scopeCurator=1;};
};
