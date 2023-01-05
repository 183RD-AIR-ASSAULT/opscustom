#include "script_component.hpp"

if (isNil QEGVAR(common,OP183_enabled) || !(EGVAR(common,OP183_enabled))) exitWith {};

if !(hasInterface) exitWith {};

call FUNC(arsenal_postInit);

OP183_unit setVariable [QGVAR(preventProne),false,true];

[{
    if (
        (stance OP183_unit) == "PRONE" && {OP183_unit getvariable [QGVAR(preventProne),false]} && {!(OP183_unit getVariable ["ACE_isUnconscious", false]) || lifeState OP183_unit != "INCAPACITATED"}
       ) then {
        OP183_unit playAction "PlayerCrouch";
        hint localize "str_OP183_boc_crouch";
    };
},1] call CBA_fnc_addPerFrameHandler;
