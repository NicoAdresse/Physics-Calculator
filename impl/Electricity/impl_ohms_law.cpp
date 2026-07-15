// impl/Electricity/impl_ohms_law.cpp

#include "Electricity/inc_ohms_law.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Electricity::OhmsLaw::calculateVoltage(
    const double resistance,
    const double current,
    const bool willDisplayResult
)
{
    const double result{resistance * current};

    if (willDisplayResult) {
        displayResult(
            "Voltage | vol",
            resistance,
            current,
            result,
            "Resistance | res",
            "Current | cur",
            '*'
        );
    }

    return result;
}

double Physics::Electricity::OhmsLaw::calculateCurrent(
    const double voltage,
    const double resistance,
    const bool willDisplayResult
)
{
    const double result{safeDivision(voltage, resistance)};

    if (willDisplayResult) {
        displayResult(
            "Current | cur",
            voltage,
            resistance,
            result,
            "Voltage | vol",
            "Resistance | res",
            '/'
        );
    }

    return result;
}

double Physics::Electricity::OhmsLaw::calculateResistance(
    const double voltage,
    const double current,
    const bool willDisplayResult
)
{
    const double result{safeDivision(voltage, current)};

    if (willDisplayResult) {
        displayResult(
            "Resistance | res",
            voltage,
            current,
            result,
            "Voltage | vol",
            "Current | cur",
            '/'
        );
    }

    return result;
}