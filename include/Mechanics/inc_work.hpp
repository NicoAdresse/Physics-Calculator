// include/Mechanics/inc_work.hpp

#pragma once

/*
Formulas (Work):
    work = force * distance (wo = f * d)
*/

namespace Physics
{
    namespace Mechanics
    {
        class Work
        {
            public:
                double calculateWork(const double force, const double distance, const bool willDisplayResult);
        };
    }
}