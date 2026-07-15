// impl/Mechanics/impl_acceleration.cpp

#include "Mechanics/inc_acceleration.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Mechanics::Acceleration::calculateAcceleration(
    double initialVelocity,
    double finalVelocity,
    const double time,
    const bool willDisplayResult
)
{
    const double change{calculateDelta(initialVelocity, finalVelocity)};
    const double result{safeDivision(change, time)};

    if (willDisplayResult) {
        displayResult(
            "Acceleration | a",
            change,
            time,
            result,
            "Delta Velocity | delta(v)",
            "Time | t",
            '/'
        );
    }

    return result;
}

double Physics::Mechanics::Acceleration::calculateVelocityChange(
    const double acceleration,
    const double time,
    const bool willDisplayResult
)
{
    double result{acceleration * time};

    if (willDisplayResult) {
        displayResult(
            "Delta Velocity | delta(v)",
            acceleration,
            time,
            result,
            "Acceleration | a",
            "Time | t",
            '*'
        );
    }

    return result;
}