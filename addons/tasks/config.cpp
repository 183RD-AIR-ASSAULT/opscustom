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
        authors[] = {"3Mydlo3"};
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
