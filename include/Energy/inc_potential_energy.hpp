// include/inc_potential_energy.hpp

#pragma once

/*
Formulas (Potential Energy):
    potential energy = mass * gravity * height (pe = m * g * h)
*/

namespace Physics
{
    namespace Energy
    {
        class PotentialEnergyFormulas
        {
            public:
                void calculatePotentialEnergy(const double mass, const double gravity, const double height);
        };
    }
}