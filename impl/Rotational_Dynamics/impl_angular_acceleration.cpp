// impl/Rotation_Dynamics/impl_angular_acceleration.cpp

#include "Rotational_Dynamics/inc_angular_acceleration.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::RotationalDynamics::AngularAcceleration::calculateAngularAcceleration(
    const double initialAngularVelocity,
    const double finalAngularVelocity,
    const double time,
    const bool willDisplayResult
)
{
    const double angularVelocityChange{calculateDelta(initialAngularVelocity, finalAngularVelocity)};
    const double result{angularVelocityChange / time};

    if (willDisplayResult) {
        displayResult(
            "Angular Acceleration | ana",
            angularVelocityChange,
            time,
            result,
            "Angular Velocity Change | delta(an)",
            "Time | t",
            '/'
        );
    }

    return result;
}