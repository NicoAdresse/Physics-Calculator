// impl/Mechanics/impl_power.cpp

#include "Mechanics/inc_power.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Mechanics::Power::calculatePower(
    const double work,
    const double time,
    const bool willDisplayResult
)
{
    const double result{safeDivision(work, time)};

    if (willDisplayResult) {
        displayResult(
            "Power | p",
            work,
            time,
            result,
            "Work | wo",
            "Time | t",
            '/'
        );
    }

    return result;
}