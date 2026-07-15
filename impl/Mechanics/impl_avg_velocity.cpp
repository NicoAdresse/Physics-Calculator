// impl/Mechanics/impl_avg_velocity.cpp

#include "Mechanics/inc_avg_velocity.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Mechanics::AvgVelocity::calculateVelocity(
    const double distance,
    const double time,
    const bool willDisplayResult
)
{
    const double result{safeDivision(distance, time)};

    if (willDisplayResult) {
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

    return result;
}

double Physics::Mechanics::AvgVelocity::calculateDistance(
    const double velocity,
    const double time,
    const bool willDisplayResult
)
{
    const double result{velocity * time};

    if (willDisplayResult) {
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

    return result;
}

double Physics::Mechanics::AvgVelocity::calculateTime(
    const double distance,
    const double velocity,
    const bool willDisplayResult
)
{
    const double result{safeDivision(distance, velocity)};

    if (willDisplayResult) {
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

    return result;
}