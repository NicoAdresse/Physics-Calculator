// impl/Electricity/impl_power.cpp

#include "Electricity/inc_power.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Electricity::Power::calculatePower(
    const double voltage,
    const double current,
    const bool willDisplayResult
)
{
    const double result{voltage * current};

    if (willDisplayResult) {
        displayResult(
            "Power | po",
            voltage,
            current,
            result,
            "Voltage | vol",
            "Current | cur",
            '*'
        );
    }

    return result;
}