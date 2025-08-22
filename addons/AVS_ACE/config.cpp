class CfgPatches
{
	class AVS_ACE_COMPAT
	{
		requiredAddons[] = {"AVS"};
		units[] = {};
		weapons[] = {"Crye_AVS_1","Crye_AVS_1_AOR1","Crye_AVS_1_RG","Crye_AVS_1_MCT","Crye_AVS_1_MCB","Crye_AVS_1_Tan","Crye_AVS_1_1","Crye_AVS_1_1_AOR1","Crye_AVS_1_1_MCB","Crye_AVS_1_1_MCT","Crye_AVS_1_1_RG","Crye_AVS_1_1_Tan","Crye_AVS_1_2","Crye_AVS_1_2_AOR1","Crye_AVS_1_2_MCB","Crye_AVS_1_2_MCT","Crye_AVS_1_2_RG","Crye_AVS_1_2_Tan","Crye_AVS_1_3","Crye_AVS_1_3_AOR1","Crye_AVS_1_3_MCB","Crye_AVS_1_3_MCT","Crye_AVS_1_3_Tan","Crye_AVS_1_3_RG","Crye_AVS_2","Crye_AVS_2_AOR1","Crye_AVS_2_MCB","Crye_AVS_2_MCT","Crye_AVS_2_RG","Crye_AVS_2_Tan","Crye_AVS_3","Crye_AVS_3_AOR1","Crye_AVS_3_MCB","Crye_AVS_3_MCT","Crye_AVS_3_RG","Crye_AVS_3_Tan","Crye_AVS_3_1","Crye_AVS_3_1_AOR1","Crye_AVS_3_1_MCB","Crye_AVS_3_1_MCT","Crye_AVS_3_1_RG","Crye_AVS_3_1_Tan","Crye_AVS_3_2","Crye_AVS_3_2_AOR1","Crye_AVS_3_2_MCB","Crye_AVS_3_2_MCT","Crye_AVS_3_2_RG","Crye_AVS_3_2_Tan","Crye_AVS_3_3","Crye_AVS_3_3_AOR1","Crye_AVS_3_3_MCB","Crye_AVS_3_3_MCT","Crye_AVS_3_3_RG","Crye_AVS_3_3_Tan","Belt_gbrs","Belt_fc"};
	};
};
class cfgWeapons
{
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class Crye_AVS_1: Vest_Camo_Base
	{
		author = "The Sad Face";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "AVS Assaulter #1 MC";
		picture = "\AVS\icons\AVSIcon.paa";
		model = "\AVS\AVS_1.p3d";
		descriptionShort = "Chest/Diaphragm NIJ IV";
		hiddenSelections[] = {"AVS_Base","AVSx3Pouch","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\AVSPouch\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\GPpouch\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\pouch556\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\AVS\AVS_1.p3d";
			hiddenSelections[] = {"AVS_Base","AVSx3Pouch","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\AVSPouch\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\GPpouch\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\pouch556\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
			containerClass = "Supply120";
			mass = 127;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = "33.0f";
					passThrough = "0.0f";
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = "33.0f";
					passThrough = "0.0f";
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = "0.0f";
					passThrough = "1.0f";
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = "0.0f";
					passThrough = "1.0f";
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = "1.0f";
				};
			};
		};
	};
	class Crye_AVS_1_AOR1: Crye_AVS_1
	{
		displayName = "AVS Assaulter #1 AOR1";
		picture = "\AVS\icons\AVSIcon.paa";
		model = "\AVS\AVS_1.p3d";
		hiddenSelections[] = {"AVS_Base","AVSx3Pouch","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
		hiddenSelectionsTextures[] = {"AVS\data\Vest\AOR1_co.paa","AVS\data\AVSPouch\AOR1_co.paa","AVS\data\Belt556\AOR1_co.paa","AVS\data\BluforMed\AOR1_co.paa","AVS\data\Cumberbands\AOR1_co.paa","AVS\data\BeltGBRS\AOR1_co.paa","AVS\data\GPpouch\AOR1_co.paa","AVS\data\Radio\AOR1_co.paa","AVS\data\glockMags\AOR1_co.paa","AVS\data\pouch556\AOR1_co.paa","AVS\data\SFL_Holster\AOR1_co.paa","AVS\data\Sideplate\AOR1_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\AVS\AVS_1.p3d";
			hiddenSelections[] = {"AVS_Base","AVSx3Pouch","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
			hiddenSelectionsTextures[] = {"AVS\data\Vest\AOR1_co.paa","AVS\data\AVSPouch\AOR1_co.paa","AVS\data\Belt556\AOR1_co.paa","AVS\data\BluforMed\AOR1_co.paa","AVS\data\Cumberbands\AOR1_co.paa","AVS\data\BeltGBRS\AOR1_co.paa","AVS\data\GPpouch\AOR1_co.paa","AVS\data\Radio\AOR1_co.paa","AVS\data\glockMags\AOR1_co.paa","AVS\data\pouch556\AOR1_co.paa","AVS\data\SFL_Holster\AOR1_co.paa","AVS\data\Sideplate\AOR1_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_RG: Crye_AVS_1
	{
		displayName = "AVS Assaulter #1 RG";
		picture = "\AVS\icons\AVSIcon.paa";
		model = "\AVS\AVS_1.p3d";
		hiddenSelections[] = {"AVS_Base","AVSx3Pouch","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
		hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\AVSPouch\RG_co.paa","AVS\data\Belt556\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\GPpouch\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\pouch556\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\AVS\AVS_1.p3d";
			hiddenSelections[] = {"AVS_Base","AVSx3Pouch","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
			hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\AVSPouch\RG_co.paa","AVS\data\Belt556\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\GPpouch\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\pouch556\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_MCT: Crye_AVS_1
	{
		displayName = "AVS Assaulter #1 MCT";
		picture = "\AVS\icons\AVSIcon.paa";
		model = "\AVS\AVS_1.p3d";
		hiddenSelections[] = {"AVS_Base","AVSx3Pouch","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\AVSPouch\MCT_co.paa","AVS\data\Belt556\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\GPpouch\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\pouch556\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\AVS\AVS_1.p3d";
			hiddenSelections[] = {"AVS_Base","AVSx3Pouch","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\AVSPouch\MCT_co.paa","AVS\data\Belt556\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\GPpouch\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\pouch556\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_MCB: Crye_AVS_1
	{
		displayName = "AVS Assaulter #1 MCB";
		picture = "\AVS\icons\AVSIcon.paa";
		model = "\AVS\AVS_1.p3d";
		hiddenSelections[] = {"AVS_Base","AVSx3Pouch","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\AVSPouch\MCB_co.paa","AVS\data\Belt556\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\GPpouch\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\pouch556\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\AVS\AVS_1.p3d";
			hiddenSelections[] = {"AVS_Base","AVSx3Pouch","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\AVSPouch\MCB_co.paa","AVS\data\Belt556\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\GPpouch\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\pouch556\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_Tan: Crye_AVS_1
	{
		displayName = "AVS Assaulter #1 Tan";
		picture = "\AVS\icons\AVSIcon.paa";
		model = "\AVS\AVS_1.p3d";
		hiddenSelections[] = {"AVS_Base","AVSx3Pouch","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
		hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\AVSPouch\Tan_co.paa","AVS\data\Belt556\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\GPpouch\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\pouch556\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\AVS\AVS_1.p3d";
			hiddenSelections[] = {"AVS_Base","AVSx3Pouch","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
			hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\AVSPouch\Tan_co.paa","AVS\data\Belt556\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\GPpouch\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\pouch556\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_1: Crye_AVS_1
	{
		displayName = "AVS Assaulter #2 MC";
		picture = "\AVS\icons\AVSIcon.paa";
		model = "\AVS\AVS_1_1.p3d";
		hiddenSelections[] = {"AVS_Base","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","Kangaroo_Pouch","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\GPpouch\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\Kangaroo\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\pouch556\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\AVS\AVS_1_1.p3d";
			hiddenSelections[] = {"AVS_Base","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","Kangaroo_Pouch","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\GPpouch\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\Kangaroo\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\pouch556\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_1_AOR1: Crye_AVS_1_1
	{
		displayName = "AVS Assaulter #2 AOR1";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\AOR1_co.paa","AVS\data\Belt556\AOR1_co.paa","AVS\data\BluforMed\AOR1_co.paa","AVS\data\Cumberbands\AOR1_co.paa","AVS\data\BeltGBRS\AOR1_co.paa","AVS\data\GPpouch\AOR1_co.paa","AVS\data\Radio\AOR1_co.paa","AVS\data\Kangaroo\AOR1_co.paa","AVS\data\glockMags\AOR1_co.paa","AVS\data\pouch556\AOR1_co.paa","AVS\data\SFL_Holster\AOR1_co.paa","AVS\data\Sideplate\AOR1_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\AOR1_co.paa","AVS\data\Belt556\AOR1_co.paa","AVS\data\BluforMed\AOR1_co.paa","AVS\data\Cumberbands\AOR1_co.paa","AVS\data\BeltGBRS\AOR1_co.paa","AVS\data\GPpouch\AOR1_co.paa","AVS\data\Radio\AOR1_co.paa","AVS\data\Kangaroo\AOR1_co.paa","AVS\data\glockMags\AOR1_co.paa","AVS\data\pouch556\AOR1_co.paa","AVS\data\SFL_Holster\AOR1_co.paa","AVS\data\Sideplate\AOR1_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_1_MCB: Crye_AVS_1_1
	{
		displayName = "AVS Assaulter #2 MCB";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\Belt556\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\GPpouch\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\Kangaroo\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\pouch556\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\Belt556\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\GPpouch\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\Kangaroo\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\pouch556\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_1_MCT: Crye_AVS_1_1
	{
		displayName = "AVS Assaulter #2 MCT";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\Belt556\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\GPpouch\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\Kangaroo\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\pouch556\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\Belt556\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\GPpouch\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\Kangaroo\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\pouch556\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_1_RG: Crye_AVS_1_1
	{
		displayName = "AVS Assaulter #2 RG";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\Belt556\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\GPpouch\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\Kangaroo\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\pouch556\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\Belt556\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\GPpouch\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\Kangaroo\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\pouch556\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_1_Tan: Crye_AVS_1_1
	{
		displayName = "AVS Assaulter #2 Tan";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\Belt556\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\GPpouch\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\Kangaroo\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\pouch556\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\Belt556\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\GPpouch\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\Kangaroo\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\pouch556\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_2: Crye_AVS_1
	{
		displayName = "AVS Assaulter #3 MC";
		model = "\AVS\AVS_1_2.p3d";
		hiddenSelections[] = {"AVS_Base","AVS_MK4","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\Mk4\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\GPpouch\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\pouch556\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\AVS\AVS_1_2.p3d";
			hiddenSelections[] = {"AVS_Base","AVS_MK4","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\Mk4\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\GPpouch\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\pouch556\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_2_AOR1: Crye_AVS_1_2
	{
		displayName = "AVS Assaulter #3 AOR1";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\AOR1_co.paa","AVS\data\Mk4\AOR1_co.paa","AVS\data\Belt556\AOR1_co.paa","AVS\data\BluforMed\AOR1_co.paa","AVS\data\Cumberbands\AOR1_co.paa","AVS\data\BeltGBRS\AOR1_co.paa","AVS\data\GPpouch\AOR1_co.paa","AVS\data\Radio\AOR1_co.paa","AVS\data\glockMags\AOR1_co.paa","AVS\data\pouch556\AOR1_co.paa","AVS\data\SFL_Holster\AOR1_co.paa","AVS\data\Sideplate\AOR1_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\AOR1_co.paa","AVS\data\Mk4\AOR1_co.paa","AVS\data\Belt556\AOR1_co.paa","AVS\data\BluforMed\AOR1_co.paa","AVS\data\Cumberbands\AOR1_co.paa","AVS\data\BeltGBRS\AOR1_co.paa","AVS\data\GPpouch\AOR1_co.paa","AVS\data\Radio\AOR1_co.paa","AVS\data\glockMags\AOR1_co.paa","AVS\data\pouch556\AOR1_co.paa","AVS\data\SFL_Holster\AOR1_co.paa","AVS\data\Sideplate\AOR1_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_2_MCB: Crye_AVS_1_2
	{
		displayName = "AVS Assaulter #3 MCB";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\Mk4\MCB_co.paa","AVS\data\Belt556\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\GPpouch\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\pouch556\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\Mk4\MCB_co.paa","AVS\data\Belt556\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\GPpouch\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\pouch556\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_2_MCT: Crye_AVS_1_2
	{
		displayName = "AVS Assaulter #3 MCT";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\Mk4\MCT_co.paa","AVS\data\Belt556\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\GPpouch\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\pouch556\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\Mk4\MCT_co.paa","AVS\data\Belt556\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\GPpouch\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\pouch556\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_2_RG: Crye_AVS_1_2
	{
		displayName = "AVS Assaulter #3 RG";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\Mk4\RG_co.paa","AVS\data\Belt556\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\GPpouch\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\pouch556\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\Mk4\RG_co.paa","AVS\data\Belt556\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\GPpouch\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\pouch556\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_2_Tan: Crye_AVS_1_2
	{
		displayName = "AVS Assaulter #3 Tan";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\Mk4\Tan_co.paa","AVS\data\Belt556\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\GPpouch\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\pouch556\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\Mk4\Tan_co.paa","AVS\data\Belt556\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\GPpouch\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\pouch556\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_3: Crye_AVS_1
	{
		displayName = "AVS Assaulter #4 MC";
		model = "\AVS\AVS_1_3.p3d";
		hiddenSelections[] = {"AVS_Base","AVSx3Pouch_T","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\AVSPouchT\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\GPpouch\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\pouch556\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\AVS\AVS_1_3.p3d";
			hiddenSelections[] = {"AVS_Base","AVSx3Pouch_T","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\AVSPouchT\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\GPpouch\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\pouch556\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_3_AOR1: Crye_AVS_1_3
	{
		displayName = "AVS Assaulter #4 AOR1";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\AOR1_co.paa","AVS\data\AVSPouchT\AOR1_co.paa","AVS\data\Belt556\AOR1_co.paa","AVS\data\BluforMed\AOR1_co.paa","AVS\data\Cumberbands\AOR1_co.paa","AVS\data\BeltGBRS\AOR1_co.paa","AVS\data\GPpouch\AOR1_co.paa","AVS\data\Radio\AOR1_co.paa","AVS\data\glockMags\AOR1_co.paa","AVS\data\pouch556\AOR1_co.paa","AVS\data\SFL_Holster\AOR1_co.paa","AVS\data\Sideplate\AOR1_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\AOR1_co.paa","AVS\data\AVSPouchT\AOR1_co.paa","AVS\data\Belt556\AOR1_co.paa","AVS\data\BluforMed\AOR1_co.paa","AVS\data\Cumberbands\AOR1_co.paa","AVS\data\BeltGBRS\AOR1_co.paa","AVS\data\GPpouch\AOR1_co.paa","AVS\data\Radio\AOR1_co.paa","AVS\data\glockMags\AOR1_co.paa","AVS\data\pouch556\AOR1_co.paa","AVS\data\SFL_Holster\AOR1_co.paa","AVS\data\Sideplate\AOR1_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_3_MCB: Crye_AVS_1_3
	{
		displayName = "AVS Assaulter #4 MCB";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\AVSPouchT\MCB_co.paa","AVS\data\Belt556\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\GPpouch\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\pouch556\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\AVSPouchT\MCB_co.paa","AVS\data\Belt556\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\GPpouch\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\pouch556\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_3_MCT: Crye_AVS_1_3
	{
		displayName = "AVS Assaulter #4 MCT";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\AVSPouchT\MCT_co.paa","AVS\data\Belt556\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\GPpouch\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\pouch556\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\AVSPouchT\MCT_co.paa","AVS\data\Belt556\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\GPpouch\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\pouch556\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_3_Tan: Crye_AVS_1_3
	{
		displayName = "AVS Assaulter #4 Tan";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\AVSPouchT\Tan_co.paa","AVS\data\Belt556\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\GPpouch\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\pouch556\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\AVSPouchT\Tan_co.paa","AVS\data\Belt556\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\GPpouch\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\pouch556\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_1_3_RG: Crye_AVS_1_3
	{
		displayName = "AVS Assaulter #4 RG";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\AVSPouchT\RG_co.paa","AVS\data\Belt556\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\GPpouch\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\pouch556\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\AVSPouchT\RG_co.paa","AVS\data\Belt556\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\GPpouch\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\pouch556\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_2: Crye_AVS_1
	{
		displayName = "AVS Gunner #1 MC";
		picture = "\AVS\icons\AVSIcon.paa";
		model = "\AVS\AVS_2.p3d";
		hiddenSelections[] = {"AVS_Base","AVSx3Pouch","BluforceMed","Cumber_x3","Belt","Harris152a_FL","LMG_Pouches","PistolmagsBelt","SFLandHolster","SidePlate","S20"};
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\AVSPouch\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\lmgpouches\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\AVS\AVS_2.p3d";
			hiddenSelections[] = {"AVS_Base","AVSx3Pouch","BluforceMed","Cumber_x3","Belt","Harris152a_FL","LMG_Pouches","PistolmagsBelt","SFLandHolster","SidePlate","S20"};
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\AVSPouch\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\lmgpouches\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
			containerClass = "Supply140";
			mass = 90;
		};
	};
	class Crye_AVS_2_AOR1: Crye_AVS_2
	{
		displayName = "AVS Gunner #1 AOR1";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\AOR1_co.paa","AVS\data\AVSPouch\AOR1_co.paa","AVS\data\BluforMed\AOR1_co.paa","AVS\data\Cumberbands\AOR1_co.paa","AVS\data\BeltGBRS\AOR1_co.paa","AVS\data\Radio\AOR1_co.paa","AVS\data\lmgpouches\AOR1_co.paa","AVS\data\glockMags\AOR1_co.paa","AVS\data\SFL_Holster\AOR1_co.paa","AVS\data\Sideplate\AOR1_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\AOR1_co.paa","AVS\data\AVSPouch\AOR1_co.paa","AVS\data\BluforMed\AOR1_co.paa","AVS\data\Cumberbands\AOR1_co.paa","AVS\data\BeltGBRS\AOR1_co.paa","AVS\data\Radio\AOR1_co.paa","AVS\data\lmgpouches\AOR1_co.paa","AVS\data\glockMags\AOR1_co.paa","AVS\data\SFL_Holster\AOR1_co.paa","AVS\data\Sideplate\AOR1_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_2_MCB: Crye_AVS_2
	{
		displayName = "AVS Gunner #1 MCB";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\AVSPouch\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\lmgpouches\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\AVSPouch\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\lmgpouches\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_2_MCT: Crye_AVS_2
	{
		displayName = "AVS Gunner #1 MCT";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\AVSPouch\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\lmgpouches\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\AVSPouch\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\lmgpouches\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_2_RG: Crye_AVS_2
	{
		displayName = "AVS Gunner #1 RG";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\AVSPouch\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\lmgpouches\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\AVSPouch\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\lmgpouches\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_2_Tan: Crye_AVS_2
	{
		displayName = "AVS Gunner #1 Tan";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\AVSPouch\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\lmgpouches\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\AVSPouch\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\lmgpouches\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3: Crye_AVS_1
	{
		displayName = "AVS Comms #1 MC";
		picture = "\AVS\icons\AVSIcon.paa";
		model = "\AVS\AVS_3.p3d";
		hiddenSelections[] = {"AVS_Base","AVSx3Pouch","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","Harris152a_BR","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\AVSPouch\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\GPpouch\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\pouch556\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\AVS\AVS_3.p3d";
			hiddenSelections[] = {"AVS_Base","AVSx3Pouch","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","Harris152a_BR","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\AVSPouch\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\GPpouch\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\pouch556\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_AOR1: Crye_AVS_3
	{
		displayName = "AVS Comms #1 AOR1";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\aor1_co.paa","AVS\data\AVSPouch\aor1_co.paa","AVS\data\Belt556\aor1_co.paa","AVS\data\BluforMed\aor1_co.paa","AVS\data\Cumberbands\aor1_co.paa","AVS\data\BeltGBRS\aor1_co.paa","AVS\data\GPpouch\aor1_co.paa","AVS\data\Radio\aor1_co.paa","AVS\data\Radio\aor1_co.paa","AVS\data\glockMags\aor1_co.paa","AVS\data\pouch556\aor1_co.paa","AVS\data\SFL_Holster\aor1_co.paa","AVS\data\Sideplate\aor1_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\aor1_co.paa","AVS\data\AVSPouch\aor1_co.paa","AVS\data\Belt556\aor1_co.paa","AVS\data\BluforMed\aor1_co.paa","AVS\data\Cumberbands\aor1_co.paa","AVS\data\BeltGBRS\aor1_co.paa","AVS\data\GPpouch\aor1_co.paa","AVS\data\Radio\aor1_co.paa","AVS\data\Radio\aor1_co.paa","AVS\data\glockMags\aor1_co.paa","AVS\data\pouch556\aor1_co.paa","AVS\data\SFL_Holster\aor1_co.paa","AVS\data\Sideplate\aor1_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_MCB: Crye_AVS_3
	{
		displayName = "AVS Comms #1 MCB";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\AVSPouch\MCB_co.paa","AVS\data\Belt556\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\GPpouch\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\pouch556\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\AVSPouch\MCB_co.paa","AVS\data\Belt556\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\GPpouch\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\pouch556\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_MCT: Crye_AVS_3
	{
		displayName = "AVS Comms #1 MCT";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\AVSPouch\MCT_co.paa","AVS\data\Belt556\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\GPpouch\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\pouch556\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\AVSPouch\MCT_co.paa","AVS\data\Belt556\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\GPpouch\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\pouch556\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_RG: Crye_AVS_3
	{
		displayName = "AVS Comms #1 RG";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\AVSPouch\RG_co.paa","AVS\data\Belt556\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\GPpouch\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\pouch556\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\AVSPouch\RG_co.paa","AVS\data\Belt556\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\GPpouch\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\pouch556\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_Tan: Crye_AVS_3
	{
		displayName = "AVS Comms #1 Tan";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\AVSPouch\Tan_co.paa","AVS\data\Belt556\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\GPpouch\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\pouch556\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\AVSPouch\Tan_co.paa","AVS\data\Belt556\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\GPpouch\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\pouch556\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_1: Crye_AVS_1
	{
		displayName = "AVS Comms #2 MC";
		picture = "\AVS\icons\AVSIcon.paa";
		model = "\AVS\AVS_3_1.p3d";
		hiddenSelections[] = {"AVS_Base","Kangaroo_Pouch","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","Harris152a_BR","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\Kangaroo\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\GPpouch\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\pouch556\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\AVS\AVS_3_1.p3d";
			hiddenSelections[] = {"AVS_Base","Kangaroo_Pouch","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","Harris152a_BR","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\Kangaroo\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\GPpouch\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\pouch556\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_1_AOR1: Crye_AVS_3_1
	{
		displayName = "AVS Comms #2 AOR1";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\aor1_co.paa","AVS\data\Kangaroo\aor1_co.paa","AVS\data\Belt556\aor1_co.paa","AVS\data\BluforMed\aor1_co.paa","AVS\data\Cumberbands\aor1_co.paa","AVS\data\BeltGBRS\aor1_co.paa","AVS\data\GPpouch\aor1_co.paa","AVS\data\Radio\aor1_co.paa","AVS\data\Radio\aor1_co.paa","AVS\data\glockMags\aor1_co.paa","AVS\data\pouch556\aor1_co.paa","AVS\data\SFL_Holster\aor1_co.paa","AVS\data\Sideplate\aor1_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\aor1_co.paa","AVS\data\Kangaroo\aor1_co.paa","AVS\data\Belt556\aor1_co.paa","AVS\data\BluforMed\aor1_co.paa","AVS\data\Cumberbands\aor1_co.paa","AVS\data\BeltGBRS\aor1_co.paa","AVS\data\GPpouch\aor1_co.paa","AVS\data\Radio\aor1_co.paa","AVS\data\Radio\aor1_co.paa","AVS\data\glockMags\aor1_co.paa","AVS\data\pouch556\aor1_co.paa","AVS\data\SFL_Holster\aor1_co.paa","AVS\data\Sideplate\aor1_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_1_MCB: Crye_AVS_3_1
	{
		displayName = "AVS Comms #2 MCB";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\Kangaroo\MCB_co.paa","AVS\data\Belt556\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\GPpouch\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\pouch556\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\Kangaroo\MCB_co.paa","AVS\data\Belt556\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\GPpouch\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\pouch556\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_1_MCT: Crye_AVS_3_1
	{
		displayName = "AVS Comms #2 MCT";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\Kangaroo\MCT_co.paa","AVS\data\Belt556\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\GPpouch\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\pouch556\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\Kangaroo\MCT_co.paa","AVS\data\Belt556\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\GPpouch\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\pouch556\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_1_RG: Crye_AVS_3_1
	{
		displayName = "AVS Comms #2 RG";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\Kangaroo\RG_co.paa","AVS\data\Belt556\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\GPpouch\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\pouch556\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\Kangaroo\RG_co.paa","AVS\data\Belt556\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\GPpouch\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\pouch556\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_1_Tan: Crye_AVS_3_1
	{
		displayName = "AVS Comms #2 Tan";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\Kangaroo\Tan_co.paa","AVS\data\Belt556\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\GPpouch\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\pouch556\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\Kangaroo\Tan_co.paa","AVS\data\Belt556\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\GPpouch\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\pouch556\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_2: Crye_AVS_1
	{
		displayName = "AVS Comms #3 MC";
		picture = "\AVS\icons\AVSIcon.paa";
		model = "\AVS\AVS_3_2.p3d";
		hiddenSelections[] = {"AVS_Base","AVS_MK4","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","Harris152a_BR","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\MK4\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\GPpouch\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\pouch556\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\AVS\AVS_3_2.p3d";
			hiddenSelections[] = {"AVS_Base","AVS_MK4","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","Harris152a_BR","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\MK4\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\GPpouch\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\pouch556\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_2_AOR1: Crye_AVS_3_2
	{
		displayName = "AVS Comms #3 AOR1";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\aor1_co.paa","AVS\data\MK4\aor1_co.paa","AVS\data\Belt556\aor1_co.paa","AVS\data\BluforMed\aor1_co.paa","AVS\data\Cumberbands\aor1_co.paa","AVS\data\BeltGBRS\aor1_co.paa","AVS\data\GPpouch\aor1_co.paa","AVS\data\Radio\aor1_co.paa","AVS\data\Radio\aor1_co.paa","AVS\data\glockMags\aor1_co.paa","AVS\data\pouch556\aor1_co.paa","AVS\data\SFL_Holster\aor1_co.paa","AVS\data\Sideplate\aor1_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\aor1_co.paa","AVS\data\MK4\aor1_co.paa","AVS\data\Belt556\aor1_co.paa","AVS\data\BluforMed\aor1_co.paa","AVS\data\Cumberbands\aor1_co.paa","AVS\data\BeltGBRS\aor1_co.paa","AVS\data\GPpouch\aor1_co.paa","AVS\data\Radio\aor1_co.paa","AVS\data\Radio\aor1_co.paa","AVS\data\glockMags\aor1_co.paa","AVS\data\pouch556\aor1_co.paa","AVS\data\SFL_Holster\aor1_co.paa","AVS\data\Sideplate\aor1_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_2_MCB: Crye_AVS_3_2
	{
		displayName = "AVS Comms #3 MCB";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\MK4\MCB_co.paa","AVS\data\Belt556\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\GPpouch\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\pouch556\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\MK4\MCB_co.paa","AVS\data\Belt556\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\GPpouch\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\pouch556\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_2_MCT: Crye_AVS_3_2
	{
		displayName = "AVS Comms #3 MCT";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\MK4\MCT_co.paa","AVS\data\Belt556\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\GPpouch\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\pouch556\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\MK4\MCT_co.paa","AVS\data\Belt556\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\GPpouch\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\pouch556\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_2_RG: Crye_AVS_3_2
	{
		displayName = "AVS Comms #3 RG";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\MK4\RG_co.paa","AVS\data\Belt556\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\GPpouch\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\pouch556\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\MK4\RG_co.paa","AVS\data\Belt556\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\GPpouch\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\pouch556\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_2_Tan: Crye_AVS_3_2
	{
		displayName = "AVS Comms #3 Tan";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\MK4\Tan_co.paa","AVS\data\Belt556\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\GPpouch\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\pouch556\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\MK4\Tan_co.paa","AVS\data\Belt556\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\GPpouch\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\pouch556\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_3: Crye_AVS_1
	{
		displayName = "AVS Comms #4 MC";
		picture = "\AVS\icons\AVSIcon.paa";
		model = "\AVS\AVS_3_3.p3d";
		hiddenSelections[] = {"AVS_Base","AVSx3Pouch_T","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","Harris152a_BR","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\AVSPouchT\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\GPpouch\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\pouch556\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\AVS\AVS_3_3.p3d";
			hiddenSelections[] = {"AVS_Base","AVSx3Pouch_T","Belt556Pouch","BluforceMed","Cumber_x3","Belt","GP_Pouch_BL","Harris152a_FL","Harris152a_BR","PistolmagsBelt","pouch556_FR","SFLandHolster","SidePlate","S20"};
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MC_co.paa","AVS\data\AVSPouchT\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\Cumberbands\MC_co.paa","AVS\data\BeltGBRS\MC_co.paa","AVS\data\GPpouch\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\Radio\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\pouch556\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa","AVS\data\Sideplate\MC_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_3_AOR1: Crye_AVS_3_3
	{
		displayName = "AVS Comms #4 AOR1";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\aor1_co.paa","AVS\data\AVSPouchT\aor1_co.paa","AVS\data\Belt556\aor1_co.paa","AVS\data\BluforMed\aor1_co.paa","AVS\data\Cumberbands\aor1_co.paa","AVS\data\BeltGBRS\aor1_co.paa","AVS\data\GPpouch\aor1_co.paa","AVS\data\Radio\aor1_co.paa","AVS\data\Radio\aor1_co.paa","AVS\data\glockMags\aor1_co.paa","AVS\data\pouch556\aor1_co.paa","AVS\data\SFL_Holster\aor1_co.paa","AVS\data\Sideplate\aor1_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\aor1_co.paa","AVS\data\AVSPouchT\aor1_co.paa","AVS\data\Belt556\aor1_co.paa","AVS\data\BluforMed\aor1_co.paa","AVS\data\Cumberbands\aor1_co.paa","AVS\data\BeltGBRS\aor1_co.paa","AVS\data\GPpouch\aor1_co.paa","AVS\data\Radio\aor1_co.paa","AVS\data\Radio\aor1_co.paa","AVS\data\glockMags\aor1_co.paa","AVS\data\pouch556\aor1_co.paa","AVS\data\SFL_Holster\aor1_co.paa","AVS\data\Sideplate\aor1_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_3_MCB: Crye_AVS_3_3
	{
		displayName = "AVS Comms #4 MCB";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\AVSPouchT\MCB_co.paa","AVS\data\Belt556\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\GPpouch\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\pouch556\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCB_co.paa","AVS\data\AVSPouchT\MCB_co.paa","AVS\data\Belt556\MCB_co.paa","AVS\data\BluforMed\MCB_co.paa","AVS\data\Cumberbands\MCB_co.paa","AVS\data\BeltGBRS\MCB_co.paa","AVS\data\GPpouch\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\Radio\MCB_co.paa","AVS\data\glockMags\MCB_co.paa","AVS\data\pouch556\MCB_co.paa","AVS\data\SFL_Holster\MCB_co.paa","AVS\data\Sideplate\MCB_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_3_MCT: Crye_AVS_3_3
	{
		displayName = "AVS Comms #4 MCT";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\AVSPouchT\MCT_co.paa","AVS\data\Belt556\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\GPpouch\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\pouch556\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\MCT_co.paa","AVS\data\AVSPouchT\MCT_co.paa","AVS\data\Belt556\MCT_co.paa","AVS\data\BluforMed\MCT_co.paa","AVS\data\Cumberbands\MCT_co.paa","AVS\data\BeltGBRS\MCT_co.paa","AVS\data\GPpouch\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\Radio\MCT_co.paa","AVS\data\glockMags\MCT_co.paa","AVS\data\pouch556\MCT_co.paa","AVS\data\SFL_Holster\MCT_co.paa","AVS\data\Sideplate\MCT_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_3_RG: Crye_AVS_3_3
	{
		displayName = "AVS Comms #4 RG";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\AVSPouchT\RG_co.paa","AVS\data\Belt556\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\GPpouch\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\pouch556\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\RG_co.paa","AVS\data\AVSPouchT\RG_co.paa","AVS\data\Belt556\RG_co.paa","AVS\data\BluforMed\RG_co.paa","AVS\data\Cumberbands\RG_co.paa","AVS\data\BeltGBRS\RG_co.paa","AVS\data\GPpouch\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\Radio\RG_co.paa","AVS\data\glockMags\RG_co.paa","AVS\data\pouch556\RG_co.paa","AVS\data\SFL_Holster\RG_co.paa","AVS\data\Sideplate\RG_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Crye_AVS_3_3_Tan: Crye_AVS_3_3
	{
		displayName = "AVS Comms #4 Tan";
		hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\AVSPouchT\Tan_co.paa","AVS\data\Belt556\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\GPpouch\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\pouch556\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"AVS\data\Vest\Tan_co.paa","AVS\data\AVSPouchT\Tan_co.paa","AVS\data\Belt556\Tan_co.paa","AVS\data\BluforMed\Tan_co.paa","AVS\data\Cumberbands\Tan_co.paa","AVS\data\BeltGBRS\Tan_co.paa","AVS\data\GPpouch\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\Radio\Tan_co.paa","AVS\data\glockMags\Tan_co.paa","AVS\data\pouch556\Tan_co.paa","AVS\data\SFL_Holster\Tan_co.paa","AVS\data\Sideplate\Tan_co.paa","AVS\data\S20\S20_co.paa"};
		};
	};
	class Belt_gbrs: Vest_Camo_Base
	{
		author = "The Sad Face";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "GBRS GROUP Assaulter Belt System V2 #1 MC";
		picture = "\AVS\icons\gbrsbeltIcon.paa";
		model = "\AVS\belt_gbrs_1.p3d";
		hiddenSelections[] = {"Belt","Belt556Pouch","BluforceMed","PistolmagsBelt","SFLandHolster"};
		hiddenSelectionsTextures[] = {"AVS\data\BeltGBRS\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\AVS\belt_gbrs_1.p3d";
			hiddenSelections[] = {"Belt","Belt556Pouch","BluforceMed","PistolmagsBelt","SFLandHolster"};
			hiddenSelectionsTextures[] = {"AVS\data\BeltGBRS\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa"};
			containerClass = "Supply80";
			mass = 40;
		};
	};
	class Belt_fc: Belt_gbrs
	{
		author = "The Sad Face";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "Ferro Concepts Bison Belt #1 MC";
		picture = "\AVS\icons\fcbeltIcon.paa";
		model = "\AVS\belt_fc_1.p3d";
		hiddenSelections[] = {"Belt","Belt556Pouch","BluforceMed","PistolmagsBelt","SFLandHolster"};
		hiddenSelectionsTextures[] = {"AVS\data\BeltFC\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\AVS\belt_fc_1.p3d";
			hiddenSelections[] = {"Belt","Belt556Pouch","BluforceMed","PistolmagsBelt","SFLandHolster"};
			hiddenSelectionsTextures[] = {"AVS\data\BeltFC\MC_co.paa","AVS\data\Belt556\MC_co.paa","AVS\data\BluforMed\MC_co.paa","AVS\data\glockMags\MC_co.paa","AVS\data\SFL_Holster\MC_co.paa"};
			containerClass = "Supply80";
			mass = 40;
		};
	};
};
