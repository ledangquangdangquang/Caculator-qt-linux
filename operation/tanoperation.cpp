#include "tanoperation.h"
#include <stdexcept>
#include <complex>   // Dùng header này cho std::tan với số phức
#include <cmath>

Complex TanOperation::execute(const Complex &a, const Complex &b) const {
    return std::tan(a);
}
