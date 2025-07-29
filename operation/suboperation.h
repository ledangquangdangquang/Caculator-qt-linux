// suboperation.h
#ifndef SUBOPERATION_H
#define SUBOPERATION_H

#include "operation.h"

class SubOperation : public Operation {
public:
    double execute(double a, double b) const override;
};

#endif // SUBOPERATION_H

