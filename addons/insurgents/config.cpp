#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {
            QGVAR(soldier_i),
            QGVAR(soldier_o),
            QGVAR(soldier_b)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "op183_common"
        };
        author = "YonV";
        authors[] = {"veteran29"};
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgGroups.hpp"
#include "CfgInsurgentGear.hpp"
#include "CfgVehicles.hpp"
