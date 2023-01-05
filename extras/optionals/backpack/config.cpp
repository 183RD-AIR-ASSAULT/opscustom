#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(RadioBag_01_BLACK),
            QGVAR(RadioBag_01_DIGI),
            QGVAR(RadioBag_01_EAF),
            QGVAR(RadioBag_01_GHEX),
            QGVAR(RadioBag_01_HEX),
            QGVAR(RadioBag_01_MTP),
            QGVAR(RadioBag_01_TROPIC),
            QGVAR(RadioBag_01_OUCAMO),
            QGVAR(RadioBag_01_WDL),
            QGVAR(talon_kitbag_coyote),
            QGVAR(talon_kitbag_winter),
            QGVAR(talon_kitbag_khaki),
            QGVAR(TFAR_rt1523g_kitbag),
            QGVAR(kitbag_khaki_west),
            QGVAR(kitbag_coyote_west),
            QGVAR(kitbag_winter_west),
            QGVAR(kitbag_black_west),
            QVAR(AssaultPack_Multicam),
            QVAR(AssaultPack_Multicam_Snow),
            QVAR(AssaultPack_Multicam_Woodland),
            QVAR(AssaultPack_Solid_Black),
            QVAR(AssaultPack_Solid_CoyoteBrown),
            QVAR(AssaultPack_Solid_Olive),
            QVAR(AssaultPack_Solid_Ranger_Green),
            QVAR(AssaultPack_Solid_White),
            QVAR(AssaultPack_US_DCU),
            QVAR(AssaultPack_US_M81),
            QVAR(AssaultPack_US_Tigerstripe),
            QVAR(AssaultPackEnhanced_Multicam),
            QVAR(AssaultPackEnhanced_Multicam_Snow),
            QVAR(AssaultPackEnhanced_Multicam_Woodland),
            QVAR(AssaultPackEnhanced_Solid_Black),
            QVAR(AssaultPackEnhanced_Solid_CoyoteBrown),
            QVAR(AssaultPackEnhanced_Solid_Olive),
            QVAR(AssaultPackEnhanced_Solid_Ranger_Green),
            QVAR(AssaultPackEnhanced_Solid_White),
            QVAR(AssaultPackEnhanced_US_DCU),
            QVAR(AssaultPackEnhanced_US_M81),
            QVAR(AssaultPackEnhanced_US_Tigerstripe),
            QVAR(Backpack_Kitbag_Medic_Black),
            QVAR(Backpack_Kitbag_Medic_Coyote),
            QVAR(Backpack_Kitbag_Medic_Green),
            QVAR(Backpack_Kitbag_Medic_MTP),
            QVAR(Backpack_Kitbag_Medic_RGR),
            QVAR(Backpack_Kitbag_Medic_Sage),
            QVAR(Backpack_Kitbag_Medic_Tan),
            QVAR(Backpack_Kitbag_Medic_White),
            QVAR(Carryall_Multicam),
            QVAR(Carryall_Multicam_Snow),
            QVAR(Carryall_Multicam_Woodland),
            QVAR(Carryall_Solid_Black),
            QVAR(Carryall_Solid_CoyoteBrown),
            QVAR(Carryall_Solid_Olive),
            QVAR(Carryall_Solid_Ranger_Green),
            QVAR(Carryall_Solid_White),
            QVAR(Carryall_US_DCU),
            QVAR(Carryall_US_M81),
            QVAR(Carryall_US_Tigerstripe),
            QVAR(Kitbag_rgr_Multicam),
            QVAR(Kitbag_rgr_Multicam_Snow),
            QVAR(Kitbag_rgr_Multicam_Woodland),
            QVAR(Kitbag_rgr_Solid_Black),
            QVAR(Kitbag_rgr_Solid_CoyoteBrown),
            QVAR(Kitbag_rgr_Solid_Olive),
            QVAR(Kitbag_rgr_Solid_Ranger_Green),
            QVAR(Kitbag_rgr_Solid_White),
            QVAR(Kitbag_rgr_US_DCU),
            QVAR(Kitbag_rgr_US_M81),
            QVAR(Kitbag_rgr_US_Tigerstripe),
            QVAR(TacticalPack_Multicam),
            QVAR(TacticalPack_Multicam_Snow),
            QVAR(TacticalPack_Multicam_Woodland),
            QVAR(TacticalPack_Solid_Black),
            QVAR(TacticalPack_Solid_CoyoteBrown),
            QVAR(TacticalPack_Solid_Olive),
            QVAR(TacticalPack_Solid_Ranger_Green),
            QVAR(TacticalPack_Solid_White),
            QVAR(TacticalPack_US_DCU),
            QVAR(TacticalPack_US_M81),
            QVAR(TacticalPack_US_Tigerstripe)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"op183_main"};
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
