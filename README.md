# Physics Calculator <->

Created by: NicoLuaJIT/NicoAdresse (Nico Erdmann) on 12.07.2026 (Sunday)

# About <->

This is a hobby project. It was meant for me to practice my handling of codebases and my Git.

Take everything here with a grain of salt.

Current Version: v1.0.5

Every class is wrapped in the namespace of their domain.

Every function will have a return value, usually `double`, as it is the datatype of `result`.

# Structure <->

```
Physics_Calculator/
├── build/
│   └── app
├── impl/
│   ├── Energy/
│   │   ├── impl_efficiency.cpp
│   │   ├── impl_heat_energy.cpp
│   │   ├── impl_kinetic_energy.cpp
│   │   └── impl_potential_energy.cpp
│   ├── Helper/
│   │   └── helper_funcs.hpp
│   └── Mechanics/
│       ├── impl_acceleration.cpp
│       ├── impl_avg_velocity.cpp
│       ├── impl_density.cpp
│       ├── impl_force.cpp
│       ├── impl_hookes_law.cpp
│       ├── impl_momentum.cpp
│       ├── impl_power.cpp
│       ├── impl_pressure.cpp
│       ├── impl_torque.cpp
│       ├── impl_weight.cpp
│       └── impl_work.cpp
├── include/
│   ├── Energy/
│   │   ├── inc_efficiency.hpp
│   │   ├── inc_heat_energy.hpp
│   │   ├── inc_kinetic_energy.hpp
│   │   └── inc_potential_energy.hpp
│   └── Mechanics/
│       ├── inc_acceleration.hpp
│       ├── inc_avg_velocity.hpp
│       ├── inc_density.hpp
│       ├── inc_force.hpp
│       ├── inc_hookes_law.hpp
│       ├── inc_momentum.hpp
│       ├── inc_power.hpp
│       ├── inc_pressure.hpp
│       ├── inc_torque.hpp
│       ├── inc_weight.hpp
│       └── inc_work.hpp
├── src/
│   └── main.cpp
├── .gitignore
├── CMakeLists.txt
├── LICENSE
├── README.md
└── TODO.md
```

# How To Contribute <->

### Before you start

Hi, thanks for contributing.

Take a look at `TODO.md` to see what's already planned; it helps avoid duplicate work.

Small fixes (e.g. typos, obvious bugs), start a pull request.

### Project Structure

The codebase is structured by namespaces of their specific domain (e.g. `Energy`, `Mechanics`).

Like this:

```
include/<Domain>/inc_<name>.hpp     # Declaration
impl/<Domain>/impl_<name>.cpp       # Implementation
```

If you're adding a new formula that fits an existing domain, place it there.


# License <->

MIT License
