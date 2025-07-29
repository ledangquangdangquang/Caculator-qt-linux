#ifndef COSOPERATION_H
#define COSOPERATION_H

#include "operation.h"

class CosOperation : public Operation
{
public:
    double execute(double a, double b = 0) const override;
};

#endif // COSOPERATION_H
