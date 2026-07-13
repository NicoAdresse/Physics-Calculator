// impl/impl_weight.cpp

#include "helper/helper_funcs.hpp"
#include "../include/inc_weight.hpp"

void Physics::WeightFormulas::calculateWeight(const double mass, const double gravity)
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