// include/Mechanics/inc_avg_velocity.hpp

#pragma once

/*
Formulas: (Average Velocity)
    velocity = distance / time (v = d / t)
    distance = velocity * time (d = v * t)
    time = distance / velocity (t = d / v)
*/

namespace Physics
{
    namespace Mechanics
    {
        class AvgVelocity
        {
        public:
            double calculateVelocity(const double distance, const double time, const bool willDisplayResult);
            double calculateDistance(const double velocity, const double time, const bool willDisplayResult);
            double calculateTime(const double distance, const double velocity, const bool willDisplayResult);
        };
    }
}