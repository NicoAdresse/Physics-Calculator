// impl/Mechanics/impl_torque.cpp

#include <cmath>

#include "Mechanics/inc_torque.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Mechanics::Torque::calculateTorqueSimplified(
    const double force,
    const double distance,
    const bool willDisplayResult
)
{
    const double result{force * distance};

    if (willDisplayResult) {
        displayResult(
            "Torque | tq",
            force,
            distance,
            result,
            "Force | f",
            "Distance | d",
            '*'
        );
    }

    return result;
}

double Physics::Mechanics::Torque::calculateTorque(
    const double force,
    const double radius,
    const double angle,
    const bool willDisplayResult
)
{
    const double radians{angle * (PI / 180.0)};
    const double result{(force * radius) * std::sin(radians)};

    if (willDisplayResult) {
        displayResultWithTrigonometry(
            "Torque | tq",
            "sine",
            force,
            radius,
            angle,
            result,
            "Force | f",
            "Radius | ra",
            "Angle | an",
            '*',
            '*'
        );
    }

    return result;
}