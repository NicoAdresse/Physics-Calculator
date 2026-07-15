// impl/Energy/impl_potential_energy.cpp

#include "Energy/inc_potential_energy.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Energy::PotentialEnergy::calculatePotentialEnergy(
    const double mass,
    const double gravity,
    const double height,
    const bool willDisplayResult
)
{
    const double result{mass * gravity * height};

    if (willDisplayResult) {
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

    return result;
}