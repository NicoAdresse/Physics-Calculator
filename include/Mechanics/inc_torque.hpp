// include/Mechanics/inc_torque.hpp

#pragma once

/*
Formulas (Torque):
    torque = force * distance (tq = f * d) | SIMPLIFIED
    torque = force * radius * sine(angle) (tq = f * ra * sin(an))
*/

namespace Physics
{
    namespace Mechanics
    {
        class Torque
        {
            public:
                double calculateTorqueSimplified(
                    const double force,
                    const double distance,
                    const bool willDisplayResult
                );

                double calculateTorque(
                    const double force,
                    const double radius,
                    const double angle,
                    const bool willDisplayResult
                );
        };
    }
}