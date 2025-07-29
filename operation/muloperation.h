// muloperation.h
#ifndef MULOPERATION_H
#define MULOPERATION_H

#include "operation.h"

class MulOperation : public Operation {
public:
    double execute(double a, double b) const override;
};

#endif // MULOPERATION_H

