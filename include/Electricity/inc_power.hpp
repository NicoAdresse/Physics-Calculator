// include/Electricity/inc_power.hpp

#pragma once

/*
Formulas (Power):
    power = voltage * current (po = vol * cur)
*/

namespace Physics
{
    namespace Electricity
    {
        class Power
        {
            public:
                double calculatePower(
                    const double voltage,
                    const double current,
                    const bool willDisplayResult
                );
        };
    }
}