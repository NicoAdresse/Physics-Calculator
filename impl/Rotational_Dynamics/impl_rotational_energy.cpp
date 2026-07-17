// impl/Rotational_Dynamics/impl_rotational_energy.cpp

#include "Rotational_Dynamics/inc_rotational_energy.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::RotationalDynamics::RotationalEnergy::calculateRotationalEnergy(
    const double momentOfInertia,
    const double angularVelocity,
    const bool willDisplayResult
)
{
    const double result{(0.5 * momentOfInertia) * (angularVelocity * angularVelocity)};

    if (willDisplayResult) {
        displayResultWithFraction(
            "Rotational Energy | roe",
            0.5,
            momentOfInertia,
            angularVelocity,
            result,
            "Moment of Inertia | moi",
            "Angular Velocity^2 | anv^2",
            '*',
            '*'
        );
    }

    return result;
}