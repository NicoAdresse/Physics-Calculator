// impl/Energy/impl_heat_energy.cpp

#include "Energy/inc_heat_energy.hpp"
#include "../Helper/helper_funcs.hpp"

void Physics::Energy::HeatEnergy::calculateHeatEnergy(
    const double mass,
    const double specificHeatCapacity,
    const double initialTemperature,
    const double finalTemperature
)
{
    const double change{calculateDelta(initialTemperature, finalTemperature)};
    const double result{mass * specificHeatCapacity * change};

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