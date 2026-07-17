// include/Gravity/inc_gravitational_force.hpp

#pragma once

/*
Formulas: (Gravitational Force):
    gravity force = constant * mass1 * mass2 / distance^2 (grf = con * m1 * m2 / d^2)
*/

namespace Physics
{
    namespace Gravity
    {
        class GravitationalForce
        {
            public:
                double calculateGravitationalForce(
                    const double constant,
                    const double mass1,
                    const double mass2,
                    const double distance,
                    const bool willDisplayResult
                );
        };
    }
}