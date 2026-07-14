// impl/Mechanics/impl_work.cpp

#include "../../include/Mechanics/inc_work.hpp"
#include "../helper/helper_funcs.hpp"

void Physics::Mechanics::WorkFormulas::calculateWork(const double force, const double distance)
{
    double result{force * distance};

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