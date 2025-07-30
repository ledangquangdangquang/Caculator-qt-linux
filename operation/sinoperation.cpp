#include "sinoperation.h"

#include <cmath>
#include <stdexcept>

Complex SinOperation::execute(const Complex &a, const Complex &b) const {
    return std::sin(a);
}
