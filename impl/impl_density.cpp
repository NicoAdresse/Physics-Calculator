// impl/impl_formulas.cpp

#include "../include/inc_density.hpp"
#include "helper/helper_funcs.hpp"

void DensityFormulas::calculateMass(const double rho, const double v)
{
    const double result{rho * v};
    displayResult(rho, v, result, "Density | Rho", "Volume | V", '*');
}

void DensityFormulas::calculateRho(const double m, const double v)
{
    const double result{safeDivision(m, v)};
    displayResult(m, v, result, "Mass | m", "Volume | V", '/');
}

void DensityFormulas::calculateVolume(const double rho, const double m)
{
    const double result{safeDivision(m, rho)};
    displayResult(rho, m, result, "Density | Rho", "Mass | m", '/');
}