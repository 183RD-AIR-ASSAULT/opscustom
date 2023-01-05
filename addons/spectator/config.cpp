#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "op183_common"
        };
        author = "YonV";
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
