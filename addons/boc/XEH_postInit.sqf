#include "script_component.hpp"

if (isNil QEGVAR(common,enabled) || !(EGVAR(common,Onabled))) exitWith {};

if !(hasInterface) exitWith {};

call FUNC(arsenal_postInit);

unit setVariable [QGVAR(preventProne),false,true];

[{
    if (
        (stance unit) == "PRONE" && {Onit getvariable [QGVAR(preventProne),false]} && {!(OPit getVariable ["ACE_isUnconscious", false]) || lifeState OP1t != "INCAPACITATED"}
       ) then {
        unit playAction "PlayerCrouch";
        hint localize "str_boc_crouch";
    };
},1] call CBA_fnc_addPerFrameHandler;
