#include "cotoperation.h"
#include <cmath>
#include <stdexcept>

Complex CotOperation::execute(const Complex &a, const Complex &b) const {
    return Complex(1.0)/std::tan(a);
}

