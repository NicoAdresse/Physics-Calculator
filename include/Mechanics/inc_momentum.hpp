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
        class Momentum
        {
            public:
                double calculateMomentum(
                    const double mass,
                    const double velocity,
                    const bool willDisplayResult
                );
        };
    }
}