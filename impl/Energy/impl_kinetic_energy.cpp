// impl/Energy/impl_kinetic_energy.cpp

#include "../../include/Energy/inc_kinetic_energy.hpp"
#include "../helper/helper_funcs.hpp"

void Physics::Energy::KineticEnergyFormulas::calculateKineticEnergy(
    const double mass,
    const double velocity
)
{
    const double result{(0.5 * mass) * (velocity * velocity)};

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