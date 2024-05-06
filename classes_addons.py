import json

# read file
classes = []
with open("classes/classes_cup.txt", 'r') as classes_file:
    classes = json.loads(classes_file.read())


# addon list
addon_list = []
for x in classes:
    if x[1] not in addon_list:
        addon_list.append(x[1])
print(addon_list)

classes = [c[0] for c in classes]


# test file
with open("classes_test.txt", 'w') as test_file:
	test_classes = [str(s)+"\n" for s in classes]
	test_file.writelines(test_classes)

# cfgPatches string
patches_str = """// Temporary until 2.14 is released with skipWhenMissingDependencies
#if __has_include("\\CUP\\AirVehicles\\CUP_AirVehicles_412\\config.bin")
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
        //skipWhenMissingDependencies = 1;
        units[] = {};
		weapons[] = {};
	};
};
#endif\n
"""

class_log = []

def parent_class(c: list):
    class_log.append(c[0])
    if len(c)==1 or c[1] in ["Null", "None"]:
        return ""
    if c[1] in class_log: 
        return ""
    else:
        class_log.append(c[1])
        return f"\tclass {c[1]};\n"

def class_code(c: list) -> str:
    s = f"\tclass {c[0]}"
    if len(c)>1 and c[1] not in ["Null", "None"]:
        s += f": {c[1]}"
    s += " {scope=1;scopeCurator=1;};\n"
    return s

def classes_code(name: str, cl: list) -> str:
    s = f"class {name}\n{{\n"
    for c in cl:
        if c[0] in ["Null", "None"]: continue
        s += parent_class(c)
        s += class_code(c)
    s += "};\n"
    return s

# cfgVehicles string
class_log = []
vehicles_str = classes_code("CfgVehicles", classes)

# write final file
final_str = patches_str + vehicles_str

with open("ADDONTESTconfig.cpp", 'w') as config_file:
    config_file.write(final_str)
