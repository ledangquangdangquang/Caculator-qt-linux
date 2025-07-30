#ifndef SINHOPERATION_H
#define SINHOPERATION_H

#include "operation.h"

class SinhOperation : public Operation {
public:
    double execute(double a, double b = 0) const override;
};

#endif // SINHOPERATION_H
