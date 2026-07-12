// impl/impl_formulas.cpp

#include "../include/inc_density.hpp"
#include "helper/helper_funcs.hpp"

void DensityFormulas::calculateMass(const double rho, const double volume)
{
    const double result{rho * volume};
    displayResult(rho, volume, result, "Density | Rho", "Volume | V", '*');
}

void DensityFormulas::calculateRho(const double mass, const double volume)
{
    const double result{safeDivision(mass, volume)};
    displayResult(mass, volume, result, "Mass | m", "Volume | V", '/');
}

void DensityFormulas::calculateVolume(const double rho, const double mass)
{
    const double result{safeDivision(mass, rho)};
    displayResult(mass, rho, result, "Mass | m", "Density | Rho", '/');
}