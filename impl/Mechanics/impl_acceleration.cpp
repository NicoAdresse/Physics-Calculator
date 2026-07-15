// impl/Mechanics/impl_acceleration.cpp

#include "Mechanics/inc_acceleration.hpp"
#include "../Helper/helper_funcs.hpp"

void Physics::Mechanics::AccelerationFormulas::calculateAcceleration(
    double initialVelocity,
    double finalVelocity,
    const double time
)
{
    const double change{calculateDelta(initialVelocity, finalVelocity, "Velocity")};
    const double result{safeDivision(change, time)};

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

void Physics::Mechanics::AccelerationFormulas::calculateVelocityChange(
    const double acceleration,
    const double time
)
{
    double result{acceleration * time};

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