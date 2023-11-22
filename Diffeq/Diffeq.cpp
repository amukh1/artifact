#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <map>
#include <functional>

#include "Diffeq.h"

std::function<float(float)> DE::eulersMethod(std::function<float(float)> f, float dt) {
    // define closure
    std::function<float(float)> g = [f, dt](float x) -> float {
        float retval = 0;
        for(float i = 0; i < x; i += dt) {
            retval += f(i) * dt;
        }
        return retval;
    };
    return g;
}