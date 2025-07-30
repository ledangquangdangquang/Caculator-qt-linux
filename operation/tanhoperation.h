#ifndef TANHOPERATION_H
#define TANHOPERATION_H


#include "operation.h"

class TanhOperation : public Operation {
public:
    double execute(double a, double b = 0) const override;
};

#endif // TANHOPERATION_H
