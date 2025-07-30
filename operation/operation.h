// operation.h
#ifndef OPERATION_H
#define OPERATION_H

#include<complex>
using Complex = std::complex<double>;

class Operation {
public:
    virtual ~Operation() {}
//    virtual double execute(double a, double b) const = 0;
    virtual Complex execute(const Complex &a, const Complex &b) const = 0;
};

#endif // OPERATION_H

