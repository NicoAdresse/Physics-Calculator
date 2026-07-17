// include/Rotational_Dynamics/inc_rotational_energy.hpp

#pragma once

/*
Formulas (Kinetic Energy):
    rotational energy = 0.5 * moment of inertia * angular velocity^2 (roe = 0.5 * moi * anv^2)
*/

namespace Physics
{
    namespace RotationalDynamics
    {
        class RotationalEnergy
        {
            public:
                double calculateRotationalEnergy(
                    const double momentOfInertia,
                    const double angularVelocity,
                    const bool willDisplayResult
                );
        };
    }
}