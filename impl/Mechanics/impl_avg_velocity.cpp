// impl/Mechanics/impl_avg_velocity.cpp

#include "Mechanics/inc_avg_velocity.hpp"
#include "../Helper/helper_funcs.hpp"

void Physics::Mechanics::AvgVelocity::calculateVelocity(
    const double distance,
    const double time
)
{
    const double result{safeDivision(distance, time)};

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

void Physics::Mechanics::AvgVelocity::calculateDistance(
    const double velocity,
    const double time
)
{
    const double result{velocity * time};

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

void Physics::Mechanics::AvgVelocity::calculateTime(
    const double distance,
    const double velocity
)
{
    const double result{safeDivision(distance, velocity)};

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