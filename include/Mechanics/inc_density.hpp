// include/Mechanics/inc_density.hpp

#pragma once

/*
Formulas: (Density)
    rho = mass / volume (rho = mass / v)
    mass = rho * volume (m = rho * v)
    volume = mass / rho (v = m / rho)
*/

namespace Physics
{
    namespace Mechanics
    {
        class Density
        {
        public:
            double calculateMass(const double rho, const double volume, const bool willDisplayResult);
            double calculateVolume(const double rho, const double mass, const bool willDisplayResult);
            double calculateRho(const double mass, const double volume, const bool willDisplayResult);
        };
    }
}