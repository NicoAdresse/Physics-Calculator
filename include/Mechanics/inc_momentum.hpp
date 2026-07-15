// include/Mechanics/inc_momentum.hpp

#pragma once

/*
Formulas (Momentum):
    momentum = mass * velocity (mom = m * v)
*/

namespace Physics
{
    namespace Mechanics
    {
        class MomentumFormulas
        {
            public:
                void calculateMomentum(const double mass, const double velocity);
        };
    }
}