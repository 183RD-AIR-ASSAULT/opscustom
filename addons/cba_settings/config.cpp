#include "script_component.hpp"

class CfgPatches {
    class cba_settings_userconfig {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_settings"};
        author = "YonV";
        authors[] = {"commy2"};
        url = URL;
        VERSION_CONFIG;
    };
};
