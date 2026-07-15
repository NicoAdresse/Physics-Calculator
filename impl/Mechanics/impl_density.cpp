// impl/Mechanics/impl_density.cpp

#include "Mechanics/inc_density.hpp"
#include "../Helper/helper_funcs.hpp"

void Physics::Mechanics::Density::calculateMass(const double rho, const double volume)
{
    const double result{rho * volume};

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

void Physics::Mechanics::Density::calculateRho(const double mass, const double volume)
{
    const double result{safeDivision(mass, volume)};

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

void Physics::Mechanics::Density::calculateVolume(const double rho, const double mass)
{
    const double result{safeDivision(mass, rho)};

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