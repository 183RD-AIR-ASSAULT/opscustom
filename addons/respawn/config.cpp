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
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgRespawnTemplates.hpp"
