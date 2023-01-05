#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {
            "boc_moduleAdd",
            "boc_moduleOnChest",
            "boc_weaponHolder"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "main",
            "a3_ui_f",
            "A3_Modules_F",
            "ace_main",
            "ace_common",
            "ace_movement"
        };
        author = "NemesisRE";
        authors[] = {"DerZade"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
