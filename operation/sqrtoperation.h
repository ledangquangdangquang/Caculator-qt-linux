#ifndef SQRTOPERATION_H
#define SQRTOPERATION_H

#include "operation.h"

class SqrtOperation : public Operation {
public:
    double execute(double a, double b = 0) const override;
};

#endif // SQRTOPERATION_H
