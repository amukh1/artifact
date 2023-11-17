#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <map>
#include <functional>

#include "Diffeq.h"

std::function<float(float)> DE::eulersMethod(std::function<float(float)> f, float step) {
    // define closure
    std::function<float(float)> g = [f, step](float x) -> float {
        float retval = 0;
        for(float i = 0; i < x; i += step) {
            retval += f(i) * step;
        }
        return retval;
    };
    return g;
}