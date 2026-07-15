// include/Mechanics/inc_hookes_law.hpp

#pragma once

/*
Formulas (Hooke's Law):
    spring force = spring constant * displacement (spf = spc * di)
*/

namespace Physics
{
    namespace Mechanics
    {
        class HookesLaw
        {
            public:
                double calculateSpringForce(
                    const double springConstant,
                    const double displacement,
                    const bool willDisplayResult
                );
        };
    }
}