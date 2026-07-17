// include/Rotational_Dynamics/inc_angular_acceleration.hpp

#pragma once

/*
Formulas (Angular Acceleration):
    angular acceleration = angular velocity change / time (ana = delta(anv) / t)
*/

namespace Physics
{
    namespace RotationalDynamics
    {
        class AngularAcceleration
        {
            public:
                double calculateAngularAcceleration(
                    const double initialAngularVelocity,
                    const double finalAngularVelocity,
                    const double time,
                    const bool willDisplayResult
                );
        };
    }
}