#include "script_component.hpp"
class CBA_Extended_EventHandlers;
class CfgVehicles {
    class Weapon_Base_F;
    class GVAR(Item_MX_BlackCamo): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "Jonpas";
        displayName = "[183RD] MX (Black Camo)";

        class TransportItems {
            MACRO_ADDITEM(GVAR(MX_BlackCamo),1);
        };
    };
    class GVAR(Item_MX_GL_BlackCamo): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "Jonpas";
        displayName = "[183RD] MX 3GL (Black Camo)";

        class TransportItems {
            MACRO_ADDITEM(GVAR(MX_GL_BlackCamo),1);
        };
    };
    class GVAR(Item_EBR_Black_F): Weapon_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsPrimary";
        author = "Tyrone";
        displayName = "[183RD] Mk14 Mod 1 EBR (Anodised Black)";

        class TransportItems {
            MACRO_ADDITEM(GVAR(EBR_Black_F),1);
        };
    };
    class Pistol_Base_F;
    class GVAR(Item_Walther_P99): Pistol_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsHandguns";
        author = "JoramD";
        displayName = "[183RD] Walther P99";

        class TransportItems {
            MACRO_ADDITEM(GVAR(Walther_P99),1);
        };
    };
    class GVAR(Item_Walther_P99_Tan): GVAR(Item_Walther_P99) {
        displayName = "[183RD] Walther P99 (Tan)";

        class TransportItems {
            MACRO_ADDITEM(GVAR(Walther_P99_Tan),1);
        };
    };

    class Launcher_Base_F;
    class GVAR(Item_MRAWS_Black_F): Launcher_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsSecondary";
        author = "Kresky";
        displayName = "[183RD] MAAWS Mk4 Mod 1 (Black)";

        class TransportItems {
            MACRO_ADDITEM(GVAR(MRAWS_Black_F),1);
        };
    };
    class GVAR(Item_MRAWS_Black_Rail_F): Launcher_Base_F {
        MACRO_ITEM_COMMON
        vehicleClass = "WeaponsSecondary";
        author = "Kresky";
        displayName = "[183RD] MAAWS Mk4 Mod 0 (Black)";

        class TransportItems {
            MACRO_ADDITEM(GVAR(MRAWS_Black_Rail_F),1);
        };
    };

};
