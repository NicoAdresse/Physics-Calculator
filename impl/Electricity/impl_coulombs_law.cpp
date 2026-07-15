// impl/Electricity/impl_coulombs_law.cpp

#include "Electricity/inc_coulombs_law.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Electricity::CoulombsLaw::calculateElectricForce(
    const double constant,
    const double charge1,
    const double charge2,
    const double distance,
    const bool willDisplayResult
)
{
    const double result{(constant * charge1 * charge2) / (distance * distance)};

    if (willDisplayResult) {
        displayResultFourVariables(
            "Electric Force | ef",
            constant,
            charge1,
            charge2,
            distance,
            result,
            "Constant | con",
            "Charge 1 | ch1",
            "Charge 2 | ch2",
            "Distance | d",
            '*',
            '*',
            '/'
        );
    }

    return result;
}