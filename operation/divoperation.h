// divoperation.h
#ifndef DIVOPERATION_H
#define DIVOPERATION_H

#include "operation.h"
#include <stdexcept>

class DivOperation : public Operation {
public:
    double execute(double a, double b) const override;
};

#endif // DIVOPERATION_H

