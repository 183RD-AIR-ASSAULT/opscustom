#include "script_component.hpp"

#ifndef LEAN_RHS_CUP_HLC

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"common"};
        author = QAUTHOR;
        authors[] = {"PabstMirror"};
        authorUrl = URL;
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"

#endif