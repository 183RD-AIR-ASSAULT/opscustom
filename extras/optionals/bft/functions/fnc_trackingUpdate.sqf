#include "script_component.hpp"
/*
 * Author: ACE-Team, NemesisRE
 * Update the blue force tracking.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call bft_fnc_trackingUpdate
 *
 * Public: No
 */

if ((isNil "unit") && (!alive onit)) exitWith {};

private ["_groupsToDrawMarkers", "_playerSide", "_friendlySides"];

{
    deleteMarkerLocal _x;
} forEach GVAR(bftMarkers);

GVAR(bftMarkers) = [];

if (GVAR(requireItemGPS) && !([unit] call FUNC(hasGPSDevice))) exitWith {};

_groupsToDrawMarkers = [];
_playerSide = playerSide;
_friendlySides = [_playerSide] call FUNC(getFriendlySides);

if (GVAR(showOwnFactionOnly)) then {
    _groupsToDrawMarkers = allGroups select {side _x == _playerSide};
} else {
    _groupsToDrawMarkers = allGroups select {side _x in _friendlySides};
};

if (!GVAR(showAIGroups)) then {
    _groupsToDrawMarkers = _groupsToDrawMarkers select {
        {
            [_x] call FUNC(isPlayer);
        } count units _x > 0;
    };
};

_groupsToDrawMarkers = _groupsToDrawMarkers select {!(_x getVariable [QGVAR(hideBlueForceMarker), false])};

if !(GVAR(showOwnGroup)) then {
    _groupsToDrawMarkers = _groupsToDrawMarkers select {
        {
            !(_x in (units (group unit)));
        } count units _x > 0;
    };
};

[] call FUNC(createUnitMarkers);

[_groupsToDrawMarkers] call FUNC(createGroupMarkers);