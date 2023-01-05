#include "script_component.hpp"
class CfgMagazines {
    class 30Rnd_65x39_caseless_mag;

    class GVAR(30Rnd_65x39_caseless_BlackCamo_mag): 30Rnd_65x39_caseless_mag {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "BadHabitz, TyroneMF";
        displayName ="30Rnd 6.5mm Magazine (Black Camo)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\mx_blackcamo_base_co.paa)};
    };
    class GVAR(30Rnd_65x39_caseless_Creed_BlackCamo_mag): 30Rnd_65x39_caseless_mag {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        ammo = "ACE_65_Creedmor_Ball";
        displayName ="30Rnd 6.5mm Creedmor Magazine (Black Camo)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\mx_blackcamo_base_co.paa)};
    };
};
