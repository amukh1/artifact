#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <map>
#include <functional>

namespace DE {
    /* Eulers Method: Takes function ptr, and step float, returns function ptr*/
    std::function<float(float)> eulersMethod(std::function<float(float)> f, float step);
}