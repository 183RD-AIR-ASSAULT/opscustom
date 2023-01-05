#include "\z\op183\addons\common\script_component.hpp"
/*
 * Name: op183_common_fnc_checkModVersion
 * Author: Snippers
 *
 * Arguments:
 *  Array - Version to check
 *
 * Return:
 * Boolean
 *
 * Description:
 * Checks if op183 Mission version is larger than the input version;
 */

params [
    ["_input",[0,0,0]]
];

private _op183Version = getMissionConfigValue ["op183_version",[0,0,0]];

([_op183Version,_input] call EFUNC(common,checkVersionArray));

