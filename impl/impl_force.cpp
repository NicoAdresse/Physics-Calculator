// impl/impl_force.cpp

#include "../include/inc_force.hpp"
#include "helper/helper_funcs.hpp"

void ForceFormulas::calculateForce(const double mass, const double acceleration)
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

void ForceFormulas::calculateMass(const double force, const double acceleration)
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

void ForceFormulas::calculateAcceleration(const double force, const double mass)
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