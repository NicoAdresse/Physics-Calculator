// include/Mechanics/inc_torque.hpp

#pragma once

/*
Formulas (Torque):
    torque = force * distance (tq = f * d)
*/

namespace Physics
{
    namespace Mechanics
    {
        class TorqueFormulas
        {
            public:
                void calculateTorque(const double force, const double distance);
        };
    }
}