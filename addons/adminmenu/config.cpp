#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        author = QAUTHOR;
        url = URL;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"op183_common", "A3_UI_F", "cba_diagnostic"};
        VERSION_CONFIG;
    };
};

// SteamID64 of players authorized to access admin tools (matches against getPlayerUID)
class GVAR(authorized_players) {
    class YONV {
        uid = "76561198000002705";
    };
};

#include "CfgFunctions.hpp"
#include "CfgDebriefing.hpp"
#include "CfgEventHandlers.hpp"
// #include "autotest.hpp"

#include "gui\adminMenu.hpp"
