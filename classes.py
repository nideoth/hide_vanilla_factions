import json


V_WHITELIST = ["AllVehicles"]
V_BLACKLIST = ["Item_B_UavTerminal", "Item_C_UavTerminal", "Item_I_E_UavTerminal"]


# read file
classes = []
with open("classes/classes.txt", 'r') as classes_file:
    classes = json.loads(classes_file.read())


# filter vehicles classes
def filter_vehicles_class(vehicles_class: list):
    if any(x in V_BLACKLIST for x in vehicles_class):
        return False
    if any(x in V_WHITELIST for x in vehicles_class):
        return True
    return False

classes = filter(filter_vehicles_class, classes)


# test file
#with open("classes_test.txt", 'w') as test_file:
#	test_file.writelines([str(s)+"\n" for s in classes])


# cfgPatches string
patches_str = """class CfgPatches
{
	class NDT_HideVanillaFactions
	{
		name = "Hide Vanilla Factions";
		author = "Nideoth";
		requiredVersion = 2.12;
		requiredAddons[] = {"A3_Data_F_AoW_Loadorder"};
        units[] = {};
		weapons[] = {};
	};
};\n
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
    s += "};\n\n"
    return s

# cfgVehicles string
class_log = []
vehicles_str = classes_code("CfgVehicles", classes)

# cfgGroups string
groups_str = """class CfgGroups
{
	class West
	{
		delete BLU_F;
		delete Guerilla;
		delete BLU_T_F;
		delete BLU_CTRG_F;
		delete Gendarmerie;
		delete BLU_W_F;
	};
	class East
	{
		delete OPF_F;
		delete OPF_T_F;
		delete OPF_G_F;
		delete OPF_R_F;
	};
	class Indep
	{
		delete IND_F;
		delete IND_C_F;
		delete IND_G_F;
		delete IND_E_F;
		delete IND_L_F;
	};
};\n
"""

# write final file
final_str = patches_str + groups_str + vehicles_str

with open("TESTconfig.cpp", 'w') as config_file:
    config_file.write(final_str)
