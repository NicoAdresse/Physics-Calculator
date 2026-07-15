// include/Mechanics/inc_power.hpp

#pragma once

/*
Formulas (Power):
    power = work / time (p = wo / t)
*/

namespace Physics
{
    namespace Mechanics
    {
        class PowerFormulas
        {
            public:
                void calculatePower(const double work, const double time);
        };
    }
}