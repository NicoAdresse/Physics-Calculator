// include/Energy/inc_efficiency.hpp

#pragma once

/*
Formulas (Efficiency):
    efficiency = useful output / total input (eff = uo / ti)
*/

namespace Physics
{
    namespace Energy
    {
        class Efficiency
        {
            public:
                void calculateEfficiencyDecimal(const double usefulOutput, const double totalInput);
                void calculateEfficiencyPercentage(const double usefulOutput, const double totalInput);
        };
    }
}