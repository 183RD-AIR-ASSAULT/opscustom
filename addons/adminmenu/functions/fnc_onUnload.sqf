#include "\z\op183\addons\adminmenu\script_component.hpp"

disableSerialization;

{
    [_x] call CBA_fnc_removePerFrameHandler;
} forEach GVAR(tabPFHHandles);

[false] remoteExec [QFUNC(fpsHandlerServer), 2];

uiNamespace setVariable [QGVAR(display), nil];
