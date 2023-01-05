#include "script_component.hpp"
class CfgWeapons {
    class Uniform_Base;
    class U_B_CTRG_Soldier_F: Uniform_Base {
        class ItemInfo;
    };
    class U_B_CTRG_Soldier_3_F: Uniform_Base {
        class ItemInfo;
    };
    
    class GVAR(Multicam_Snow_U_B_CTRG_Soldier_Multicam_Snow_F): U_B_CTRG_Soldier_F {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam Snow) CTRG Stealth Uniform";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\u_b_ctrg_soldier_multicam_snow_f_co.paa)
        };
        picture = QPATHTOF(data\ui\icon_u_b_ctrg_uniform_multicam_snow_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: ItemInfo {
            containerClass = "Supply40";
            uniformClass=QGVAR(Multicam_Snow_Soldier_U_B_CTRG_Soldier_Multicam_Snow_F);
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class GVAR(Multicam_Snow_U_B_CTRG_Soldier_3_Multicam_Snow_F): U_B_CTRG_Soldier_3_F {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam Snow) CTRG Stealth Uniform (Rolled-up)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\u_b_ctrg_soldier_multicam_snow_f_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_u_b_ctrg_vest_multicam_snow_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: ItemInfo {
            containerClass = "Supply40";
            uniformClass=QGVAR(Multicam_Snow_Soldier_U_B_CTRG_Soldier_3_Multicam_Snow_F);
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class GVAR(Multicam_U_B_CTRG_Soldier_Multicam_F): U_B_CTRG_Soldier_F {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam) CTRG Stealth Uniform";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\u_b_ctrg_soldier_multicam_f_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_u_b_ctrg_uniform_multicam_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: ItemInfo {
            containerClass = "Supply40";
            uniformClass=QGVAR(Multicam_Soldier_U_B_CTRG_Soldier_Multicam_F);
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class GVAR(Multicam_U_B_CTRG_Soldier_3_Multicam_F): U_B_CTRG_Soldier_3_F {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam) CTRG Stealth Uniform (Rolled-up)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\u_b_ctrg_soldier_multicam_f_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_u_b_ctrg_vest_multicam_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: ItemInfo {
            containerClass = "Supply40";
            uniformClass=QGVAR(Multicam_Soldier_U_B_CTRG_Soldier_3_Multicam_F);
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class GVAR(Multicam_Woodland_U_B_CTRG_Soldier_Multicam_Woodland_F): U_B_CTRG_Soldier_F {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam Woodland) CTRG Stealth Uniform";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\u_b_ctrg_soldier_multicam_woodland_f_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_u_b_ctrg_uniform_multicam_woodland_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: ItemInfo {
            containerClass = "Supply40";
            uniformClass=QGVAR(Multicam_Woodland_Soldier_U_B_CTRG_Soldier_Multicam_Woodland_F);
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class GVAR(Multicam_Woodland_U_B_CTRG_Soldier_3_Multicam_Woodland_F): U_B_CTRG_Soldier_3_F {
        author = QAUTHOR;
        displayName="[GHOST] (Multicam Woodland) CTRG Stealth Uniform (Rolled-up)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\u_b_ctrg_soldier_multicam_woodland_f_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_u_b_ctrg_vest_multicam_woodland_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: ItemInfo {
            containerClass = "Supply40";
            uniformClass=QGVAR(Multicam_Woodland_Soldier_U_B_CTRG_Soldier_3_Multicam_Woodland_F);
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class GVAR(Solid_Black_U_B_CTRG_Soldier_Solid_Black_F): U_B_CTRG_Soldier_F {
        author = QAUTHOR;
        displayName="[GHOST] (Black) CTRG Stealth Uniform";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\u_b_ctrg_soldier_solid_black_f_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_u_b_ctrg_uniform_solid_black_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: ItemInfo {
            containerClass = "Supply40";
            uniformClass=QGVAR(Solid_Black_Soldier_U_B_CTRG_Soldier_Solid_Black_F);
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class GVAR(Solid_Black_U_B_CTRG_Soldier_3_Solid_Black_F): U_B_CTRG_Soldier_3_F {
        author = QAUTHOR;
        displayName="[GHOST] (Black) CTRG Stealth Uniform (Rolled-up)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\u_b_ctrg_soldier_solid_black_f_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_u_b_ctrg_vest_solid_black_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: ItemInfo {
            containerClass = "Supply40";
            uniformClass=QGVAR(Solid_Black_Soldier_U_B_CTRG_Soldier_3_Solid_Black_F);
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class GVAR(US_Tigerstripe_U_B_CTRG_Soldier_US_Tigerstripe_F): U_B_CTRG_Soldier_F {
        author = QAUTHOR;
        displayName="[GHOST] (Tigerstripe) CTRG Stealth Uniform";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\u_b_ctrg_soldier_us_tigerstripe_f_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_u_b_ctrg_uniform_us_tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: ItemInfo {
            containerClass = "Supply40";
            uniformClass=QGVAR(US_Tigerstripe_Soldier_U_B_CTRG_Soldier_US_Tigerstripe_F);
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class GVAR(US_Tigerstripe_U_B_CTRG_Soldier_3_US_Tigerstripe_F): U_B_CTRG_Soldier_3_F {
        author = QAUTHOR;
        displayName="[GHOST] (Tigerstripe) CTRG Stealth Uniform (Rolled-up)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\u_b_ctrg_soldier_us_tigerstripe_f_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_u_b_ctrg_vest_us_tigerstripe_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: ItemInfo {
            containerClass = "Supply40";
            uniformClass=QGVAR(US_Tigerstripe_Soldier_U_B_CTRG_Soldier_3_US_Tigerstripe_F);
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class GVAR(US_DCU_U_B_CTRG_Soldier_US_DCU_F): U_B_CTRG_Soldier_F {
        author = QAUTHOR;
        displayName="[GHOST] (DCU) CTRG Stealth Uniform";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\u_b_ctrg_soldier_us_dcu_f_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_u_b_ctrg_uniform_us_dcu_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: ItemInfo {
            containerClass = "Supply40";
            uniformClass=QGVAR(US_DCU_Soldier_U_B_CTRG_Soldier_US_DCU_F);
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class GVAR(US_DCU_U_B_CTRG_Soldier_3_US_DCU_F): U_B_CTRG_Soldier_3_F {
        author = QAUTHOR;
        displayName="[GHOST] (DCU) CTRG Stealth Uniform (Rolled-up)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\u_b_ctrg_soldier_us_dcu_f_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_u_b_ctrg_vest_us_dcu_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: ItemInfo {
            containerClass = "Supply40";
            uniformClass=QGVAR(US_DCU_Soldier_U_B_CTRG_Soldier_3_US_DCU_F);
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class GVAR(US_M81_U_B_CTRG_Soldier_US_M81_F): U_B_CTRG_Soldier_F {
        author = QAUTHOR;
        displayName="[GHOST] (M81) CTRG Stealth Uniform";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\u_b_ctrg_soldier_us_m81_f_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_u_b_ctrg_uniform_us_m81_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: ItemInfo {
            containerClass = "Supply40";
            uniformClass=QGVAR(US_M81_Soldier_U_B_CTRG_Soldier_US_M81_F);
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class GVAR(US_M81_U_B_CTRG_Soldier_3_US_M81_F): U_B_CTRG_Soldier_3_F {
        author = QAUTHOR;
        displayName="[GHOST] (M81) CTRG Stealth Uniform (Rolled-up)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\u_b_ctrg_soldier_us_m81_f_co.paa)
        };
        picture=QPATHTOF(data\ui\icon_u_b_ctrg_vest_us_m81_ca.paa);
        MACRO_ITEM_COMMON
        class ItemInfo: ItemInfo {
            containerClass = "Supply40";
            uniformClass=QGVAR(US_M81_Soldier_U_B_CTRG_Soldier_3_US_M81_F);
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
};
