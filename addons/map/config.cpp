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
        authors[] = {"veteran29", "YonV"};
        VERSION_CONFIG;
    };
};

class CfgMarkerClasses {
    class xmark_assets {
        displayName="183rd Markers";
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgMarkerColors.hpp"
#include "ui\RscDisplayMainMap.hpp"
#include "CfgMarkers.hpp"
