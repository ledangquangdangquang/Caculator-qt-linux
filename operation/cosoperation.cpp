#include "cosoperation.h"

#include <cmath>
#include <stdexcept>

double CosOperation::execute(double a, double /*b*/) const {
    return std::cos(a);
}
