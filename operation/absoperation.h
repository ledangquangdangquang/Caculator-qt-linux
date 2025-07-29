#ifndef ABSOPERATION_H
#define ABSOPERATION_H

#include "operation.h"

class AbsOperation : public Operation
{
public:
    double execute(double a, double b = 0) const override;
};

#endif // ABSOPERATION_H
