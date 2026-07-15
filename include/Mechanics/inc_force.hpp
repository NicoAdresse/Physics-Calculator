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
            void calculateForce(const double mass, const double acceleration);
            void calculateMass(const double force, const double acceleration);
            void calculateAcceleration(const double force, const double mass);
        };
    }
}