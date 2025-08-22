class CfgPatches
{
    class VSC_Uniforms_USP
    {
        name = "USP Extended Config";
        author = "Amateur-god";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"aceax_gearinfo"};
    };
};

#include "hpp\Backpacks\CfgVehicles.hpp"

class XtdGearModels
{
    class CfgWeapons
    {
        #include "hpp\XtdGearModels\Vests_MC.hpp"
        #include "hpp\XtdGearModels\Uniforms_MC.hpp"
        #include "hpp\XtdGearModels\Helmets.hpp"

    };
    class CfgVehicles
    {
        #include "hpp\XtdGearModels\Backpacks_MC.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "hpp\XtdGearInfo\Vests_MC.hpp"
        #include "hpp\XtdGearInfo\Uniforms_MC.hpp"
        #include "hpp\XtdGearInfo\Helmets.hpp"
    };
    class CfgVehicles
    {
        #include "hpp\XtdGearInfo\Backpacks_MC.hpp"
    };
};
