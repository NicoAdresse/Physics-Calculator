// include/inc_formulas.hpp

#pragma once

/*
Formulas:
    rho = m/V
    m = rho * V
    V = m / rho
*/

class DensityFormulas
{
public:
    void calculateMass(const double rho, const double v);
    void calculateVolume(const double rho, const double m);
    void calculateRho(const double m, const double v);
};