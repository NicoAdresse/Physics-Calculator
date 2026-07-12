// src/main.cpp

#include "../include/inc_density.hpp"
#include "../include/inc_avg_velocity.hpp"
#include "../include/inc_accerleration.hpp"
#include "../include/inc_force.hpp"

int main()
{
    DensityFormulas df;
    AvgVelocityFormulas avgvf;
    AccelerationFormulas accf;
    ForceFormulas ff;

    df.calculateMass(10.0, 5.0);
    df.calculateRho(4.5, 5.5);
    df.calculateVolume(9.4, 4.0);

    avgvf.calculateDistance(14.2, 5.0);
    avgvf.calculateTime(3.2, 6.4);
    avgvf.calculateVelocity(3.4, 5.9);

    accf.calculateAcceleration(1.0, 10.0, 2.0);
    accf.calculateVelocityChange(25.0, 5.0);

    ff.calculateAcceleration(5.2, 9.5);
    ff.calculateForce(9.2, 4.4);
    ff.calculateMass(9.3, 53.2);

    return 0;
}