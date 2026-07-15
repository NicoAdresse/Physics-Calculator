// impl/Mechanics/impl_density.cpp

#include "Mechanics/inc_density.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Mechanics::Density::calculateMass(
    const double rho,
    const double volume,
    const bool willDisplayResult
)
{
    const double result{rho * volume};

    if (willDisplayResult) {
        displayResult(
            "Mass | m",
            rho,
            volume,
            result,
            "Density | Rho",
            "Volume | v",
            '*'
        );
    }

    return result;
}

double Physics::Mechanics::Density::calculateRho(
    const double mass,
    const double volume,
    const bool willDisplayResult
)
{
    const double result{safeDivision(mass, volume)};

    if (willDisplayResult) {
        displayResult(
            "Density | Rho",
            mass,
            volume,
            result,
            "Mass | m",
            "Volume | v",
            '/'
        );
    }

    return result;
}
double Physics::Mechanics::Density::calculateVolume(
    const double rho,
    const double mass,
    const bool willDisplayResult
)
{
    const double result{safeDivision(mass, rho)};

    if (willDisplayResult) {
        displayResult(
            "Volume | v",
            mass,
            rho,
            result,
            "Mass | m",
            "Density | Rho",
            '/'
        );
    }

    return result;
}