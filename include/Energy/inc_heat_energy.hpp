// include/Energy/inc_heat_energy.hpp

#pragma once

/*
Formulas (Heat Energy):
    heat energy = mass * specific heat capacity * temperature change (he = m * shc * delta(tc))
*/

namespace Physics
{
    namespace Energy
    {
        class HeatEnergy
        {
            public:
                double calculateHeatEnergy(
                    const double mass,
                    const double specificHeatCapacity,
                    const double initialTemperature,
                    const double finalTemperature,
                    const bool willDisplayResult
                );
        };
    }
}