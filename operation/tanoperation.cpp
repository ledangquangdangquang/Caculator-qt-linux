#include "tanoperation.h"
#include <stdexcept>
#include <cmath>

double TanOperation::execute(double a, double /*b*/) const {
    return std::tan(a);
}
