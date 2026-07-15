// impl/Mechanics/impl_weight.cpp

#include "Mechanics/inc_weight.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Mechanics::Weight::calculateWeight(
    const double mass,
    const double gravity,
    const bool willDisplayResult
)
{
    const double result{mass * gravity};

    if (willDisplayResult) {
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

    return result;
}