#include "..\script_component.hpp"
/*

 * \medical\supplies\functions\fn_doUnpackFirstAid.sqf
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
 * [player] call medical_supplies_fnc_doUnpackFirstAid;
 *
 */

// -------------------------------------------------------------------------------------------------

params ["_unit", "_target"];

_target removeItem "medbags_FirstAid";

[_unit, "medbags_FirstAid", 1, _order, _overflow] call EFUNC(common,addItem);
