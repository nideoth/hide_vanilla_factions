class CfgPatches
{
	class NDT_HideVanillaFactions_Unsung
	{
		addonRootClass = "NDT_HideVanillaFactions";
        requiredVersion = 2.12;
		requiredAddons[] = {"uns_parachutes", "uns_rescue", "uns_mig21_c"};
        skipWhenMissingDependencies = 1;
        units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class uns_parachute_T10_base;
	class uns_parachute_T10: uns_parachute_T10_base {scope=1;scopeCurator=1;};
	class B_Boat_Transport_01_F;
	class uns_stokesBasket: B_Boat_Transport_01_F {scope=1;scopeCurator=1;};
	class I_Ejection_Seat_Plane_Fighter_04_F;
	class uns_mig21_ejection_seat: I_Ejection_Seat_Plane_Fighter_04_F {scope=1;scopeCurator=1;};
};
