// impl/impl_avg_velocity.cpp

#include "../include/inc_avg_velocity.hpp"
#include "helper/helper_funcs.hpp"

void AvgVelocityFormulas::calculateVelocity(const double distance, const double time)
{
    double result{safeDivision(distance, time)};
    displayResult(distance, time, result, "Distance | d", "Time | t", '/');
}

void AvgVelocityFormulas::calculateDistance(const double velocity, const double time)
{
    double result{velocity * time};
    displayResult(velocity, time, result, "Velocity | v", "Time | t", '*');
}

void AvgVelocityFormulas::calculateTime(const double distance, const double velocity)
{
    double result{safeDivision(distance, velocity)};
    displayResult(distance, velocity, result, "Distance | d", "Velocity | v", '/');
}