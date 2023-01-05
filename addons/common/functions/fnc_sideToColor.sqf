/*
 * Name: common_fnc_sideToColor
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
if (isNil "common_blufor_color") then {
    common_blufor_color = [blufor] call bis_fnc_sideColor;
    common_opfor_color = [opfor] call bis_fnc_sideColor;
    common_indep_color = [independent] call bis_fnc_sideColor;
    common_civ_color = [civilian] call bis_fnc_sideColor;
    common_empty_color = [sideUnknown] call bis_fnc_sideColor;
};

switch _this do {
    case blufor: {common_blufor_color};
    case opfor: {common_opfor_color};
    case independent: {common_indep_color};
    case civilian: {common_civ_color};
    default {common_empty_color};
};