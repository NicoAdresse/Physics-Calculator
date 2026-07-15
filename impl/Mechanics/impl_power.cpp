// impl/Mechanics/impl_power.cpp

#include "Mechanics/inc_power.hpp"
#include "../Helper/helper_funcs.hpp"

void Physics::Mechanics::Power::calculatePower(const double work, const double time)
{
    const double result{safeDivision(work, time)};

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