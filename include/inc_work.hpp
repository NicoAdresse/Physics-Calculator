// include/inc_work.hpp

#pragma once

/*
Formulas (Work):
    work = force * distance (wo = f * d)
*/

namespace Physics
{
    class WorkFormulas
    {
        public:
            void calculateWork(const double force, const double distance);
    };
}