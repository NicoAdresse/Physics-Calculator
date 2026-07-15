// include/Electricity/inc_ohms_law.hpp

#pragma once

/*
Formulas (Ohm's Law):
    voltage = resistance * current (vol = res * cur)
    current = voltage / resistance (cur = vol / res)
    resistance = voltage / current (res = vol / cur)
*/

namespace Physics
{
    namespace Electricity
    {
        class OhmsLaw
        {
            public:
                double calculateVoltage(
                    const double resistance,
                    const double current,
                    const bool willDisplayResult
                );

                double calculateCurrent(
                    const double voltage,
                    const double resistance,
                    const bool willDisplayResult
                );

                double calculateResistance(
                    const double voltage,
                    const double current,
                    const bool willDisplayResult
                );
        };
    }
}