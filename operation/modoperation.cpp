#include "modoperation.h"
#include <cmath>
#include <stdexcept>

double ModOperation::execute(double a, double b) const {
    if (b == 0) throw std::domain_error("Modulo by zero");
    return std::fmod(a, b);
}
