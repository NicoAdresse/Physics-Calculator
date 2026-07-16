// include/Waves/inc_period.hpp

#pragma once

/*
Formulas (Period):
    period = 1 / frequency (per = 1 / fre)
*/

namespace Physics
{
    namespace Waves
    {
        class Period
        {
            public:
                double calculatePeriod(const double frequency, const bool willDisplayResult);
        };
    }
}