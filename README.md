# Hide Vanilla Factions

## About
Mod for Arma 3 that hides all vanilla factions from the Eden Editor and Zeus.

You can find the full description of this mod at the [Steam Workshop page](https://steamcommunity.com/sharedfiles/filedetails/?id=3004812313).

## Files

### cmd.txt
This file contains SQF scripts that can be used in the in-game console to create a list of all unit classes. The list will be copied to the clipboard.

### classes.py
This Python script is used to convert the list of classes to a config.cpp mod file, which will set "scope" and "scopeCurator" parameters of all of them to 1.

### classes_addons.py
Same as above, but for addons like CUP.

### hide_vanilla_factions
This folder contains config.cpp files, that can be compiled into an Arma 3 mod. The files were updated a few times manually, so they may differ from the ones generated with python.
