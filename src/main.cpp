// src/main.cpp

#include "Mechanics/inc_density.hpp"
#include "Mechanics/inc_avg_velocity.hpp"
#include "Mechanics/inc_acceleration.hpp"
#include "Mechanics/inc_force.hpp"
#include "Mechanics/inc_weight.hpp"
#include "Mechanics/inc_work.hpp"
#include "Mechanics/inc_power.hpp"
#include "Mechanics/inc_momentum.hpp"

#include "Energy/inc_kinetic_energy.hpp"
#include "Energy/inc_potential_energy.hpp"


int main()
{
    Physics::Mechanics::DensityFormulas df;
    Physics::Mechanics::AvgVelocityFormulas avgvf;
    Physics::Mechanics::AccelerationFormulas accf;
    Physics::Mechanics::ForceFormulas ff;
    Physics::Mechanics::WeightFormulas wf;
    Physics::Mechanics::WorkFormulas wof;
    Physics::Mechanics::PowerFormulas pf;
    Physics::Mechanics::MomentumFormulas momf;

    Physics::Energy::KineticEnergyFormulas kef;
    Physics::Energy::PotentialEnergyFormulas pef;

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
    ff.calculateMass(9.3, 5.325);

    wf.calculateWeight(5.5, 9.2);

    kef.calculateKineticEnergy(2.5, 5.5);

    pef.calculatePotentialEnergy(10.4, 85.1, 1.4);

    wof.calculateWork(25.2, 1.5);

    pf.calculatePower(1.5, 4.2);

    momf.calculateMomentum(15.2, 5.2);
    
    return 0;
}