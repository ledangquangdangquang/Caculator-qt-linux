#include "divoperation.h"

double DivOperation::execute(double a, double b) const {  // <-- KHÔNG dùng override ở đây
    if (b == 0)
        throw std::runtime_error("Divide by zero");
    return a / b;
}
