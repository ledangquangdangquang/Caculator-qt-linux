#ifndef LNOPERATION_H
#define LNOPERATION_H

#include "operation.h"
class LnOperation : public Operation
{
public:
    double execute(double a, double b = 0) const override;
};

#endif // LNOPERATION_H
