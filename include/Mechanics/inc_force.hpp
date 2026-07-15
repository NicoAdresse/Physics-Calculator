// include/Mechanics/inc_force.hpp

#pragma once

/*
Formulas (Force):
    force = mass * acceleration (f = m * a)
    mass = force / acceleration (m = f / a)
    acceleration = force / mass (a = f / m)
*/

namespace Physics
{
    namespace Mechanics
    {
        class Force
        {
        public:
            double calculateForce(const double mass, const double acceleration, const bool willDisplayResult);
            double calculateMass(const double force, const double acceleration, const bool willDisplayResult);
            double calculateAcceleration(const double force, const double mass, const bool willDisplayResult);
        };
    }
}