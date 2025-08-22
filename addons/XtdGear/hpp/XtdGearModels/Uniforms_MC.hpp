		// Defines the overall gear model for the USP G3 Uniform.
		class USP_G3_Uniform
		{
		    label = "4RANGER G3 Uniform (MC)";
		    author = "Amateur-god";
		    scope = 2;
		    scopeCurator = 2;
		    options[] = {"Shirt","Trousers","Sleeves","Collar","Kneepads","Gloves","Camera"};

		    // Defines the various shirt types available.
		    class Shirt
		    {
		        alwaysSelectable = 1;
		        changeingame = 1;
		        values[] = {"G3C","UBACS","PCU","Softshell","Rugby","Tshirt","Tshirt2","OverCoat_TAN","OverCoat_GRN"};
		        class G3C
		        {
		            label = "Combat Shirt";
		            image="x\VS_Ranger\USP\data\MC.paa";
		        };
		        class UBACS
		        {
		            label = "UBACS Shirt";
		            image="x\VS_Ranger\USP\data\MC.paa";
		        };
		        class PCU
		        {
		            label = "PCU Top";
		            image="x\VS_Ranger\USP\data\MC.paa";
		        };
		        class Softshell
		        {
		            label = "Softshell Top";
		        };
		        class Rugby
		        {
		            label = "Rugby Shirt";
		            image="#(rgb,8,8,3)color(0.55,0.38,0.25,1)";
		        };
		        class Tshirt
		        {
		            label = "T-Shirt";
		            image="#(rgb,8,8,3)color(0.55,0.38,0.25,1)";
		        };
		        class Tshirt2
		        {
		            label = "T-Shirt (Tucked)";
		            image="#(rgb,8,8,3)color(0.55,0.38,0.25,1)";
		        };
		        class OverCoat_TAN
		        {
		            label = "OverCoat (TAN)";
		            image="#(rgb,8,8,3)color(0.55,0.38,0.25,1)";
		        };
		        class OverCoat_GRN
		        {
		            label = "OverCoat (GRN)";
		            image = "#(rgb,8,8,3)color(0.34,0.4,0.26,1)";
		        };
		    };

		    // Defines the various trousers patterns available.
		    class Trousers
		    {
		        alwaysSelectable = 1;
		        changeingame = 1;
		        values[] = {"MC","KHK","AOR2"};
		        class MC
		        {
		            label = "Multicam";
		            image="x\VS_Ranger\USP\data\MC.paa";
		        };
		        class KHK
		        {
		            label = "Khaki";
		            image="x\VS_Ranger\USP\data\khk.paa";
		        };
		        class AOR2
		        {
		            label = "AOR2";
		            image="x\VS_Ranger\USP\data\aor2.paa";
		        };
		    };

		    // Defines the sleeve configuration.
		    class Sleeves
		    {
		        alwaysSelectable = 1;
		        changeingame = 1;
		        values[] = {"Normal","CS","RS","RS2"};
		        class Normal { label = "Normal"; };
		        class CS { label = "Cut Sleeves"; };
		        class RS { label = "Rolled Sleeves"; };
		        class RS2 { label = "Rolled Sleeves 2"; };
		    };

		    // Defines the collar configuration.
		    class Collar
		    {
		        alwaysSelectable = 1;
		        changeingame = 1;
		        values[] = {"Down","Up"};
		        class Down { label = "Collar Down"; };
		        class Up { label = "Collar Up"; };
		    };

		    // Defines the type of gloves.
		    class Gloves
		    {
		        alwaysSelectable = 1;
		        changeingame = 1;
		        values[] = {"None","Mechanix","Overlord"};
		        class None { label = "None"; };
		        class Mechanix { label = "Mechanix"; };
		        class Overlord { label = "Overlord"; };
		    };

		    // Defines the presence of kneepads.
		    class Kneepads
		    {
		        alwaysSelectable = 1;
		        changeingame = 1;
		        values[] = {"No","Yes"};
		        class No { label = "No"; };
		        class Yes { label = "Yes"; };
		    };

		    // Defines the presence of a camera.
		    class Shoes
		    {
		        alwaysSelectable = 1;
		        changeingame = 1;
		        values[] = {"BTS","WS"};
		        class BTS { label = "Boots"; };
		        class WS { label = "Walking Shoes"; };
		    };
		};
		class VSM_Multicam_Uniform
		{
		    label = "VSM Multicam Uniform";
		    author = "Amateur-god";
		    scope = 2;
		    scopeCurator = 2;
		    options[] = {"Shirt","Pants","Sleeves"};

		    class Shirt
		    {
		        alwaysSelectable = 1;
		        changeingame = 1;
		        values[] = {"MC_Shirt","OD_Shirt","Tan_Shirt","Tee"};
		        class MC_Shirt
		        {
		            label = "Multicam";
		            image = "x\VS_Ranger\USP\data\MC.paa";
		        };
		        class OD_Shirt
		        {
		            label = "OD";
		            image = "#(rgb,8,8,3)color(0.34,0.4,0.26,1)";
		        };
		        class Tan_Shirt
		        {
		            label = "Khaki";
                    image="x\VS_Ranger\USP\data\khk.paa";
		        };
		        class Tee
		        {
		            label = "T-Shirt";
		        };
		    };

		    class Pants
		    {
		        alwaysSelectable = 1;
		        changeingame = 1;
		        values[] = {"MC_Pants","OD_Pants","Tan_Pants"};
		        class MC_Pants
		        {
		            label = "Multicam";
		            image = "x\VS_Ranger\USP\data\MC.paa";
		        };
		        class OD_Pants
		        {
		            label = "OD";
		            image = "#(rgb,8,8,3)color(0.34,0.4,0.26,1)";
		        };
		        class Tan_Pants
		        {
		            label = "Khaki";
                    image="x\VS_Ranger\USP\data\khk.paa";
		        };
		    };

		    class Sleeves
		    {
		        alwaysSelectable = 1;
		        changeingame = 1;
		        values[] = {"Normal","SS"};
		        class Normal { label = "Normal"; };
		        class SS { label = "Rolled Sleeves"; };
		    };
		};
