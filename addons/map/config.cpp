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
        author = "Ghost";
        authors[] = {"veteran29", "YonV"};
        VERSION_CONFIG;
    };
};

class CfgMarkerClasses {
    class xmark_assets {
        displayName="Ghost Markers";
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgMarkerColors.hpp"
#include "ui\RscDisplayMainMap.hpp"
#include "CfgMarkers.hpp"