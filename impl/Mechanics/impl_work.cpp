// impl/Mechanics/impl_work.cpp

#include "Mechanics/inc_work.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Mechanics::Work::calculateWork(
    const double force,
    const double distance,
    const bool willDisplayResult
)
{
    const double result{force * distance};

    if (willDisplayResult) {
        displayResult(
            "Work | wo",
            force,
            distance,
            result,
            "Force | f",
            "Distance | d",
            '*'
        );
    }

    return result;
}