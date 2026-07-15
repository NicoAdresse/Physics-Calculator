// impl/Energy/impl_kinetic_energy.cpp

#include "Energy/inc_kinetic_energy.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Energy::KineticEnergy::calculateKineticEnergy(
    const double mass,
    const double velocity,
    const bool willDisplayResult
)
{
    const double result{(0.5 * mass) * (velocity * velocity)};

    if (willDisplayResult) {
        displayResultWithFraction(
            "Kinetic Energy | ke",
            0.5,
            mass,
            velocity,
            result,
            "Mass | m",
            "Velocity | v",
            '*',
            '*'
        );
    }

    return result;
}