class CfgPatches
{
	class NDT_HideVanillaFactions_CBA
	{
		addonRootClass = "NDT_HideVanillaFactions";
        requiredVersion = 2.12;
		requiredAddons[] = {"cba_characters", "cba_ai"};
        skipWhenMissingDependencies = 1;
        units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class C_Man_casual_1_F_afro;
	class C_Man_casual_1_F_afro_sick: C_Man_casual_1_F_afro {scope=1;scopeCurator=1;};
	class C_Man_casual_3_F_afro;
	class C_Man_casual_3_F_afro_sick: C_Man_casual_3_F_afro {scope=1;scopeCurator=1;};
	class C_Man_casual_4_F_afro;
	class C_Man_casual_4_F_afro_sick: C_Man_casual_4_F_afro {scope=1;scopeCurator=1;};
	class C_Man_casual_5_F_afro;
	class C_Man_casual_5_F_afro_sick: C_Man_casual_5_F_afro {scope=1;scopeCurator=1;};
	class C_Man_casual_6_F_afro;
	class C_Man_casual_6_F_afro_sick: C_Man_casual_6_F_afro {scope=1;scopeCurator=1;};
	class C_man_polo_1_F_afro;
	class C_man_polo_1_F_afro_sick: C_man_polo_1_F_afro {scope=1;scopeCurator=1;};
	class C_man_polo_2_F_afro;
	class C_man_polo_2_F_afro_sick: C_man_polo_2_F_afro {scope=1;scopeCurator=1;};
	class C_man_polo_3_F_afro;
	class C_man_polo_3_F_afro_sick: C_man_polo_3_F_afro {scope=1;scopeCurator=1;};
	class C_man_polo_6_F_afro;
	class C_man_polo_6_F_afro_sick: C_man_polo_6_F_afro {scope=1;scopeCurator=1;};
	class C_man_sport_2_F_afro;
	class C_man_sport_2_F_afro_sick: C_man_sport_2_F_afro {scope=1;scopeCurator=1;};
	class B_TargetSoldier;
	class CBA_B_InvisibleTarget: B_TargetSoldier {scope=1;scopeCurator=1;};
	class O_TargetSoldier;
	class CBA_O_InvisibleTarget: O_TargetSoldier {scope=1;scopeCurator=1;};
	class I_TargetSoldier;
	class CBA_I_InvisibleTarget: I_TargetSoldier {scope=1;scopeCurator=1;};
	class CBA_B_InvisibleTargetVehicle: CBA_B_InvisibleTarget {scope=1;scopeCurator=1;};
	class CBA_O_InvisibleTargetVehicle: CBA_O_InvisibleTarget {scope=1;scopeCurator=1;};
	class CBA_I_InvisibleTargetVehicle: CBA_I_InvisibleTarget {scope=1;scopeCurator=1;};
	class CBA_B_InvisibleTargetAir: CBA_B_InvisibleTargetVehicle {scope=1;scopeCurator=1;};
	class CBA_O_InvisibleTargetAir: CBA_O_InvisibleTargetVehicle {scope=1;scopeCurator=1;};
	class CBA_I_InvisibleTargetAir: CBA_I_InvisibleTargetVehicle {scope=1;scopeCurator=1;};
};
