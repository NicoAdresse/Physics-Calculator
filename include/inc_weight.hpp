// include/inc_weight.hpp

#pragma once

/*
Formulas (Weight):
    weight = mass * gravity (w = m * g)
*/

namespace Physics
{
    class WeightFormulas
    {
    public:
        void calculateWeight(const double mass, const double gravity);
    };
}