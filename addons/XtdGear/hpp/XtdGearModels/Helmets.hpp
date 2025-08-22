		class Helmets
		{
			label = "Helmets";
			author = "Viking Studios";
			options[] = {"Camo","ComTacs","Headcam","Counterweight","Goggles","Sidelight","TacLight"};

			// Defines the camouflage or color of the helmet.
			class Camo
			{
                alwaysSelectable = 1;
				changeingame = 1;
				values[] = {"MTC","CBR"};
				class MTC { label = "Multicam Tropic"; };
				class CBR { label = "Coyote Brown"; };
			};

			// Defines the presence of ComTacs.
			class ComTacs
			{
                alwaysSelectable = 1;
				changeingame = 1;
				values[] = {"No","Yes"};
				class No { label = "No"; };
				class Yes { label = "ComTacs"; };
			};

			// Defines the presence of a headcam.
			class Headcam
			{
                alwaysSelectable = 1;
				changeingame = 1;
				values[] = {"No","Yes"};
				class No { label = "No"; };
				class Yes { label = "Headcam"; };
			};

			// Defines the presence of a counterweight.
			class Counterweight
			{
                alwaysSelectable = 1;
				changeingame = 1;
				values[] = {"No","Yes"};
				class No { label = "No"; };
				class Yes { label = "Counterweight"; };
			};

			// Defines the presence of goggles.
			class Goggles
			{
                alwaysSelectable = 1;
				changeingame = 1;
				values[] = {"No","Yes"};
				class No { label = "No"; };
				class Yes { label = "Goggles"; };
			};

			// Defines the presence of a sidelight.
			class Sidelight
			{
                alwaysSelectable = 1;
				changeingame = 1;
				values[] = {"No","Yes"};
				class No { label = "No"; };
				class Yes { label = "Sidelight"; };
			};

			// Defines the presence of a tactical light.
			class TacLight
			{
                alwaysSelectable = 1;
				changeingame = 1;
				values[] = {"No","Yes"};
				class No { label = "No"; };
				class Yes { label = "TacLight"; };
			};
		};
