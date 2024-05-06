class CfgPatches
{
	class NDT_HideVanillaFactions_ACE
	{
		addonRootClass = "NDT_HideVanillaFactions";
        requiredVersion = 2.12;
		requiredAddons[] = {"ace_spottingscope", "ace_dragon"};
        skipWhenMissingDependencies = 1;
        units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class ACE_SpottingScopeObject;
	class ACE_B_SpottingScope: ACE_SpottingScopeObject {scope=1;scopeCurator=1;};
	class ACE_O_SpottingScope: ACE_SpottingScopeObject {scope=1;scopeCurator=1;};
	class ACE_I_SpottingScope: ACE_SpottingScopeObject {scope=1;scopeCurator=1;};
	class ACE_B_T_SpottingScope: ACE_SpottingScopeObject {scope=1;scopeCurator=1;};
	class ACE_O_T_SpottingScope: ACE_SpottingScopeObject {scope=1;scopeCurator=1;};
	class ace_dragon_staticBase;
	class ace_dragon_staticAssembled: ace_dragon_staticBase {scope=1;scopeCurator=1;};
};
