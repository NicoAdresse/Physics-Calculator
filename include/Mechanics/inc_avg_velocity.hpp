// include/inc_avg_velocity.hpp

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
        class AvgVelocityFormulas
        {
        public:
            void calculateVelocity(const double distance, const double time);
            void calculateDistance(const double velocity, const double time);
            void calculateTime(const double distance, const double velocity);
        };
    }
}