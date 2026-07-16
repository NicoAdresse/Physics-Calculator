// impl/Waves/impl_wave_speed.cpp

#include "Waves/inc_wave_speed.hpp"
#include "../Helper/helper_funcs.hpp"

double Physics::Waves::WaveSpeed::calculateWaveSpeed(
    const double frequency,
    const double wavelength,
    const bool willDisplayResult
)
{
    const double result{frequency * wavelength};

    if (willDisplayResult) {
        displayResult(
            "Wave Speed | wap",
            frequency,
            wavelength,
            result,
            "Frequency | fre",
            "Wavelength | wal",
            '*'
        );
    }

    return result;
}