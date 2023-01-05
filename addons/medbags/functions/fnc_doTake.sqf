#include "..\script_component.hpp"
/*

 * \op183_medical\supplies\functions\fn_doUnpackFirstAid.sqf
 * by Ojemineh
 *
 * unpack medical supplies
 *
 * Arguments:
 * 0: unit - <OBJECT>
 *
 * Return:
 * nothing
 *
 * Example:
 * [player] call OP183_medical_supplies_fnc_doUnpackFirstAid;
 *
 */

// -------------------------------------------------------------------------------------------------

params ["_unit", "_target"];

_target removeItem "op183_medbags_FirstAid";

[_unit, "op183_medbags_FirstAid", 1, _order, _overflow] call EFUNC(common,addItem);
