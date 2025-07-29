#ifndef LOGOPERATION_H
#define LOGOPERATION_H


#include "operation.h"
class LogOperation : public Operation
{
public:
    double execute(double a, double b = 0) const override;
};

#endif // LOGOPERATION_H
