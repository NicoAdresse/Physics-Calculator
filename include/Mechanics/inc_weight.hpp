// include/Mechanics/inc_weight.hpp

#pragma once

/*
Formulas (Weight):
    weight = mass * gravity (w = m * g)
*/

namespace Physics
{
    namespace Mechanics
    {
        class Weight
        {
        public:
            double calculateWeight(const double mass, const double gravity, const bool willDisplayResult);
        };
    }
}