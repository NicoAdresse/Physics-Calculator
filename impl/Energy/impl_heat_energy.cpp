// impl/Energy/impl_heat_energy.cpp

#include "Energy/inc_heat_energy.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Energy::HeatEnergy::calculateHeatEnergy(
    const double mass,
    const double specificHeatCapacity,
    const double initialTemperature,
    const double finalTemperature,
    const bool willDisplayResult
)
{
    const double change{calculateDelta(initialTemperature, finalTemperature)};
    const double result{mass * specificHeatCapacity * change};

    if (willDisplayResult) {
        displayResultThreeVariables(
            "Heat Energy | he",
            mass,
            specificHeatCapacity,
            change,
            result,
            "Mass | m",
            "Specific Heat Capacity | shc",
            "Temperature Change | delta(tc)",
            '*',
            '*'
        );
    }

    return result;
}