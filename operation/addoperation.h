#ifndef ADDOPERATION_H
#define ADDOPERATION_H

#include "operation.h"

class AddOperation : public Operation {
public:
    double execute(double a, double b) const override;  // chỉ khai báo
};

#endif

