#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <map>
#include <functional>

#include "./Diffeq/Diffeq.h"

int main() {
    std::function<float(float)> f = [](float x) -> float {
        return x;
    };
    std::function<float(float)> g = DE::eulersMethod(f, 0.1);

    std::cout << f(3) << std::endl; 
    std::cout << g(25) << std::endl;
    return 0;
}