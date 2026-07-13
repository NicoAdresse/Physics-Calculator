# Physics Calculator <->

Created by: NicoLuaJIT/NicoAdresse (Nico Erdmann) on 12.07.2026 (Sunday)

# About <->

This is a hobby project. It was meant for me to practice my handling of codebases and my Git.

Take everything here with a grain of salt.

Current Version: v1.0.3

Every class is wrapped in the "Physics" namespace.

# Structure <->

```
Physics_Calculator/
├── build/
│    ├── app
├── impl/
│   ├── helper/
│   │   └── helper_funcs.hpp
│   ├── impl_accerleration.cpp
│   ├── impl_avg_velocity.cpp
│   ├── impl_density.cpp
│   ├── impl_weight.cpp
│    ├── impl_kinetic_energy.cpp
│   └── impl_force.cpp
├── include/
│   ├── inc_accerleration.hpp
│   ├── inc_avg_velocity.hpp
│   ├── inc_density.hpp
│   ├── inc_weight.hpp
│    ├── inc_kinetic_energy.hpp
│   └── inc_force.hpp
├── src/
│   └── main.cpp
├── .gitignore
├── clean.sh
├── LICENSE
├── make.sh
├── README.md
└── TODO.md
```

# Expected Output <->

Compiling...

Success!

Creating build...

Success!

Moving app into build...

Success!

Executing application...

------------------------

10 (Density | Rho) * 5 (Volume | v) = 50 (Mass | m)

4.5 (Mass | m) / 5.5 (Volume | v) = 0.818182 (Density | Rho)

4 (Mass | m) / 9.4 (Density | Rho) = 0.425532 (Volume | v)

14.2 (Velocity | v) * 5 (Time | t) = 71 (Distance | d)

3.2 (Distance | d) / 6.4 (Velocity | v) = 0.5 (Time | t)

3.4 (Distance | d) / 5.9 (Time | t) = 0.576271 (Velocity | v)

Delta Velocity: 9

9 (Delta Velocity | delta(v)) / 2 (Time | t) = 4.5 (Acceleration | a)

25 (Acceleration | a) * 5 (Time | t) = 125 (Delta Velocity | delta(v))

5.2 (Force | f) / 9.5 (Mass | m) = 0.547368 (Acceleration | a)

9.2 (Mass | m) * 4.4 (Acceleration | a) = 40.48 (Force | f)

9.3 (Force | f) / 5.325 (Acceleration | a) = 1.74648 (Mass | m)

5.5 (Mass | m) * 9.2 (Gravity | g) = 50.6 (Weight)

0.5 * 2.5 (Mass | m) * 5.5^2 (Velocity | v)  = 37.8125

------------------------

Done!



# License <->

MIT License