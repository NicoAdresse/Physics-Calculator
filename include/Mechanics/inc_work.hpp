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
        class WorkFormulas
        {
            public:
                void calculateWork(const double force, const double distance);
        };
    }
}