#include "script_component.hpp"
class CBA_Extended_EventHandlers;
class CfgVehicles {
    // External class reference START
    class B_AssaultPack_rgr;
    class B_AssaultPack_Kerry;
    class B_Carryall_cbr;
    class B_Kitbag_rgr;
    class B_TacticalPack_blk;
    class B_Kitbag_Base;

    class TFAR_rt1523g;
    class TFAR_mr3000;
    class TFAR_anprc155;
    class TFAR_anarc210;
    class TFAR_mr6000l;
    class TFAR_anarc164;

    // External class reference  END

    class GVAR(AssaultPack_Multicam): B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_Multicam): B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Multicam_co.paa),
            QPATHTOF(data\vests_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_Multicam): B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Multicam.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_rgr_Multicam): B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Multicam.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_Multicam): B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Multicam_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Multicam.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_Multicam_Snow): B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Snow) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_Multicam_Snow): B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Snow) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Multicam_Snow_co.paa),
            QPATHTOF(data\vests_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_Snow_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_Multicam_Snow): B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Snow) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Multicam_Snow.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_rgr_Multicam_Snow): B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Snow) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Multicam_Snow.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_Multicam_Snow): B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Snow) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Multicam_Snow.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_Multicam_Woodland): B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Woodland) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_Multicam_Woodland): B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Woodland) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Multicam_Woodland_co.paa),
            QPATHTOF(data\vests_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Multicam_Woodland_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_Multicam_Woodland): B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Woodland) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_rgr_Multicam_Woodland): B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Woodland) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_Multicam_Woodland): B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Multicam Woodland) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Multicam_Woodland.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_Solid_Black): B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Black) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Black_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_Solid_Black): B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Black) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_Black_co.paa),
            QPATHTOF(data\vests_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Black_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_Solid_Black): B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Black) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Solid_Black.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_rgr_Solid_Black): B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Black) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Black.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_Solid_Black): B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Black) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Solid_Black.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_Solid_CoyoteBrown): B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Coyote) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_Solid_CoyoteBrown): B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Coyote) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_CoyoteBrown_co.paa),
            QPATHTOF(data\vests_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_CoyoteBrown_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_Solid_CoyoteBrown): B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Coyote) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_rgr_Solid_CoyoteBrown): B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Coyote) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_Solid_CoyoteBrown): B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Coyote) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Solid_CoyoteBrown.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_Solid_Ranger_Green): B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Ranger Green) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_Solid_Ranger_Green): B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Ranger Green) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_Ranger_Green_co.paa),
            QPATHTOF(data\vests_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Ranger_Green_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_Solid_Ranger_Green): B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Ranger Green) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_rgr_Solid_Ranger_Green): B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Ranger Green) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_Solid_Ranger_Green): B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Ranger Green) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Solid_Ranger_Green.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_US_Tigerstripe): B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Tigerstripe) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_US_Tigerstripe): B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Tigerstripe) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_US_Tigerstripe_co.paa),
            QPATHTOF(data\vests_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_Tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_US_Tigerstripe): B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Tigerstripe) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_rgr_US_Tigerstripe): B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Tigerstripe) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_US_Tigerstripe): B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Tigerstripe) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_US_Tigerstripe.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_Solid_Olive): B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Olive) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_Solid_Olive): B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Olive) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_Olive_co.paa),
            QPATHTOF(data\vests_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_Olive_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_Solid_Olive): B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Olive) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Solid_Olive.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_rgr_Solid_Olive): B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Olive) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Olive.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_Solid_Olive): B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (Olive) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Solid_Olive.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_Solid_White): B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (White) Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_Solid_White): B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (White) Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_Solid_White_co.paa),
            QPATHTOF(data\vests_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_Solid_White_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_Solid_White): B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (White) Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_Solid_White.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_rgr_Solid_White): B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (White) Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_White.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_Solid_White): B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] (White) Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_Solid_White.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_US_DCU): B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] DCU Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_US_DCU): B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] DCU Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_US_DCU_co.paa),
            QPATHTOF(data\vests_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_DCU_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_US_DCU): B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] DCU Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_US_DCU.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_rgr_US_DCU): B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] DCU Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_US_DCU.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_US_DCU): B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] DCU Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_US_DCU.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPack_US_M81): B_AssaultPack_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] M81 Assault Pack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_M81_ca.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(AssaultPackEnhanced_US_M81): B_AssaultPack_Kerry {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] M81 Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_compact_US_M81_co.paa),
            QPATHTOF(data\vests_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_AssaultPack_US_M81_ca.paa);
        MACRO_ITEM_COMMON
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class GVAR(Carryall_US_M81): B_Carryall_cbr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] M81 Carryall Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_tortila_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Tortila_US_M81.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Kitbag_rgr_US_M81): B_Kitbag_rgr {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] M81 Kitbag";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_fast_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Kitbag_US_M81.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(TacticalPack_US_M81): B_TacticalPack_blk {
        author = QAUTHOR;
        maximumLoad = 210;
        displayName="[GHOST] M81 Tactical Backpack";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\backpack_small_US_M81_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_B_C_Small_US_M81.paa);
        MACRO_ITEM_COMMON
    };
    class GVAR(Backpack_Kitbag_Medic_White): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        maximumLoad = 210;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[GHOST] Kitbag Medic (White)";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_White.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_white_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_Black): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        maximumLoad = 210;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[GHOST] Kitbag Medic (Black)";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Black.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_black_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_Coyote): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        maximumLoad = 210;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[GHOST] Kitbag Medic (Coyote)";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_CoyoteBrown.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_coyote_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_MTP): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        maximumLoad = 210;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[GHOST] Kitbag Medic (MTP)";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Multicam.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_mtp_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_Green): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        maximumLoad = 210;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[GHOST] Kitbag Medic (Green)";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Olive.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_green_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_Sage): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        maximumLoad = 210;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[GHOST] Kitbag Medic (Sage)";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Olive.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_sage_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_Tan): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        maximumLoad = 210;
        author = "Bohemia Interactive, GilleeDoo, JoramD";
        displayName="[GHOST] Kitbag Medic (Tan)";
        picture = QPATHTOF(data\ui\icon_B_C_Kitbag_Solid_Ranger_Green.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_tan_co.paa)
        };
    };
    class GVAR(Backpack_Kitbag_Medic_RGR): B_Kitbag_Base {
        MACRO_ITEM_COMMON
        maximumLoad = 210;
        author = "Bohemia Interactive, GilleeDoo, Tyrone";
        displayName="[GHOST] Kitbag Medic (RGR)";
        picture = QPATHTOF(data\ui\backpack_kitbag_medic_rgr_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpack_kitbag_medic_rgr_co.paa)
        };
    };

