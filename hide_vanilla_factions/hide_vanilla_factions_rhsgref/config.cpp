class CfgPatches
{
	class NDT_HideVanillaFactions_RHSGREF
	{
		addonRootClass = "NDT_HideVanillaFactions";
        requiredVersion = 2.12;
		requiredAddons[] = {"rhsgref_c_canoe", "rhsgref_c_air"};
        skipWhenMissingDependencies = 1;
        units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class rhsgref_canoe_base;
	class rhsgref_civ_canoe: rhsgref_canoe_base {scope=1;scopeCurator=1;};
	class rhs_uh1h_base;
	class rhs_uh1h_idap: rhs_uh1h_base {scope=1;scopeCurator=1;};
};
