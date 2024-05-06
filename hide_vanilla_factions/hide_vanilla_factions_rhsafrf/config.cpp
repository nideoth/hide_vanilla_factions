class CfgPatches
{
	class NDT_HideVanillaFactions_RHSAFRF
	{
		addonRootClass = "NDT_HideVanillaFactions";
        requiredVersion = 2.12;
		requiredAddons[] = {"rhs_c_a2port_air", "rhs_c_a2port_car"};
        skipWhenMissingDependencies = 1;
        units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class RHS_Mi8AMT_vvs;
	class RHS_Mi8amt_civilian: RHS_Mi8AMT_vvs {scope=1;scopeCurator=1;};
	class RHS_Mi8T_vvs;
	class RHS_Mi8t_civilian: RHS_Mi8T_vvs {scope=1;scopeCurator=1;};
	class RHS_Ural_Civ_Base;
	class RHS_Ural_Civ_01: RHS_Ural_Civ_Base {scope=1;scopeCurator=1;};
	class RHS_Ural_Civ_02: RHS_Ural_Civ_01 {scope=1;scopeCurator=1;};
	class RHS_Ural_Civ_03: RHS_Ural_Civ_01 {scope=1;scopeCurator=1;};
	class RHS_Ural_Open_Civ_01: RHS_Ural_Civ_Base {scope=1;scopeCurator=1;};
	class RHS_Ural_Open_Civ_02: RHS_Ural_Open_Civ_01 {scope=1;scopeCurator=1;};
	class RHS_Ural_Open_Civ_03: RHS_Ural_Open_Civ_01 {scope=1;scopeCurator=1;};
};
