// include/Electricity/inc_coulombs_law.hpp

#pragma once

/*
Formulas (Coulomb's Law):
    electric force = constant * charge1 * charge2 / distance^2 (ef = con * ch1 * ch2 / d²)
*/

namespace Physics
{
    namespace Electricity
    {
        class CoulombsLaw
        {
            public:
                double calculateElectricForce(
                    const double constant,
                    const double charge1,
                    const double charge2,
                    const double distance,
                    const bool willDisplayResult
                );
        };
    }
}