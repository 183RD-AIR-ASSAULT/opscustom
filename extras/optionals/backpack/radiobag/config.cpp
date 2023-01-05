#include "..\script_component.hpp"

class CfgPatches {
    class op183_backpack_RadioBag {
        name = QUOTE(COMPONENT_NAME);
        addonRootClass = "op183_backpack";
        requiredVersion = REQUIRED_VERSION;
        requiredaddons[] = {
            "a3_supplies_f_enoch_bags",
            "op183_backpack"
        };
        units[] = {
            QGVAR(RadioBag_01_BLACK),
            QGVAR(RadioBag_01_DIGI),
            QGVAR(RadioBag_01_EAF),
            QGVAR(RadioBag_01_GHEX),
            QGVAR(RadioBag_01_HEX),
            QGVAR(RadioBag_01_MTP),
            QGVAR(RadioBag_01_TROPIC),
            QGVAR(RadioBag_01_OUCAMO),
            QGVAR(RadioBag_01_WDL)
        };
        weapons[] = {};
        author = QAUTHOR;
        authors[] = {
            "O. Jemineh"
        };
        url = URL;
    };
};

#include "CfgVehicles.hpp"
