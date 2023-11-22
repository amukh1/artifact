#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <map>
#include <functional>
#include <cmath>

#include "./Diffeq/Diffeq.h"

/*
    falling object: y' = m/g * t, y = m/2g * t^2
*/

int main() {
    std::function<float(float)> f = [](float x) -> float {
        return std::sin(x);
    };
    std::function<float(float)> g = DE::eulersMethod(f, 0.001);

    std::cout << f(3.14159) << std::endl; 
    std::cout << g(3.14159) << std::endl;
    return 0;
}