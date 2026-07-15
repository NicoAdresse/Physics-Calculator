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
                double calculateEfficiencyDecimal(
                    const double usefulOutput,
                    const double totalInput,
                    const bool willDisplayResult
                );

                double calculateEfficiencyPercentage(
                    const double usefulOutput,
                    const double totalInput,
                    const bool willDisplayResult
                );
        };
    }
}