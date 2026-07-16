// impl/Waves/impl_wave_speed.cpp

#include "Waves/inc_frequency.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Waves::Frequency::calculateFrequency(
    const double period,
    const bool willDisplayResult
)
{
    const double result{1.0 / period};

    if (willDisplayResult) {
        displayResult(
            "Frequency | fre",
            1.0,
            period,
            result,
            "Cycle | cyc",
            "Period | per",
            '/'
        );
    }

    return result;
}