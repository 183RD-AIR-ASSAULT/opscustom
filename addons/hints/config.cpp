#include "script_component.hpp"


class CfgPatches {

    class OP183_Hints {
        author = QAUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "op183_main"
        };
        units[] = {};
        weapons[] = {};
        authors[] = {
            "O. Jemineh"
        };
        VERSION_CONFIG;
    };

};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "gui\RscHint.hpp"
