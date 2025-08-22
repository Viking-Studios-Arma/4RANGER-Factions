        // --- Battle Belt ---
        class USP_BATTLE_BELT_PACK
        {
            label = "Battle Belt Pack";
            author = "Amateur-god";
            options[] = {"Camo"};

            class Camo
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"MC", "CBR"};
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

        // --- CPC Zip-on Pack ---
        class USP_ZIPON_PACK_CPC
        {
            label = "Crye CPC Zip-On Pack";
            author = "Amateur-god";
            options[] = {"PackType", "Camo"};

            class PackType
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"Standard", "AT", "AT_SM", "BC", "BC_SM", "SM"};
                class Standard { label = "Standard"; };
                class AT { label = "AT"; };
                class AT_SM { label = "AT (SM)"; };
                class BC { label = "BC"; };
                class BC_SM { label = "BC (SM)"; };
                class SM { label = "SM"; };
            };

            class Camo
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"MC", "CBR"};
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

        // --- CPC Zip-on Panel ---
        class USP_ZIPON_PANEL_CPC
        {
            label = "Crye CPC Zip-On Panel";
            author = "Amateur-god";
            options[] = {"PanelType", "Camo"};

            class PanelType
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"Standard", "BC", "BC_SM", "BC_SMK", "BC_SMK_SM", "SM", "SMK", "SMK_SM"};
                class Standard { label = "Standard"; };
                class BC { label = "BC"; };
                class BC_SM { label = "BC (SM)"; };
                class BC_SMK { label = "BC (SMK)"; };
                class BC_SMK_SM { label = "BC (SMK, SM)"; };
                class SM { label = "SM"; };
                class SMK { label = "SMK"; };
                class SMK_SM { label = "SMK (SM)"; };
            };

            class Camo
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"MC", "CBR"};
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

        // --- Individual Universal Packs ---
        class USP_HYDRATION_PACK
        {
            label = "Hydration Pack";
            author = "Amateur-god";
            options[] = {"Camo"};

            class Camo
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"MC", "CBR"};
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
        class USP_BREACHER_PACK
        {
            label = "Breacher Pack";
            author = "Amateur-god";
            options[] = {"Camo"};

            class Camo
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"MC", "CBR"};
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
        class USP_POINTMAN_PACK
        {
            label = "Pointman Pack";
            author = "Amateur-god";
            options[] = {"Camo"};

            class Camo
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"MC", "CBR"};
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

        // --- Bags ---
        class USP_DELTA_BAG
        {
            label = "Delta Bag";
            author = "Amateur-god";
            options[] = {"Camo"};

            class Camo
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"MC", "CBR"};
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

        class USP_45L_RUCKSACK
        {
            label = "45L Rucksack";
            author = "Amateur-god";
            options[] = {"Camo"};

            class Camo
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"MC", "CBR"};
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

        class USP_REEBOW_3DAP_BAG
        {
            label = "Reebow 3DAP Bag";
            author = "Amateur-god";
            options[] = {"Acc", "Camo"};

            class Acc
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"None", "Acc4", "Acc3", "Acc1", "Acc6", "Acc7", "Acc10", "Acc2", "Acc5", "Acc8", "Acc9"};
                class None { label = "Rifleman"; };
                class Acc4 { label = "Rifleman 2"; };
                class Acc3 { label = "Medic"; };
                class Acc1 { label = "Breacher"; };
                class Acc6 { label = "Breacher 2"; };
                class Acc7 { label = "Breacher 3"; };
                class Acc10 { label = "Breacher 4"; };
                class Acc2 { label = "Comms"; };
                class Acc5 { label = "Comms 2"; };
                class Acc8 { label = "Comms 3"; };
                class Acc9 { label = "Comms 4"; };
            };

            class Camo
            {
                alwaysSelectable = 1;
				changeingame = 1;
                values[] = {"MC", "CBR"};
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
