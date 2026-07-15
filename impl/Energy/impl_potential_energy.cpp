// impl/Energy/impl_potential_energy.cpp

#include "Energy/inc_potential_energy.hpp"
#include "../Helper/helper_funcs.hpp"

void Physics::Energy::PotentialEnergy::calculatePotentialEnergy(
    const double mass,
    const double gravity,
    const double height
)
{
    const double result{mass * gravity * height};

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