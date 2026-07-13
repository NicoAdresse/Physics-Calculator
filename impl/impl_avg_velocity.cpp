// impl/impl_avg_velocity.cpp

#include "../include/inc_avg_velocity.hpp"
#include "helper/helper_funcs.hpp"

void Physics::AvgVelocityFormulas::calculateVelocity(const double distance, const double time)
{
    double result{safeDivision(distance, time)};

    displayResult(
        "Velocity | v",
        distance,
        time,
        result,
        "Distance | d",
        "Time | t",
        '/'
    );
}

void Physics::AvgVelocityFormulas::calculateDistance(const double velocity, const double time)
{
    double result{velocity * time};

    displayResult(
        "Distance | d",
        velocity,
        time,
        result,
        "Velocity | v",
        "Time | t",
        '*'
    );
}

void Physics::AvgVelocityFormulas::calculateTime(const double distance, const double velocity)
{
    double result{safeDivision(distance, velocity)};

    displayResult(
        "Time | t",
        distance,
        velocity,
        result,
        "Distance | d",
        "Velocity | v",
        '/'
    );
}