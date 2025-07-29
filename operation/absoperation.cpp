#include "absoperation.h"

#include <cmath>
#include <stdexcept>

double AbsOperation::execute(double a, double /*b*/) const {
    return std::fabs(a);
}
