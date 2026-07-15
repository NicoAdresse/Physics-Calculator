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
            void calculateAcceleration(double initialVelocity, double finalVelocity, const double time);
            void calculateVelocityChange(const double acceleration, const double time);
        };
    }
}