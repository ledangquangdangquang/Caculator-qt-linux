#ifndef SINOPERATION_H
#define SINOPERATION_H

#include "operation.h"

class SinOperation : public Operation {
public:
    double execute(double a, double b = 0) const override;
};

#endif //	SINOPERATION_H
