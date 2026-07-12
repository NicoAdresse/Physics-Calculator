// include/inc_force.hpp

#pragma once

/*
Formulas (Force):
    force = mass * acceleration (f = m * a)
    mass = force / acceleration (m = f / a)
    acceleration = force / mass (a = f / m)
*/

class ForceFormulas
{
public:
    void calculateForce(const double mass, const double acceleration);
    void calculateMass(const double force, const double acceleration);
    void calculateAcceleration(const double force, const double mass);
};
