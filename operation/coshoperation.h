#ifndef COSHOPERATION_H
#define COSHOPERATION_H


#include "operation.h"

class CoshOperation : public Operation {
public:
    double execute(double a, double b = 0) const override;
};

#endif // COSHOPERATION_H
