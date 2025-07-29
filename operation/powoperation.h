#ifndef POWOPERATION_H
#define POWOPERATION_H

#include "operation.h"

class PowOperation : public Operation
{
public:
    double execute(double a, double b) const override;
};

#endif // POWOPERATION_H
