#include "tanhoperation.h"
#include <cmath>
#include <stdexcept>

double TanhOperation::execute(double a, double /*b*/) const {
    return std::tanh(a);
}
