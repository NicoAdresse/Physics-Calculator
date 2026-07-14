// impl/Mechanics/impl_weight.cpp

#include "Mechanics/inc_weight.hpp"
#include "../Helper/helper_funcs.hpp"

void Physics::Mechanics::WeightFormulas::calculateWeight(const double mass, const double gravity)
{
    double result{mass * gravity};

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