///////////////////////////////////////////////////////////

    class GVAR(TFAR_rt1523g_kitbag): TFAR_rt1523g {
        author = "NemesisRE";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
        hiddenSelections[] = {"camo"};
        maximumLoad = 240;
        mass = 130;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class GVAR(kitbag_khaki_west): GVAR(TFAR_rt1523g_kitbag) {
        displayName = "[GHOST] RT-1523G Kitbag (Green)";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};
        MACRO_ITEM_COMMON
    };

    class GVAR(kitbag_coyote_west): GVAR(TFAR_rt1523g_kitbag) {
        displayName = "[GHOST] RT-1523G Kitbag (Coyote)";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa"};
        MACRO_ITEM_COMMON
    };

    class GVAR(kitbag_winter_west): GVAR(TFAR_rt1523g_kitbag) {
        displayName = "[GHOST] RT-1523G Kitbag (Winter)";
        hiddenSelectionsTextures[] = {QPATHTOF(qip\data\textures\kitbag_wte.paa)};
        MACRO_ITEM_COMMON
    };

    class GVAR(kitbag_black_west): GVAR(TFAR_rt1523g_kitbag) {
        displayName = "[GHOST] RT-1523G Kitbag (Black)";
        hiddenSelectionsTextures[] = {"\a3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
        MACRO_ITEM_COMMON
    };





    // For older Missions
    class GVAR(talon_kitbag_khaki): GVAR(kitbag_khaki_west) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
    };

    class GVAR(talon_kitbag_coyote): GVAR(kitbag_coyote_west) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
    };

    class GVAR(talon_kitbag_winter): GVAR(kitbag_winter_west) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
    };
};
