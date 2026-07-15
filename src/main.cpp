// src/main.cpp

#include <iostream>

#include "Mechanics/inc_density.hpp"
#include "Mechanics/inc_avg_velocity.hpp"
#include "Mechanics/inc_acceleration.hpp"
#include "Mechanics/inc_force.hpp"
#include "Mechanics/inc_weight.hpp"
#include "Mechanics/inc_work.hpp"
#include "Mechanics/inc_power.hpp"
#include "Mechanics/inc_momentum.hpp"
#include "Mechanics/inc_pressure.hpp"
#include "Mechanics/inc_hookes_law.hpp"
#include "Mechanics/inc_torque.hpp"

#include "Energy/inc_kinetic_energy.hpp"
#include "Energy/inc_potential_energy.hpp"
#include "Energy/inc_heat_energy.hpp"
#include "Energy/inc_efficiency.hpp"


int main()
{
    Physics::Mechanics::Density df;
    Physics::Mechanics::AvgVelocity avgvf;
    Physics::Mechanics::Acceleration accf;
    Physics::Mechanics::Force ff;
    Physics::Mechanics::Weight wf;
    Physics::Mechanics::Work wof;
    Physics::Mechanics::Power pf;
    Physics::Mechanics::Momentum momf;
    Physics::Mechanics::Pressure pref;
    Physics::Mechanics::HookesLaw hlf;
    Physics::Mechanics::Torque tqf;

    Physics::Energy::KineticEnergy kef;
    Physics::Energy::PotentialEnergy pef;
    Physics::Energy::HeatEnergy hef;
    Physics::Energy::Efficiency eff;

    std::cout << "=== Mechanics ===\n\n";

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

    wof.calculateWork(25.2, 1.5);

    pf.calculatePower(1.5, 4.2);

    momf.calculateMomentum(15.2, 5.2);

    pref.calculatePressure(32.6, 952.1);

    hlf.calculateSpringForce(4.2, 89.99);
    
    tqf.calculateTorque(5.2, 86.2);

    std::cout << "\n=== Energy ===\n";

    kef.calculateKineticEnergy(2.5, 5.5);

    pef.calculatePotentialEnergy(10.4, 85.1, 1.4);

    hef.calculateHeatEnergy(2.5, 3.5, 10.0, 15.0);

    eff.calculateEfficiencyDecimal(2.4, 10.4);
    eff.calculateEfficiencyPercentage(2.4, 10.4);
    
    return 0;
}