#include "script_component.hpp"
class CfgGlasses {
    class G_Balaclava_blk;
    class G_Balaclava_combat;
    class G_Balaclava_lowprofile;
    class G_Combat;
    class G_Balaclava_TI_G_blk_F;
    class G_Balaclava_TI_blk_F;

    class GVAR(Goggles_Black): G_Combat {
        MACRO_GOGGLES_COMMON
        author = "Pomigit, Jonpas";
        displayname = "Tactical Goggles (Black)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\goggles_black_co.paa)};
    };
    class GVAR(Goggles_Green): G_Combat {
        MACRO_GOGGLES_COMMON
        author = "Pomigit, Jonpas";
        displayname = "Tactical Goggles (Green)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\goggles_green_co.paa)};
    };
    class GVAR(Goggles_Tan): G_Combat {
        MACRO_GOGGLES_COMMON
        author = "Pomigit, Jonpas";
        displayname = "Tactical Goggles (Tan)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\goggles_tan_co.paa)};
    };
    class GVAR(Multicam_Snow_lite_G_Balaclava_Multicam_Snow): G_Balaclava_blk {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam Snow) Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Multicam_Snow_lite_G_Balaclava_combat_Multicam_Snow): G_Balaclava_combat {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam Snow) Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_Snow_co.paa),
            QPATHTOF(data\g_combat_Multicam_Snow_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_combat_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Multicam_Snow_lite_G_Balaclava_lowprofile_Multicam_Snow): G_Balaclava_lowprofile {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam Snow) Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_Snow_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_lowprofile_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Multicam_Snow_lite_G_Combat_Multicam_Snow): G_Combat {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam Snow) Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Multicam_Snow_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_g_combat_Multicam_Snow_CA.paa);
        MACRO_ITEM_COMMON
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class GVAR(Multicam_Snow_lite_G_Balaclava_TI_G_Multicam_Snow_F): G_Balaclava_TI_G_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam Snow) Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Multicam_Snow_F_co.paa),
            QPATHTOF(data\g_combat_Multicam_Snow_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_G_Multicam_Snow_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class GVAR(Multicam_Snow_lite_G_Balaclava_TI_Multicam_Snow_F): G_Balaclava_TI_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam Snow) Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Multicam_Snow_F_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_Multicam_Snow_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class GVAR(US_M81_lite_G_Balaclava_US_M81): G_Balaclava_blk {
        author = QAUTHOR;
        displayName="[GHOST] (M81) Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_US_M81_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(US_M81_lite_G_Balaclava_combat_US_M81): G_Balaclava_combat {
        author = QAUTHOR;
        displayName="[GHOST] (M81) Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_M81_co.paa),
            QPATHTOF(data\g_combat_US_M81_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_combat_US_M81_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(US_M81_lite_G_Balaclava_lowprofile_US_M81): G_Balaclava_lowprofile {
        author = QAUTHOR;
        displayName="[GHOST] (M81) Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_M81_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_lowprofile_US_M81_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(US_M81_lite_G_Combat_US_M81): G_Combat {
        author = QAUTHOR;
        displayName="[GHOST] (M81) Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_US_M81_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_g_combat_US_M81_CA.paa);
        MACRO_ITEM_COMMON
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class GVAR(US_M81_lite_G_Balaclava_TI_G_US_M81_F): G_Balaclava_TI_G_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (M81) Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_US_M81_F_co.paa),
            QPATHTOF(data\g_combat_US_M81_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_G_US_M81_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class GVAR(US_M81_lite_G_Balaclava_TI_US_M81_F): G_Balaclava_TI_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (M81) Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_US_M81_F_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_US_M81_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class GVAR(US_DCU_lite_G_Balaclava_US_DCU): G_Balaclava_blk {
        author = QAUTHOR;
        displayName="[GHOST] (DCU) Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(US_DCU_lite_G_Balaclava_combat_US_DCU): G_Balaclava_combat {
        author = QAUTHOR;
        displayName="[GHOST] (DCU) Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_DCU_co.paa),
            QPATHTOF(data\g_combat_US_DCU_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_combat_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(US_DCU_lite_G_Balaclava_lowprofile_US_DCU): G_Balaclava_lowprofile {
        author = QAUTHOR;
        displayName="[GHOST] (DCU) Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_DCU_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_lowprofile_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(US_DCU_lite_G_Combat_US_DCU): G_Combat {
        author = QAUTHOR;
        displayName="[GHOST] (DCU) Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_US_DCU_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_g_combat_US_DCU_CA.paa);
        MACRO_ITEM_COMMON
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class GVAR(US_DCU_lite_G_Balaclava_TI_G_US_DCU_F): G_Balaclava_TI_G_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (DCU) Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_US_DCU_F_co.paa),
            QPATHTOF(data\g_combat_US_DCU_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_G_US_DCU_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class GVAR(US_DCU_lite_G_Balaclava_TI_US_DCU_F): G_Balaclava_TI_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (DCU) Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_US_DCU_F_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_US_DCU_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class GVAR(Solid_White_lite_G_Balaclava_Solid_White): G_Balaclava_blk {
        author = QAUTHOR;
        displayName="[GHOST] (White) Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_White_lite_G_Balaclava_combat_Solid_White): G_Balaclava_combat {
        author = QAUTHOR;
        displayName="[GHOST] (White) Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_White_co.paa),
            QPATHTOF(data\g_combat_Solid_White_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_combat_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_White_lite_G_Balaclava_lowprofile_Solid_White): G_Balaclava_lowprofile {
        author = QAUTHOR;
        displayName="[GHOST] (White) Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_White_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_lowprofile_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_White_lite_G_Combat_Solid_White): G_Combat {
        author = QAUTHOR;
        displayName="[GHOST] (White) Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Solid_White_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_g_combat_Solid_White_CA.paa);
        MACRO_ITEM_COMMON
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class GVAR(Solid_White_lite_G_Balaclava_TI_G_Solid_White_F): G_Balaclava_TI_G_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (White) Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_White_F_co.paa),
            QPATHTOF(data\g_combat_Solid_White_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_G_Solid_White_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class GVAR(Solid_White_lite_G_Balaclava_TI_Solid_White_F): G_Balaclava_TI_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (White) Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_White_F_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_Solid_White_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class GVAR(Solid_Tan_lite_G_Balaclava_Solid_Tan): G_Balaclava_blk {
        author = QAUTHOR;
        displayName="[GHOST] (Tan) Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_Solid_Tan_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_Tan_lite_G_Balaclava_combat_Solid_Tan): G_Balaclava_combat {
        author = QAUTHOR;
        displayName="[GHOST] (Tan) Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Tan_co.paa),
            QPATHTOF(data\g_combat_Solid_Tan_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_combat_Solid_Tan_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_Tan_lite_G_Balaclava_lowprofile_Solid_Tan): G_Balaclava_lowprofile {
        author = QAUTHOR;
        displayName="[GHOST] (Tan) Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Tan_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_lowprofile_Solid_Tan_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_Tan_lite_G_Combat_Solid_Tan): G_Combat {
        author = QAUTHOR;
        displayName="[GHOST] (Tan) Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Solid_Tan_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_g_combat_Solid_Tan_CA.paa);
        MACRO_ITEM_COMMON
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class GVAR(Solid_Tan_lite_G_Balaclava_TI_G_Solid_Tan_F): G_Balaclava_TI_G_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Tan) Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_Tan_F_co.paa),
            QPATHTOF(data\g_combat_Solid_Tan_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_G_Solid_Tan_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class GVAR(Solid_Tan_lite_G_Balaclava_TI_Solid_Tan_F): G_Balaclava_TI_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Tan) Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_Tan_F_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_Solid_Tan_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class GVAR(Solid_Olive_lite_G_Balaclava_Solid_Olive): G_Balaclava_blk {
        author = QAUTHOR;
        displayName="[GHOST] (Olive) Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_Olive_lite_G_Balaclava_combat_Solid_Olive): G_Balaclava_combat {
        author = QAUTHOR;
        displayName="[GHOST] (Olive) Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Olive_co.paa),
            QPATHTOF(data\g_combat_Solid_Olive_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_combat_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_Olive_lite_G_Balaclava_lowprofile_Solid_Olive): G_Balaclava_lowprofile {
        author = QAUTHOR;
        displayName="[GHOST] (Olive) Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Olive_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_lowprofile_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_Olive_lite_G_Combat_Solid_Olive): G_Combat {
        author = QAUTHOR;
        displayName="[GHOST] (Olive) Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Solid_Olive_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_g_combat_Solid_Olive_CA.paa);
        MACRO_ITEM_COMMON
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class GVAR(Solid_Olive_lite_G_Balaclava_TI_G_Solid_Olive_F): G_Balaclava_TI_G_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Olive) Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_Olive_F_co.paa),
            QPATHTOF(data\g_combat_Solid_Olive_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_G_Solid_Olive_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class GVAR(Solid_Olive_lite_G_Balaclava_TI_Solid_Olive_F): G_Balaclava_TI_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Olive) Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_Olive_F_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_Solid_Olive_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class GVAR(US_Tigerstripe_lite_G_Balaclava_US_Tigerstripe): G_Balaclava_blk {
        author = QAUTHOR;
        displayName="[GHOST] (Tigerstripe) Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(US_Tigerstripe_lite_G_Balaclava_combat_US_Tigerstripe): G_Balaclava_combat {
        author = QAUTHOR;
        displayName="[GHOST] (Tigerstripe) Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_Tigerstripe_co.paa),
            QPATHTOF(data\g_combat_US_Tigerstripe_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_combat_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(US_Tigerstripe_lite_G_Balaclava_lowprofile_US_Tigerstripe): G_Balaclava_lowprofile {
        author = QAUTHOR;
        displayName="[GHOST] (Tigerstripe) Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_Tigerstripe_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_lowprofile_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(US_Tigerstripe_lite_G_Combat_US_Tigerstripe): G_Combat {
        author = QAUTHOR;
        displayName="[GHOST] (Tigerstripe) Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_US_Tigerstripe_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_g_combat_US_Tigerstripe_CA.paa);
        MACRO_ITEM_COMMON
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class GVAR(US_Tigerstripe_lite_G_Balaclava_TI_G_US_Tigerstripe_F): G_Balaclava_TI_G_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Tigerstripe) Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_US_Tigerstripe_F_co.paa),
            QPATHTOF(data\g_combat_US_Tigerstripe_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_G_US_Tigerstripe_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class GVAR(US_Tigerstripe_lite_G_Balaclava_TI_US_Tigerstripe_F): G_Balaclava_TI_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Tigerstripe) Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_US_Tigerstripe_F_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_US_Tigerstripe_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class GVAR(Solid_Ranger_Green_lite_G_Balaclava_Solid_Ranger_Green): G_Balaclava_blk {
        author = QAUTHOR;
        displayName="[GHOST] (Ranger Green) Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_Ranger_Green_lite_G_Balaclava_combat_Solid_Ranger_Green): G_Balaclava_combat {
        author = QAUTHOR;
        displayName="[GHOST] (Ranger Green) Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Ranger_Green_co.paa),
            QPATHTOF(data\g_combat_Solid_Ranger_Green_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_combat_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_Ranger_Green_lite_G_Balaclava_lowprofile_Solid_Ranger_Green): G_Balaclava_lowprofile {
        author = QAUTHOR;
        displayName="[GHOST] (Ranger Green) Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Ranger_Green_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_lowprofile_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_Ranger_Green_lite_G_Combat_Solid_Ranger_Green): G_Combat {
        author = QAUTHOR;
        displayName="[GHOST] (Ranger Green) Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Solid_Ranger_Green_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_g_combat_Solid_Ranger_Green_CA.paa);
        MACRO_ITEM_COMMON
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class GVAR(Solid_Ranger_Green_lite_G_Balaclava_TI_G_Solid_Ranger_Green_F): G_Balaclava_TI_G_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Ranger Green) Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_Ranger_Green_F_co.paa),
            QPATHTOF(data\g_combat_Solid_Ranger_Green_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_G_Solid_Ranger_Green_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class GVAR(Solid_Ranger_Green_lite_G_Balaclava_TI_Solid_Ranger_Green_F): G_Balaclava_TI_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Ranger Green) Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_Ranger_Green_F_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_Solid_Ranger_Green_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class GVAR(Solid_CoyoteBrown_lite_G_Balaclava_Solid_CoyoteBrown): G_Balaclava_blk {
        author = QAUTHOR;
        displayName="[GHOST] (Coyote) Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_CoyoteBrown_lite_G_Balaclava_combat_Solid_CoyoteBrown): G_Balaclava_combat {
        author = QAUTHOR;
        displayName="[GHOST] (Coyote) Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_CoyoteBrown_co.paa),
            QPATHTOF(data\g_combat_Solid_CoyoteBrown_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_combat_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_CoyoteBrown_lite_G_Balaclava_lowprofile_Solid_CoyoteBrown): G_Balaclava_lowprofile {
        author = QAUTHOR;
        displayName="[GHOST] (Coyote) Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_CoyoteBrown_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_lowprofile_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_CoyoteBrown_lite_G_Combat_Solid_CoyoteBrown): G_Combat {
        author = QAUTHOR;
        displayName="[GHOST] (Coyote) Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Solid_CoyoteBrown_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_g_combat_Solid_CoyoteBrown_CA.paa);
        MACRO_ITEM_COMMON
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class GVAR(Solid_CoyoteBrown_lite_G_Balaclava_TI_G_Solid_CoyoteBrown_F): G_Balaclava_TI_G_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Coyote) Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_CoyoteBrown_F_co.paa),
            QPATHTOF(data\g_combat_Solid_CoyoteBrown_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_G_Solid_CoyoteBrown_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class GVAR(Solid_CoyoteBrown_lite_G_Balaclava_TI_Solid_CoyoteBrown_F): G_Balaclava_TI_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Coyote) Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_CoyoteBrown_F_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_Solid_CoyoteBrown_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class GVAR(Solid_Black_lite_G_Balaclava_Solid_Black): G_Balaclava_blk {
        author = QAUTHOR;
        displayName="[GHOST] (Black) Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_Solid_Black_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_Black_lite_G_Balaclava_combat_Solid_Black): G_Balaclava_combat {
        author = QAUTHOR;
        displayName="[GHOST] (Black) Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Black_co.paa),
            QPATHTOF(data\g_combat_Solid_Black_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_combat_Solid_Black_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_Black_lite_G_Balaclava_lowprofile_Solid_Black): G_Balaclava_lowprofile {
        author = QAUTHOR;
        displayName="[GHOST] (Black) Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Black_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_lowprofile_Solid_Black_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Solid_Black_lite_G_Combat_Solid_Black): G_Combat {
        author = QAUTHOR;
        displayName="[GHOST] (Black) Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Solid_Black_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_g_combat_Solid_Black_CA.paa);
        MACRO_ITEM_COMMON
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class GVAR(Solid_Black_lite_G_Balaclava_TI_G_Solid_Black_F): G_Balaclava_TI_G_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Black) Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_Black_F_co.paa),
            QPATHTOF(data\g_combat_Solid_Black_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_G_Solid_Black_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class GVAR(Solid_Black_lite_G_Balaclava_TI_Solid_Black_F): G_Balaclava_TI_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Black) Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_Black_F_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_Solid_Black_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class GVAR(Multicam_Woodland_lite_G_Balaclava_Multicam_Woodland): G_Balaclava_blk {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam Woodland) Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Multicam_Woodland_lite_G_Balaclava_combat_Multicam_Woodland): G_Balaclava_combat {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam Woodland) Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_Woodland_co.paa),
            QPATHTOF(data\g_combat_Multicam_Woodland_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_combat_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Multicam_Woodland_lite_G_Balaclava_lowprofile_Multicam_Woodland): G_Balaclava_lowprofile {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam Woodland) Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_Woodland_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_lowprofile_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Multicam_Woodland_lite_G_Combat_Multicam_Woodland): G_Combat {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam Woodland) Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Multicam_Woodland_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_g_combat_Multicam_Woodland_CA.paa);
        MACRO_ITEM_COMMON
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class GVAR(Multicam_Woodland_lite_G_Balaclava_TI_G_Multicam_Woodland_F): G_Balaclava_TI_G_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam Woodland) Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Multicam_Woodland_F_co.paa),
            QPATHTOF(data\g_combat_Multicam_Woodland_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_G_Multicam_Woodland_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class GVAR(Multicam_Woodland_lite_G_Balaclava_TI_Multicam_Woodland_F): G_Balaclava_TI_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam Woodland) Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Multicam_Woodland_F_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_Multicam_Woodland_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class GVAR(Multicam_lite_G_Balaclava_Multicam): G_Balaclava_blk {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam) Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Multicam_lite_G_Balaclava_combat_Multicam): G_Balaclava_combat {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam) Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_co.paa),
            QPATHTOF(data\g_combat_Multicam_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_combat_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Multicam_lite_G_Balaclava_lowprofile_Multicam): G_Balaclava_lowprofile {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam) Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_lowprofile_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Multicam_lite_G_Combat_Multicam): G_Combat {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam) Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Multicam_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_g_combat_Multicam_CA.paa);
        MACRO_ITEM_COMMON
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class GVAR(Multicam_lite_G_Balaclava_TI_G_Multicam_F): G_Balaclava_TI_G_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam) Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Multicam_F_co.paa),
            QPATHTOF(data\g_combat_Multicam_ca.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_G_Multicam_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class GVAR(Multicam_lite_G_Balaclava_TI_Multicam_F): G_Balaclava_TI_blk_F {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam) Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Multicam_F_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_G_Balaclava_TI_Multicam_F_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
};
