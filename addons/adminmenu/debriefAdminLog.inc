/*
    Author: Freddo

    Creates a debriefing section for admins containing all
    log messasges sent during the mission.
    Displayed in mission debriefing screen.

    Include this file in description.ext of your mission

    Example:
    class CfgDebriefingSections {
        #include "\z\op183\addons\adminmenu\debriefAdminLog.inc"
    };
*/

class op183_adminlog
{
    title = "183rd Log";
    variable = "op183_adminmenu_debrief";
};
