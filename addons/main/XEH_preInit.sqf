#include "script_component.hpp"

ADDON = false;



ADDON = true;
// Flip Vehicle
[
    "op183_Main_FlipVehicle",
    "CHECKBOX",
    ["Flip Vehicle", "Add an action to players to allow them to flip land vehicles."],
    COMPONENT_NAME,
    false,
    true,
    {
        if (_this && { hasinterface }) then  { call FUNC(FlipVehicle)};
    }
] call CBA_fnc_addSetting;


// TFAR - Range Multiplyer
[
    "op183_Main_TFARTransmitRange",
    "SLIDER",
    ["TFAR - Range Multiplyer", "Increase or decrease max Transmit Range. 0.1 = poor range, 3.5 = All of Altis"],
    COMPONENT_NAME,
    [0, 10, 2.5, 1],
    true,
    {

    }
] call CBA_fnc_addSetting;

// TFAR - Terrain Interference
[
    "op183_Main_TFARTerrainInterference",
    "SLIDER",
    ["TFAR - Terrain Interference", "How much Terrain interferes with range. 0.1 = little impact, 2.0 = large impact."],
    COMPONENT_NAME,
    [0, 5, 1, 1],
    true,
    {

    }
] call CBA_fnc_addSetting;



// OP183_Main_DynamicSim
[
    "op183_Main_DynamicSim",
    "CHECKBOX",
    ["OP183 Dynamic Sim", "Simple check for Dynamic Sim enabled. If not enabled it will enable it to default OP183 Values. "],
    COMPONENT_NAME,
    false,
    true,
    {
        if (_this && { isserver }) then  { call FUNC(DynamicSim)};
    }
] call CBA_fnc_addSetting;

// OP183_Main_DynamicSim
[
    "op183_Main_LockCamVehicle",
    "CHECKBOX",
    ["OP183 Lock Camera in Vehicle", "Locks the camera to first-person inside vehicles. If not enabled it will enable it to default OP183 Values. "],
    COMPONENT_NAME,
    false,
    true,
    {
        if (_this && {hasInterface}) then  { call FUNC(LockCamVehicle)};
    }
] call CBA_fnc_addSetting;


// Dynamic Groups
[
    "op183_Main_DynamicGroups",
    "CHECKBOX",
    ["BIS Dynamic Groups", "Enable Vanilla Dynamic Groups system (U Menu)"],
    COMPONENT_NAME,
    false,
    true,
    {
        if (_this) then { call FUNC(DynamicGroups)};
    }
] call CBA_fnc_addSetting;
