#include "sinoperation.h"
#include <cmath>
#include <stdexcept>

double SinOperation::execute(double a, double /*b*/) const {
    return std::sin(a);
}
