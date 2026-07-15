// impl/Mechanics/impl_hookes_law.cpp

#include "Mechanics/inc_hookes_law.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Mechanics::HookesLaw::calculateSpringForce(
    const double springConstant,
    const double displacement,
    const bool willDisplayResult
)
{
    const double result{springConstant * displacement};

    if (willDisplayResult) {
        displayResult(
            "Spring Force | spf",
            springConstant,
            displacement,
            result,
            "Spring Constant | spc",
            "Displacement | di",
            '*'
        );
    }

    return result;
}