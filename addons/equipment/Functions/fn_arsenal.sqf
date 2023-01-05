#include "\z\op183\addons\equipment\script_component.hpp"
/*
Arguments:
0: items only misc items <ARRAY of STRING>
1: tooltip <STRING> (Optional)
2: picture path <STRING> (Optional)
3: override a spezific button (0-9) <NUMBER> (Optional)

Return Value:
successful: number of the slot; error: -1 <NUMBER>

Example:

call OP183_fnc_arsenal;
"ItemcTab",
"ItemAndroid",
"ItemcTabHCam",
"ItemMicroDAGR",
Public: Yes

[
    ["ACE_Flashlight_XL50"],
    "better flashlight",
    "\path\to\a\pictureWithAFlashlight.paa",
    _buttonId
] call ace_arsenal_fnc_addRightPanelButton
*/

[
    ["Camera_lxWS","ALIVE_Tablet","ItemcTab","ItemAndroid","ItemcTabHCam","ItemMicroDAGR","tfw_rf3080Item","tfw_blade","tfw_whip","tfw_dd","Laserbatteries","LOP_LaserMag","Laserbatteries","ACE_ATragMX","ItemAndroid","ItemMicroDAGR","ItemcTabHCam","ItemcTab","ACE_DAGR","ACE_HuntIR_monitor","uh60_jvmf_tablet","ACE_Kestrel4500","ACE_microDAGR","tun_tablet","ACE_UAVBattery"],
    "Tech",
    "\a3\ui_f\data\GUI\Cfg\CommunicationMenu\call_ca.paa"
] call ACEFUNC(arsenal,addRightPanelButton);

// [
//     ["kat_IV_16","kat_aatKit","kat_accuvac","ACE_adenosine","kat_X_AED","kat_amiodarone","kat_CarbonateItem","kat_atropine","ACE_fieldDressing","ACE_elasticBandage","ACE_packingBandage","kat_AED","ACE_quikclot","kat_crossPanel","ACE_bloodIV","kat_bloodIV_O","kat_bloodIV_O_N","kat_bloodIV_A","kat_bloodIV_A_N","kat_bloodIV_AB","kat_bloodIV_AB_N","kat_bloodIV_B","kat_bloodIV_B_N","ACE_bloodIV_250","kat_bloodIV_O_250","kat_bloodIV_O_N_250","kat_bloodIV_A_250","kat_bloodIV_A_N_250","kat_bloodIV_AB_250","kat_bloodIV_AB_N_250","kat_bloodIV_B_250","kat_bloodIV_B_N_250","ACE_bloodIV_500","kat_bloodIV_O_500","kat_bloodIV_O_N_500","kat_bloodIV_A_500","kat_bloodIV_A_N_500","kat_bloodIV_AB_500","kat_bloodIV_AB_N_500","kat_bloodIV_B_500","kat_bloodIV_B_N_500","ACE_bodyBag","kat_plate","kat_chestSeal","kat_clamp","kat_vacuum","op183_medbags_DrugKit","kat_EACA","ACE_EarPlugs","ACE_epinephrine","kat_etomidate","kat_IO_FAST","kat_fentanyl","KAT_Empty_bloodIV_500","KAT_Empty_bloodIV_250","FirstAidKit","kat_flumazenil","kat_guedel","op183_medbags_FirstAid","kat_ketamine","kat_lidocaine","kat_lorazepam","op183_medbags_MedicKit","kat_naloxone","kat_nalbuphine","kat_nitroglycerin","kat_norepinephrine","kat_PainkillerItem","ACE_personalAidKit","kat_phenylephrine","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_500","kat_Pulseoximeter","ACE_salineIV_500","ACE_salineIV_250","ACE_salineIV","kat_scalpel","ACE_splint","kat_stethoscope","ACE_surgicalKit","ACE_tourniquet","op183_medbags_Trauma","kat_TXA","kat_larynx"],
//     "183rd Medical",
//     "\z\ace\addons\medical_gui\data\categories\medication.paa"
// ] call ACEFUNC(arsenal,addRightPanelButton);

[
    ["op183_medbags_DrugKit","op183_medbags_FirstAid","op183_medbags_MedicKit","op183_medbags_Trauma"],
    "183rd Medical",
    "\z\ace\addons\medical_gui\data\categories\medication.paa"
] call ACEFUNC(arsenal,addRightPanelButton);

[
    ["taro_vs17_panel","ace_marker_flags_black","ace_marker_flags_blue","ace_marker_flags_green","ace_marker_flags_orange","ace_marker_flags_purple","ace_marker_flags_red","ace_marker_flags_white","ace_marker_flags_yellow","ACE_IR_Strobe_Item","ACE_Chemlight_Shield","KNB_PanelGreen","KNB_PanelRed","KNB_PanelYellow","ACE_SpraypaintBlack","ACE_SpraypaintBlue","ACE_SpraypaintGreen","ACE_SpraypaintRed","taro_vs17_panel"],
    "Marking",
    "\z\ace\addons\arsenal\data\iconCustom.paa"
] call ACEFUNC(arsenal,addRightPanelButton);

[
    ["ALiVE_Humrat","ALiVE_Waterbottle","ACE_WaterBottle_Half","ACE_WaterBottle_Empty","ACE_WaterBottle","ACE_Cellphone","ACE_Humanitarian_Ration","plp_bo_w_AfterSun","ACE_Banana","plp_bo_w_BeachBat","plp_bo_w_BocceBalls","plp_bo_w_BottleBitters","plp_bo_w_BottleBlueCorazol","plp_bo_w_BottleLiqCream","plp_bo_w_BottleGin","plp_bo_w_BottleLiqOrange","plp_bo_w_BottleTequila","plp_bo_w_CigarCutter","plp_bo_w_Cigar","plp_bo_w_CigarFine","plp_bo_w_GlassAperitif","plp_bo_w_GlassCocktail","plp_bo_w_GlassDrink","plp_bo_w_Lifebelt","plp_bo_w_LifeguardFloat","plp_bo_w_CigarBoxSealed","plp_bo_w_SunMilk","plp_bo_w_SunBlocker","CAF_Axe","ACE_Can_Franta","ACE_Can_RedGull","ACE_Can_Spirit","ACE_Canteen","ACE_Canteen_Empty","ACE_Canteen_Half","ACE_MRE_SteakVegetables","ACE_MRE_CreamTomatoSoup","ACE_MRE_CreamChickenSoup","ACE_MRE_ChickenHerbDumplings","ACE_MRE_ChickenTikkaMasala","ACE_MRE_BeefStew","ACE_MRE_LambCurry","ACE_MRE_MeatballsPasta"],
    "Stuff",
    "\a3\ui_f\data\Map\MapControl\tourism_CA.paa"
] call ACEFUNC(arsenal,addRightPanelButton);

[
    ["tsp_lockpick","tsp_paperclip","AMP_Door_Wedge","ACE_Sandbag_empty","ACE_DefusalKit","ACE_DeadManSwitch","ACE_wirecutter","ToolKit","MineDetector","ACE_Clacker","ACE_M26_Clacker","ACE_EntrenchingTool","ACE_Fortify"],
    "Engineering",
    "\z\ace\addons\minedetector\ui\icon_mineDetector.paa"
] call ACEFUNC(arsenal,addRightPanelButton);
