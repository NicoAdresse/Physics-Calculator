// impl/impl_formulas.cpp

#include "../include/inc_density.hpp"
#include "helper/helper_funcs.hpp"

void Physics::DensityFormulas::calculateMass(const double rho, const double volume)
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

void Physics::DensityFormulas::calculateRho(const double mass, const double volume)
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

void Physics::DensityFormulas::calculateVolume(const double rho, const double mass)
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