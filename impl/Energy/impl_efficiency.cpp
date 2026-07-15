// impl/Energy/impl_efficiency.cpp

#include "Energy/inc_efficiency.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Energy::Efficiency::calculateEfficiencyDecimal(
    const double usefulOutput,
    const double totalInput,
    const bool willDisplayResult
)
{
    const double result{safeDivision(usefulOutput, totalInput)};

    if (willDisplayResult) {
        displayResult(
            "Efficiency | eff",
            usefulOutput,
            totalInput,
            result,
            "Useful Output | uo",
            "Total Input | ti",
            '/'
        );

        return result;
    }
    
    return result;
}

double Physics::Energy::Efficiency::calculateEfficiencyPercentage(
    const double usefulOutput,
    const double totalInput,
    const bool willDisplayResult
)
{
    const double result{safeDivision(usefulOutput, totalInput) * 100};

    if (willDisplayResult) {
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

    return result;
}