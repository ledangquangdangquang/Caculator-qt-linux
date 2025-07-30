#include "coshoperation.h"
#include <cmath>
#include <stdexcept>

double CoshOperation::execute(double a, double /*b*/) const {
    return std::cosh(a);
}
