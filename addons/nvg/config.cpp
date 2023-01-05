#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "op183_common",
            "cba_main",
            "ace_nightvision",
            "BettIR_Core"
        };
        author = "YonV";
        authors[] = {"PDT"};
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgEffects.hpp"
#include "CfgWeapons.hpp"
