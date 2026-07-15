// include/Mechanics/inc_accerleration.hpp

#pragma once

/*
Formulas (Acceleration):
    acceleration = velocity change / time (a = delta(v) / t)
    velocity change = acceleration * time (delta(v) = a * t)
*/

namespace Physics
{
    namespace Mechanics
    {
        class Acceleration
        {
        public:
            double calculateAcceleration(
                const double initialVelocity,
                const double finalVelocity,
                const double time,
                const bool willDisplayResult
            );

            double calculateVelocityChange(
                const double acceleration,
                const double time,
                const bool willDisplayResult
            );
        };
    }
}