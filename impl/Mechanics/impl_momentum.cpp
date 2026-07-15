// impl/Mechanics/impl_momentum.cpp

#include "Mechanics/inc_momentum.hpp"
#include "../Helper/helper_funcs.hpp"

void Physics::Mechanics::Momentum::calculateMomentum(const double mass, const double velocity)
{
    const double result{mass * velocity};

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