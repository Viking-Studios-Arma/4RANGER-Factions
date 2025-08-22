
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
