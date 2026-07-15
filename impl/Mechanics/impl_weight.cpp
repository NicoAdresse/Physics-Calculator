// impl/Mechanics/impl_weight.cpp

#include "Mechanics/inc_weight.hpp"
#include "../Helper/helper_funcs.hpp"

void Physics::Mechanics::Weight::calculateWeight(const double mass, const double gravity)
{
    const double result{mass * gravity};

    displayResult(
        "Weight | w",
        mass,
        gravity,
        result,
        "Mass | m",
        "Gravity | g",
        '*'
    );
}