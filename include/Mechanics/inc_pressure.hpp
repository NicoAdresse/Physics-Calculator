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
        class PressureFormulas
        {
            public:
                void calculatePressure(const double force, const double area);
        };
    }
}