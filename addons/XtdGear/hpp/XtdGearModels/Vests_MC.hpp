
        // Defines the overall gear model for the Crye CPC vests.
        class USP_CRYE_CPC_Vest
        {
            label = "Crye CPC";
            author = "Amateur-god";
            options[] = {"VestType","BattleBelt","Camo"};

            // Defines the various vest types available for the CPC.
            class VestType
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"Weapon","Comms","Fast","Lead","Medic","Light"};
                class Comms { label = "Comms"; };
                class Fast { label = "Fast"; };
                class Lead { label = "Lead"; };
                class Light { label = "Training"; };
                class Medic { label = "Medic"; };
                class Weapon { label = "Rifleman"; };
            };

            // Defines the presence of a belt.
            class BattleBelt
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"No","Yes"};
                class No { label = "No Belt"; };
                class Yes { label = "With Belt"; };
            };

            // Defines the camouflage pattern.
            class Camo
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"MC","CBR"};
                class MC
                {
                    label = "Multicam";
                    image="x\VS_Ranger\USP\data\MC.paa";
                };
                class CBR
                {
                    label = "Coyote Brown";
                	image="#(rgb,8,8,3)color(0.55,0.38,0.25,1)";
                };
            };
        };

        // Defines the overall gear model for the Crye JPC vests.
        class USP_CRYE_JPC_Vest
        {
            label = "Crye JPC";
            author = "Amateur-god";
            options[] = {"VestType","BattleBelt","Camo"};

            // Defines the various vest types available for the JPC.
            class VestType
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"Standard","Assault","Fast","Grenadier","Machinegunner","Designated_Marksman","Team_Leader"};
                class Standard { label = "Standard"; };
                class Assault { label = "Assault"; };
                class Fast { label = "Fast"; };
                class Grenadier { label = "GL"; };
                class Machinegunner { label = "MG"; };
                class Designated_Marksman { label = "DMR"; };
                class Team_Leader { label = "SL/TL"; };
            };

            // Defines the presence of a belt.
            class BattleBelt
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"No","Yes"};
                class No { label = "No Belt"; };
                class Yes { label = "With Belt"; };
            };

            // Defines the camouflage pattern.
            class Camo
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"MC","KHK","CBR"};
                class MC
                {
                    label = "Multicam";
                    image="x\VS_Ranger\USP\data\MC.paa";
                };
                class KHK
                {
                    label = "Khaki";
                    image="x\VS_Ranger\USP\data\KHK.paa";
                };
                class CBR
                {
                    label = "Coyote Brown";
                    image="#(rgb,8,8,3)color(0.55,0.38,0.25,1)";
                };
            };
        };
        // TSF Vests
        class TSF_Crye_AVS_Vest
        {
            label = "Crye AVS (TSF)";
            author = "Amateur-god";
            scope = 2;
            scopeCurator = 2;
            options[] = {"VestType","Loadout","Camo"};

            class VestType
            {
                alwaysSelectable = 1;
                changeingame = 1;
                values[] = {"AVS_1","AVS_2","AVS_3"};
                class AVS_1 { label = "Assaulter"; };
                class AVS_2 { label = "MG"; };
                class AVS_3 { label = "Comms"; };
            };

            class Loadout
            {
                alwaysSelectable = 1;
                changeingame = 1;
                values[] = {"Default","Loadout_1","Loadout_2","Loadout_3"};
                class Default { label = "Default"; };
                class Loadout_1 { label = "Loadout 1"; };
                class Loadout_2 { label = "Loadout 2"; };
                class Loadout_3 { label = "Loadout 3"; };
            };

            class Camo
            {
                alwaysSelectable = 1;
                changeingame = 1;
                values[] = {"MC","RG"};
                class MC
                {
                    label = "Multicam";
                    image="x\VS_Ranger\USP\data\MC.paa";
                };
                class RG
                {
                    label = "Ranger Green";
                    image="#(rgb,8,8,3)color(0.34,0.4,0.26,1)";
                };
            };
        };

        class TSF_Belt
        {
            label = "TSF Belt";
            author = "Amateur-god";
            scope = 2;
            scopeCurator = 2;
            options[] = {"BeltType","Camo"};

            class BeltType
            {
                alwaysSelectable = 1;
                changeingame = 1;
                values[] = {"FC","GBRS"};
                class FC { label = "FC"; };
                class GBRS { label = "GBRS"; };
            };

            class Camo
            {
                alwaysSelectable = 1;
                changeingame = 1;
                values[] = {"MC"};
                class MC
                {
                    label = "Multicam";
                    image="x\VS_Ranger\USP\data\MC.paa";
                };
            };
        };

        // VSM Vests
        class VSM_Vest_Model
        {
            label = "VSM Vest";
            author = "Amateur-god";
            scope = 2;
            scopeCurator = 2;
            options[] = {"VestPlatform","VestLoadout","Camo"};

            class VestPlatform
            {
                alwaysSelectable = 1;
                changeingame = 1;
                values[] = {"FAPC","CarrierRig","LBT6094","RAV"};
                class FAPC { label = "FAPC"; };
                class CarrierRig { label = "Carrier Rig"; };
                class LBT6094 { label = "LBT 6094"; };
                class RAV { label = "RAV"; };
            };

            class VestLoadout
            {
                alwaysSelectable = 1;
                changeingame = 1;
                values[] = {"Breacher","MG","Operator"};
                class Breacher { label = "Breacher"; };
                class MG { label = "MG"; };
                class Operator { label = "Operator"; };
            };

            class Camo
            {
                alwaysSelectable = 1;
                changeingame = 1;
                values[] = {"Multicam","OGA","OGA_OD"};
                class Multicam
                {
                    label = "Multicam";
                    image = "x\VS_Ranger\USP\data\MC.paa";
                };
                class OGA
                {
                    label = "OGA (Tan)";
                    image = "#(rgb,8,8,3)color(0.55,0.38,0.25,1)";
                };
                class OGA_OD
                {
                    label = "OGA (OD)";
                    image = "#(rgb,8,8,3)color(0.34,0.4,0.26,1)";
                };
            };
        };
