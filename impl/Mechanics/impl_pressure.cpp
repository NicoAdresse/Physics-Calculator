// impl/Mechanics/impl_pressure.cpp

#include "Mechanics/inc_pressure.hpp"
#include "../Helper/helper_funcs.hpp"

void Physics::Mechanics::PressureFormulas::calculatePressure(const double force, const double area)
{
    const double result{force / area};

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