// impl/Mechanics/impl_force.cpp

#include "Mechanics/inc_force.hpp"
#include "../Helper/helper_funcs.hpp"

void Physics::Mechanics::Force::calculateForce(const double mass, const double acceleration)
{
    const double result{mass * acceleration};
    
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

void Physics::Mechanics::Force::calculateMass(const double force, const double acceleration)
{
    const double result{safeDivision(force, acceleration)};

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

void Physics::Mechanics::Force::calculateAcceleration(const double force, const double mass)
{
    double result{safeDivision(force, mass)};

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