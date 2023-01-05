#include "\z\op183\addons\adminmenu\script_component.hpp"

if (isNull (getAssignedCuratorLogic player)) then {
    player remoteExec [QFUNC(makeZeusServer), 2];
    systemChat "[OP183 Admin Menu] You now have access to Zeus";

    [format ["%1 claimed zeus",profileName], false,"Admin Menu"] call FUNC(log);
} else {
    systemChat "[OP183 Admin Menu] You already have access to Zeus";
};
