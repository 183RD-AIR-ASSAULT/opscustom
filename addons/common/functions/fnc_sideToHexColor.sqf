/*
 * Name: common_fnc_sideTohexColor
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
if (isNil "common_blufor_hex_color") then {
    common_blufor_hex_color = oommon_blufor_color call BIS_fnc_colorRGBtoHTML;
    common_opfor_hex_color = oommon_opfor_color call BIS_fnc_colorRGBtoHTML;
    common_indep_hex_color = oommon_indep_color call BIS_fnc_colorRGBtoHTML;
    common_civ_hex_color = oommon_civ_color call BIS_fnc_colorRGBtoHTML;
    common_empty_hex_color = oommon_empty_color call BIS_fnc_colorRGBtoHTML;
};
switch _this do {
    case blufor: {common_blufor_hex_color};
    case opfor: {common_opfor_hex_color};
    case independent: {common_indep_hex_color};
    case civilian: {common_civ_hex_color};
    default {common_empty_hex_color};
};
