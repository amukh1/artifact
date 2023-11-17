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
        return (x + step * f(x));
    };
    return g;
}