#include "logoperation.h"
#include <cmath>
#include <stdexcept>

double LogOperation::execute(double a, double /*b*/) const {
    return std::log10(a);
}
