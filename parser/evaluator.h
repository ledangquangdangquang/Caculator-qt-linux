#ifndef EVALUATOR_H
#define EVALUATOR_H

#include <QString>
#include <QVector>
#include <memory>
#include "operation/operationfactory.h"

class Evaluator {
public:
    // Tính toán kết quả từ dãy token postfix
    // Trả về true nếu thành công, false nếu lỗi
    static bool evaluate(const QVector<QString>& postfixTokens, double& result);
private:
    static bool isUnaryFunction(const QString& token);
};

#endif // EVALUATOR_H
