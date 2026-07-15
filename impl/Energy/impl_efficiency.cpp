// impl/Energy/impl_efficiency.cpp

#include "Energy/inc_efficiency.hpp"
#include "../Helper/helper_funcs.hpp"

void Physics::Energy::Efficiency::calculateEfficiencyDecimal(
    const double usefulOutput,
    const double totalInput
)
{
    const double result{safeDivision(usefulOutput, totalInput)};

    displayResult(
        "Efficiency | eff",
        usefulOutput,
        totalInput,
        result,
        "Useful Output | uo",
        "Total Input | ti",
        '/'
    );
}

void Physics::Energy::Efficiency::calculateEfficiencyPercentage(
    const double usefulOutput,
    const double totalInput
)
{
    const double result{safeDivision(usefulOutput, totalInput) * 100};

    displayResultPercentage(
        "Efficiency | eff",
        usefulOutput,
        totalInput,
        result,
        "Useful Output | uo",
        "Total Input | ti",
        '/'
    );
}