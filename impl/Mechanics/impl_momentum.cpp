// impl/Mechanics/impl_momentum.cpp

#include "Mechanics/inc_momentum.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Mechanics::Momentum::calculateMomentum(
    const double mass,
    const double velocity,
    const bool willDisplayResult
)
{
    const double result{mass * velocity};

    if (willDisplayResult) {
        displayResult(
            "Momentum | mom",
            mass,
            velocity,
            result,
            "Mass | m",
            "Velocity | v",
            '*'
        );
    }

    return result;
}