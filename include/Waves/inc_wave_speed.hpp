// include/Waves/inc_wave_speed.hpp

#pragma once

/*
Formulas (Wave Speed):
    wave speed = frequency * wavelength (wap = fre * wal)
*/

namespace Physics
{
    namespace Waves
    {
        class WaveSpeed
        {
            public:
                double calculateWaveSpeed(
                    const double frequency,
                    const double wavelength,
                    const bool willDisplayResult
                );
        };
    }
}