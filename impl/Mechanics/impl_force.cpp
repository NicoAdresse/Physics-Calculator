// impl/Mechanics/impl_force.cpp

#include "Mechanics/inc_force.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Mechanics::Force::calculateForce(
    const double mass,
    const double acceleration,
    const bool willDisplayResult
)
{
    const double result{mass * acceleration};
    
    if (willDisplayResult) {
        displayResult(
            "Force | f",
            mass,
            acceleration,
            result,
            "Mass | m",
            "Acceleration | a",
            '*'  
        );
    }

    return result;
}

double Physics::Mechanics::Force::calculateMass(
    const double force,
    const double acceleration,
    const bool willDisplayResult
)
{
    const double result{safeDivision(force, acceleration)};

    if (willDisplayResult) {
            displayResult(
            "Mass | m",
            force,
            acceleration,
            result,
            "Force | f",
            "Acceleration | a",
            '/'
        );
    }

    return result;
}

double Physics::Mechanics::Force::calculateAcceleration(
    const double force,
    const double mass,
    const bool willDisplayResult)
{
    const double result{safeDivision(force, mass)};

    if (willDisplayResult) {
        displayResult(
            "Acceleration | a",
            force,
            mass,
            result,
            "Force | f",
            "Mass | m",
            '/'
        );
    }

    return result;
}