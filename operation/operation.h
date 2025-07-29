// operation.h
#ifndef OPERATION_H
#define OPERATION_H

class Operation {
public:
    virtual ~Operation() {}
    virtual double execute(double a, double b) const = 0;
};

#endif // OPERATION_H

