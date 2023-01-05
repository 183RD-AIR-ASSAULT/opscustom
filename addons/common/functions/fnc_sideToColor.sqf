/*
 * Name: op183_common_fnc_sideToColor
 * Author: Snippers
 *
 * Arguments:
 * side
 *
 * Return:
 * array: color array
 *
 * Description:
 * Will return the color of the inputted side.
 */

//Cache vars for speed
if (isNil "op183_common_blufor_color") then {
    op183_common_blufor_color = [blufor] call bis_fnc_sideColor;
    op183_common_opfor_color = [opfor] call bis_fnc_sideColor;
    op183_common_indep_color = [independent] call bis_fnc_sideColor;
    op183_common_civ_color = [civilian] call bis_fnc_sideColor;
    op183_common_empty_color = [sideUnknown] call bis_fnc_sideColor;
};

switch _this do {
    case blufor: {op183_common_blufor_color};
    case opfor: {op183_common_opfor_color};
    case independent: {op183_common_indep_color};
    case civilian: {op183_common_civ_color};
    default {op183_common_empty_color};
};
