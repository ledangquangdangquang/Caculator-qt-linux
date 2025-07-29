#include "cotoperation.h"
#include <cmath>
#include <stdexcept>

double CotOperation::execute(double a, double /*b*/) const {
    return 1/std::tan(a);
}

