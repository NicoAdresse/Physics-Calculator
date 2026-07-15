// include/Electricity/inc_charge.hpp

#pragma once

/*
Formulas (Charge):
    charge = current * time (cha = cur * t)
*/

namespace Physics
{
    namespace Electricity
    {
        class Charge
        {
            public:
                double calculateCharge(
                    const double current,
                    const double time,
                    const bool willDisplayResult
                );
        };
    }
}