// impl/impl_potential_energy.cpp

#include "../include/inc_potential_energy.hpp"
#include "helper/helper_funcs.hpp"

void Physics::PotentialEnergyFormulas::calculatePotentialEnergy(
    const double mass,
    const double gravity,
    const double height
)
{
    double result{mass * gravity * height};

    displayResultThreeVariables(
        "Potential Energy | pe",
        mass,
        gravity,
        height,
        result,
        "Mass | m",
        "Gravity | g",
        "Height | h",
        '*',
        '*'
    );
}