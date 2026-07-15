// include/Mechanics/inc_pressure.hpp

#pragma once

/*
Formulas (Pressure):
    pressure = force / area (pr = f / ar)
*/

namespace Physics
{
    namespace Mechanics
    {
        class Pressure
        {
            public:
                double calculatePressure(
                    const double force,
                    const double area,
                    const bool willDisplayResult);
        };
    }
}