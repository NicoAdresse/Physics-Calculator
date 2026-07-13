// include/inc_kinetic_energy.hpp

#pragma once

/*
Formulas (Kinetic Energy):
    kinetic energy = 0.5 * mass * velocity ^ 2 (ke = 0.5 * m * v ^ 2)
*/

namespace Physics
{
    class KineticEnergyFormulas
    {
        void calculateKineticEnergy(const double mass, const double velocity);
    };
}