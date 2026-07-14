// impl/Mechanics/impl_force.cpp

#include "Mechanics/inc_force.hpp"
#include "../Helper/helper_funcs.hpp"

void Physics::Mechanics::ForceFormulas::calculateForce(const double mass, const double acceleration)
{
    double result{mass * acceleration};
    
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

void Physics::Mechanics::ForceFormulas::calculateMass(const double force, const double acceleration)
{
    double result{safeDivision(force, acceleration)};

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

void Physics::Mechanics::ForceFormulas::calculateAcceleration(const double force, const double mass)
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