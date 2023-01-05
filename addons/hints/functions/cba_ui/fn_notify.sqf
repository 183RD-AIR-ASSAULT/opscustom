/*
 * ARMA EXTENDED ENVIRONMENT
 * \z\op183\addons\hints\functions\cba_ui\fn_displayText.sqf
 * by Ojemineh
 *
 * replace cba notify
 *
 * Arguments:
 * 0: text   - <STRING>
 * 1: sound  - <BOOLEAN>
 * 2: delay  - <NUMBER>
 * 3: priority  - <NUMBER>
 *
 * Return:
 * nothing
 *
 * Example:
 * ["Banana", 1.5, [1, 1, 0, 1]] call CBA_fnc_notify
 *
 */

// -------------------------------------------------------------------------------------------------

params ["_text"];

private _hint_option_cba = (missionNamespace getVariable ["op183_hint_option_cba", true]);

if (_hint_option_cba) then {

    if (_text isEqualType []) then {
        if (count _text > 0) then {_text = _text select 0;};
    };

    _text = format [hint_op183_liner_1, _text];

    [_text, -1, -1] call op183_fnc_hint;

} else {

    [_text] call CBA_fnc_notifyEx;

};
