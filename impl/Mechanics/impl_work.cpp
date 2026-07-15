// impl/Mechanics/impl_work.cpp

#include "Mechanics/inc_work.hpp"
#include "../Helper/helper_funcs.hpp"

void Physics::Mechanics::WorkFormulas::calculateWork(const double force, const double distance)
{
    const double result{force * distance};

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