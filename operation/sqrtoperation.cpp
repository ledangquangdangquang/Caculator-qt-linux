#include "sqrtoperation.h"
#include <cmath>
#include <stdexcept>

double SqrtOperation::execute(double a, double /*b*/) const {
    if (a < 0) throw std::domain_error("Square root of negative number");
    return std::sqrt(a);
}
