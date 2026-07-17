// impl/Rotational_Dynamics/impl_angular_velocity.cpp

#include "Rotational_Dynamics/inc_angular_velocity.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::RotationalDynamics::AngularVelocity::calculateAngularVelocity(
    const double angle,
    const double time,
    const bool willDisplayResult
)
{
    const double result{angle / time};

    if (willDisplayResult) {
        displayResult(
            "Angular Velocity | anv",
            angle,
            time,
            result,
            "Angle | an",
            "Time | t",
            '/'
        );
    }

    return result;
}