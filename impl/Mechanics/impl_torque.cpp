// impl/Mechanics/impl_torque.cpp

#include "Mechanics/inc_torque.hpp"
#include "../Helper/helper_funcs.hpp"

void Physics::Mechanics::TorqueFormulas::calculateTorque(const double force, const double distance)
{
    const double result{force * distance};

    displayResult(
        "Torque | tq",
        force,
        distance,
        result,
        "Force | f",
        "Distance | d",
        '*'
    );
}