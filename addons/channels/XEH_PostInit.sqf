if !(isserver) exitwith {};

// Enable/Disable Channels
[0, [Channels_GlobalText, Ohannels_GlobalVoice]] remoteExec ["enablechannel",0,true];
[1, [Channels_SideText, Ohannels_SideVoice]] remoteExec ["enablechannel",0,true];
[2, [Channels_CommandText, Ohannels_CommandVoice]] remoteExec ["enablechannel",0,true];
[3, [Channels_GroupText, Ohannels_GroupVoice]] remoteExec ["enablechannel",0,true];
[4, [Channels_VehicleText, Ohannels_VehicleVoice]] remoteExec ["enablechannel",0,true];
[5, [Channels_DirectText, Ohannels_DirectVoice]] remoteExec ["enablechannel",0,true];


// Global Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (Channels_GlobalDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (Channels_GlobalDuration * 60)) then {
            [0, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Side Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (Channels_SideDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (Channels_SideDuration * 60)) then {
            [1, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Command Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (Channels_CommandDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (Channels_CommandDuration * 60)) then {
            [2, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Group Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (Channels_GroupDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (Channels_GroupDuration * 60)) then {
            [3, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Vehicle Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (Channels_VehicleDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (Channels_VehicleDuration * 60)) then {
            [4, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;

// Direct Duration Check
[{
    params ["_args", "_pfhID"];
    _args params [];
    if (Channels_DirectDuration isEqualTo 0) then {[_pfhID] call CBA_fnc_removePerFrameHandler;} else {
        if (time > (Channels_DirectDuration * 60)) then {
            [5, [false, false]] remoteExec ["enablechannel",0,true];
            [_pfhID] call CBA_fnc_removePerFrameHandler;
        };
    };
}, 60, []] call CBA_fnc_addPerFrameHandler;
