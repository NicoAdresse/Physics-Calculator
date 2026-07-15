// impl/Mechanics/impl_pressure.cpp

#include "Mechanics/inc_pressure.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Mechanics::Pressure::calculatePressure(
    const double force,
    const double area,
    const bool willDisplayResult
)
{
    const double result{force / area};

    if (willDisplayResult) {
        displayResult(
            "Pressure | pr",
            force,
            area,
            result,
            "Force | f",
            "Area | ar",
            '/'
        );
    }

    return result;
}