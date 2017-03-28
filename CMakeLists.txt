cmake_minimum_required(VERSION 2.6)
project(cts)
file(GLOB SOURCES
        lib/*.h
        src/core/*.h
        src/core/*.cpp
        src/core/integrator/*.h
        src/core/integrator/*.cpp
        src/bio/matsuoka_et_al_2004/*.h
        src/bio/matsuoka_et_al_2004/*.cpp
        )
add_executable(run_cts run.cpp)