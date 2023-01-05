#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "common"
        };
        author = "Ghost";
        authors[] = {"3Mydlo3"};
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
