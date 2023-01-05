#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "main"
        };
        author = QAUTHOR;
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"
#include "ACE_Medical_Treatment.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"