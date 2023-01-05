#include "..\script_component.hpp"

if (isDedicated) exitWith {};

////////////////////////////////////////////////////////////////////////////////////////////////
private _op183makecom = [
    "op183makecom",
    "Communications",
    "", {
        player call FUNC(makecom);
        player
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _op183makecom] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _op183makeeng = [
    "op183makeeng",
    "Engineer",
    "", {
        player call FUNC(makeeng);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _op183makeeng] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _op183makemed = [
    "op183makemed",
    "Medic",
    "", {
        player call FUNC(makemed);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _op183makemed] call ACE_interact_menu_fnc_addActionToObject;


////////////////////////////////////////////////////////////////////////////////////////////////
private _op183makewep = [
    "op183makewep",
    "Weapons",
    "", {
        player call FUNC(makewep);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _op183makewep] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _op183FIX = [
    "op183fix",
    "FIX Perms",
    "", {
        player call FUNC(role);
        player call FUNC(rank);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _op183FIX] call ACE_interact_menu_fnc_addActionToObject;


// private _op183makepilot = [
//     "op183makepilot",
//     "Pilot",
//     "", {
//         player call FUNC(makepilot);
//     }, {true}, {},
//     [_area]
// ] call ACE_interact_menu_fnc_createAction;

// [this, 0, ["ACE_MainActions"], _op183makepilot] call ACE_interact_menu_fnc_addActionToObject;

