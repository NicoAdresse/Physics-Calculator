// include/Rotational_Dynamics/inc_angular_velocity.hpp

#pragma once

/*
Formulas (Angular Velocity):
    angular velocity = angle / time (anv = an / t)
*/

namespace Physics
{
    namespace RotationalDynamics
    {
        class AngularVelocity
        {
            public:
                double calculateAngularVelocity(
                    const double angle,
                    const double time,
                    const bool willDisplayResult
                );
        };
    }
}