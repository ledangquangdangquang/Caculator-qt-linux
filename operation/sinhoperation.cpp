#include "sinhoperation.h"
#include <cmath>
#include <stdexcept>

double SinhOperation::execute(double a, double /*b*/) const {
    return std::sinh(a);
}
