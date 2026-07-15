// impl/Mechanics/impl_hookes_law.cpp

#include "Mechanics/inc_hookes_law.hpp"
#include "../Helper/helper_funcs.hpp"

void Physics::Mechanics::HookesLaw::calculateSpringForce(
    const double springConstant,
    const double displacement
)
{
    const double result{springConstant * displacement};

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