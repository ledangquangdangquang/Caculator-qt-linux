#include "cosoperation.h"

#include <cmath>
#include <stdexcept>

Complex CosOperation::execute(const Complex &a, const Complex &b) const {
    return std::cos(a);
}
