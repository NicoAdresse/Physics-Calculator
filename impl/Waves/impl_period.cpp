// impl/Waves/impl_period.cpp

#include "Waves/inc_period.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Waves::Period::calculatePeriod(
    const double frequency,
    const bool willDisplayResult
)
{
    const double result{1.0 / frequency};

    if (willDisplayResult) {
        displayResult(
            "Period | per",
            1.0,
            frequency,
            result,
            "Cycle | cyc",
            "Frequency | fre",
            '/'
        );
    }

    return result;
}