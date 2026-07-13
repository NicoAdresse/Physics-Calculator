// include/inc_formulas.hpp

#pragma once

/*
Formulas: (Density)
    rho = mass / volume (rho = mass / v)
    mass = rho * volume (m = rho * v)
    volume = mass / rho (v = m / rho)
*/

namespace Physics
{
    class DensityFormulas
    {
    public:
        void calculateMass(const double rho, const double volume);
        void calculateVolume(const double rho, const double mass);
        void calculateRho(const double mass, const double volume);
    };
}