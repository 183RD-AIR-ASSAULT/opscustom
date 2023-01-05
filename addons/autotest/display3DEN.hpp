class ctrlMenuStrip;
class display3DEN {
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                class GVARMAIN(Folder) {
                    items[] += {ADDON};
                };
                class ADDON {
                    text = "OP183 Autotest";
                    action = QUOTE(edit3DENMissionAttributes QQGVAR(Attributes););
                    //picture = "\z\op183\addons\common\UI\icon_gear_ca";
                };
            };
        };
    };
};
