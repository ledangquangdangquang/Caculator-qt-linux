#include "evaluator.h"
#include <QStack>
#include <QDebug>
#include <cmath> // cho sqrt

bool Evaluator::evaluate(const QVector<QString>& postfixTokens, double& result) {
    QStack<double> stack;

    for (const QString& token : postfixTokens) {
        bool isNumber;
        double val = token.toDouble(&isNumber);

        if (isNumber) {
            stack.push(val);
        } else if (token == "sqrt") {
            if (stack.isEmpty()) {
                qWarning() << "Error: stack empty for sqrt";
                return false;
            }
            double a = stack.pop();
            if (a < 0) {
                qWarning() << "Error: sqrt negative number";
                return false;
            }
            stack.push(std::sqrt(a));
        } else {
            // Toán tử nhị phân: + - * /
            if (stack.size() < 2) {
                qWarning() << "Error: stack too small for operator" << token;
                return false;
            }
            double b = stack.pop();
            double a = stack.pop();

            auto operation = OperationFactory::getOperation(token[0]);
            if (!operation) {
                qWarning() << "Error: unknown operator" << token;
                return false;
            }

            try {
                double res = operation->execute(a, b);
                stack.push(res);
            } catch (const std::exception& e) {
                qWarning() << "Exception:" << e.what();
                return false;
            }
        }
    }

    if (stack.size() != 1) {
        qWarning() << "Error: stack size after evaluation not 1";
        return false;
    }

    result = stack.pop();
    return true;
}
