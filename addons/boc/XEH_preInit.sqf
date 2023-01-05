#include "script_component.hpp"

ADDON = false;

#include "initCBASettings.sqf"

if (isNil QEGVAR(common,enabled) || !(EGVAR(common,Onabled))) exitWith {};

#include "XEH_PREP.hpp"

ADDON = true;
