#include "..\script_component.hpp"
/*

 * \op183_medical\supplies\functions\fn_doUnpackDrugKit.sqf
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
 * [player] call OP183_medical_supplies_fnc_doUnpackDrugKit;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_unit"];

_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _unit) exitWith {};

// -------------------------------------------------------------------------------------------------

[_unit] spawn {

    params ["_unit"];

    _unit playAction "Gear";

    if (vehicle _unit != _unit) then {
        playSound QGVAR(Medical_MedicKit_Open_1);
    } else {
        private _pitch = random [0.6, 1, 1.4];
        playSound3D ["z\op183\addons\medbags\data\sounds\medickit_open_1.ogg", _unit]
    };

    OP183_MEDICAL_SUPPLIES_UNPACK_SUCCESS = false;
    OP183_MEDICAL_SUPPLIES_UNPACK_FAILURE = false;

    [
        2,
        [], { OP183_MEDICAL_SUPPLIES_UNPACK_SUCCESS = true; }, { OP183_MEDICAL_SUPPLIES_UNPACK_FAILURE = true; },
        localize "Unpack Drug Kit....",
 {true},
        ["isNotInside", "isNotSitting", "isNotSwimming"]
    ] call ACE_common_fnc_progressBar;

    waitUntil {if ((OP183_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (OP183_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};

    if (OP183_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {

        _unit removeItem "op183_medbags_DrugKit";

        private _order = [3,2,1];
        private _overflow = true;

        [_unit, "kat_TXA", 10, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_amiodarone", 10, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_atropine", 10, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_lidocaine", 10, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_naloxone", 10, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_nitroglycerin", 10, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_norepinephrine", 10, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_phenylephrine", 10, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_epinephrine", 10, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_morphine", 16, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_adenosine", 8, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_phenylephrine", 10, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "kat_phenylephrine_inject", 8, _order, _overflow] call EFUNC(common,addItem);
    };
};
