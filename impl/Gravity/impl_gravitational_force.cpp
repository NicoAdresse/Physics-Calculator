// impl/Gravity/impl_gravitational_force.cpp

#include "Gravity/inc_gravitational_force.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Gravity::GravitationalForce::calculateGravitationalForce(
    const double constant,
    const double mass1,
    const double mass2,
    const double distance,
    const bool willDisplayResult
)
{
    const double result{(constant * mass1 * mass2) / (distance * distance)};

    if (willDisplayResult) {
        displayResultFourVariables(
            "Gravitational Force | grf",
            constant,
            mass1,
            mass2,
            distance,
            result,
            "Constant | con",
            "Mass1 | m1",
            "Mass2 | m2",
            "Distance^2 | d^2",
            '*',
            '*',
            '/'
        );
    }

    return result;
}