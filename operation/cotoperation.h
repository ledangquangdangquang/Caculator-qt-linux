#ifndef COTOPERATION_H
#define COTOPERATION_H

#include "operation.h"

class CotOperation : public Operation
{
public:
    double execute(double a, double b = 0) const override;
};

#endif // COTOPERATION_H
