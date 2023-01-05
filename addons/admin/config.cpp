#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "op183_main"
        };
        author = "YonV";
        authors[] = {"veteran29"};
        VERSION_CONFIG;
    };
};

#include "adminWhitelist.hpp"
