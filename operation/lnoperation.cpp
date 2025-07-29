#include "lnoperation.h"
#include <cmath>
#include <stdexcept>

double LnOperation::execute(double a, double /*b*/) const {
    return std::log(a);
}
