#include "script_component.hpp"

ADDON = false;

#include "initCBASettings.sqf"

if (isNil QEGVAR(common,OP183_enabled) || !(EGVAR(common,OP183_enabled))) exitWith {};

#include "XEH_PREP.hpp"

ADDON = true;
