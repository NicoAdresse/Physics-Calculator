// impl/Electricity/impl_charge.cpp

#include "Electricity/inc_charge.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Electricity::Charge::calculateCharge(
    const double current,
    const double time,
    const bool willDisplayResult
)
{
    const double result{current * time};

    if (willDisplayResult) {
        displayResult(
            "Charge | cha",
            current,
            time,
            result,
            "Current | cur",
            "Time | t",
            '*'
        );
    }

    return result;
}