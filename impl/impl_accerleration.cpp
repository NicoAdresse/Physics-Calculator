// impl/impl_accerleration.cpp

#include "../include/inc_accerleration.hpp"
#include "helper/helper_funcs.hpp"

void AccelerationFormulas::calculateAcceleration(double initialVelocity, double finalVelocity, const double time)
{
    double change{calculateDelta(initialVelocity, finalVelocity, "Velocity")};
    double result{safeDivision(change, time)};

    displayResult(change, time, result, "Delta Velocity | delta(v)", "Time | t", '/');
}

void AccelerationFormulas::calculateVelocityChange(const double acceleration, const double time)
{
    double result{acceleration * time};

    displayResult(acceleration, time, result, "Acceleration | a", "Time | t", '*');
}