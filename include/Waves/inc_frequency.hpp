// include/Waves/inc_frequency.hpp

#pragma once

/*
Formulas (Frequency):
    frequency = 1 / period (fre = 1 / per)
*/

namespace Physics
{
    namespace Waves
    {
        class Frequency
        {
            public:
                double calculateFrequency(const double period, const bool willDisplayResult);
        };
    }
}