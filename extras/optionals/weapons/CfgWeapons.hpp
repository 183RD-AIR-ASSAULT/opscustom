#include "script_component.hpp"
class CfgWeapons {
    class arifle_MX_Black_F;
    class GVAR(MX_BlackCamo): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "BadHabitz, Jonpas";
        displayName = "[GHOST] MX (Black Camo)";
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx_blackcamo_base_co.paa),
            QPATHTOF(data\mx_blackcamo_short_co.paa)
        };
        baseWeapon = QGVAR(MX_BlackCamo);
    };

    class arifle_MX_GL_Black_F;
    class GVAR(MX_GL_BlackCamo): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "BadHabitz, Jonpas";
        displayName = "[GHOST] MX 3GL (Black Camo)";
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx_blackcamo_base_co.paa),
            QPATHTOF(data\mx_blackcamo_gl_co.paa)
        };
        baseWeapon = QGVAR(MX_GL_BlackCamo);
    };

    class srifle_EBR_F;
    class GVAR(EBR_Black_F): srifle_EBR_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Tyrone";
        displayName = "[GHOST] Mk14 Mod 1 EBR (Anodised Black)";
        picture = QPATHTOF(UI\mk14_ebr_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\m14_ebr01_blackcamo_co.paa),
            QPATHTOF(data\m14_ebr02_blackcamo_co.paa)
        };
        baseWeapon = QGVAR(EBR_Black_F);
    };
    class hgun_P07_F;
    class GVAR(Walther_P99): hgun_P07_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "JoramD";
        displayName = "[GHOST] Walther P99";
        picture = QPATHTOF(UI\walther_p99_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\walther_p99_co.paa)};
        baseWeapon = QGVAR(Walther_P99);
    };

    class GVAR(Walther_P99_Tan): GVAR(Walther_P99) {
        displayName = "[GHOST] Walther P99 (Tan)";
        picture = QPATHTOF(UI\walther_p99_tan_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\walther_p99_tan_co.paa)};
        baseWeapon = QGVAR(Walther_P99_Tan);
    };

    class launch_MRAWS_green_F;
    class GVAR(MRAWS_Black_F): launch_MRAWS_green_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Kresky";
        displayName = "[GHOST] MAAWS Mk4 Mod 1 (Black)";
        picture = QPATHTOF(UI\mraws_black_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mraws_black_co.paa),
            "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
        };
        baseWeapon = QGVAR(MRAWS_Black_F);
    };

    class launch_MRAWS_green_rail_F;
    class GVAR(MRAWS_Black_Rail_F): launch_MRAWS_green_rail_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Kresky";
        displayName = "[GHOST] MAAWS Mk4 Mod 0 (Black)";
        picture = QPATHTOF(UI\mraws_black_rail_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mraws_black_co.paa),
            "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
        };
        baseWeapon = QGVAR(MRAWS_Black_Rail_F);
    };

    class arifle_SPAR_01_base_F;
class arifle_SPAR_01_blk_F: arifle_SPAR_01_base_F {
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\arifle_SPAR_01_blk_F_01_CO.paa),
        QPATHTOF(data\arifle_SPAR_01_blk_F_02_CO.paa)
    };
};
class arifle_SPAR_01_khk_F: arifle_SPAR_01_base_F {
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\arifle_SPAR_01_khk_F_01_CO.paa),
        QPATHTOF(data\arifle_SPAR_01_khk_F_02_CO.paa)
    };
};
class arifle_SPAR_01_snd_F: arifle_SPAR_01_base_F {
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\arifle_SPAR_01_snd_F_01_CO.paa),
        QPATHTOF(data\arifle_SPAR_01_snd_F_02_CO.paa)
    };
};
class arifle_SPAR_01_GL_base_F;
class arifle_SPAR_01_GL_blk_F: arifle_SPAR_01_GL_base_F {
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\arifle_SPAR_01_blk_F_01_CO.paa),
        QPATHTOF(data\arifle_SPAR_01_blk_F_02_CO.paa),
        QPATHTOF(data\arifle_SPAR_01_GL_blk_F_01_CO.paa)
    };
};
class arifle_SPAR_01_GL_khk_F: arifle_SPAR_01_GL_base_F {
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\arifle_SPAR_01_khk_F_01_CO.paa),
        QPATHTOF(data\arifle_SPAR_01_khk_F_02_CO.paa),
        QPATHTOF(data\arifle_SPAR_01_GL_khk_F_01_CO.paa)
    };
};
class arifle_SPAR_01_GL_snd_F: arifle_SPAR_01_GL_base_F {
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\arifle_SPAR_01_snd_F_01_CO.paa),
        QPATHTOF(data\arifle_SPAR_01_snd_F_02_CO.paa),
        QPATHTOF(data\arifle_SPAR_01_GL_snd_F_01_CO.paa)
    };
};
class arifle_SPAR_02_base_F: Rifle_Base_F {
    cursor = arifle;
};
class arifle_SPAR_02_blk_F: arifle_SPAR_02_base_F  {
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\arifle_SPAR_01_blk_F_01_CO.paa),
        QPATHTOF(data\arifle_SPAR_01_blk_F_02_CO.paa)
    };
};
class arifle_SPAR_02_khk_F: arifle_SPAR_02_base_F  {
    magazines[] =
    {
        150Rnd_556x45_Drum_Green_Mag_F,
        150Rnd_556x45_Drum_Green_Mag_Tracer_F
    };
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\arifle_SPAR_01_khk_F_01_CO.paa),
        QPATHTOF(data\arifle_SPAR_01_khk_F_02_CO.paa)
    };
};
class arifle_SPAR_02_snd_F: arifle_SPAR_02_base_F  {
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\arifle_SPAR_01_snd_F_01_CO.paa),
        QPATHTOF(data\arifle_SPAR_01_snd_F_02_CO.paa)
    };
};
class arifle_SPAR_03_base_F: Rifle_Base_F {
    UiPicture = "\A3\Weapons_F\Data\UI\icon_sniper_CA.paa";
};
class arifle_SPAR_03_blk_F: arifle_SPAR_03_base_F {
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\arifle_SPAR_03_blk_F_01_CO.paa),
        QPATHTOF(data\arifle_SPAR_03_blk_F_02_CO.paa),
        QPATHTOF(data\arifle_SPAR_01_blk_F_01_CO.paa)
    };
};
class arifle_SPAR_03_khk_F: arifle_SPAR_03_base_F {
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\arifle_SPAR_03_khk_F_01_CO.paa),
        QPATHTOF(data\arifle_SPAR_03_khk_F_02_CO.paa),
        QPATHTOF(data\arifle_SPAR_01_khk_F_01_CO.paa)
    };
};
class arifle_SPAR_03_snd_F: arifle_SPAR_03_base_F {
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\arifle_SPAR_03_snd_F_01_CO.paa),
        QPATHTOF(data\arifle_SPAR_03_snd_F_02_CO.paa),
        QPATHTOF(data\arifle_SPAR_01_snd_F_01_CO.paa)
    };
};
    
};
