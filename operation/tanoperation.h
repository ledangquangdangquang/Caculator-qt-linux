#ifndef TANOPERATION_H
#define TANOPERATION_H

#include "operation.h"

class TanOperation : public Operation
{
public:
    double execute(double a, double b = 0) const override;
};

#endif // TANOPERATION_H
