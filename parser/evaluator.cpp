#include "evaluator.h"
#include <QStack>
#include <QDebug>
#include <QSet>
#include <cmath>

bool Evaluator::isUnaryFunction(const QString& token) {
    static const QSet<QString> unaryFunctions = {
        "sqrt", "sin", "cos", "tan", "cot", "log", "ln", "abs",
        "sinh", "cosh", "tanh"
    };
    return unaryFunctions.contains(token);
}
bool Evaluator::evaluate(const QVector<QString>& postfixTokens, double& result) {
    QStack<double> stack;
    constexpr double DEG2RAD = M_PI / 180.0;
    int decimals = 5; // Lam tron den 5 chu so thap phan
    double scale = std::pow(10, decimals);
    for (const QString& token : postfixTokens) {
        bool isNumber;
        double val = token.toDouble(&isNumber);

        if (isNumber) {
            stack.push(val);
        }
        else if (isUnaryFunction(token)) {
            if (stack.isEmpty()) {
                qWarning() << "Error: empty stack for function" << token;
                return false;
            }

            double a = stack.pop();
            double res;

            if (token == "sqrt") {
                if (a < 0) {
                    qWarning() << "Error: sqrt of negative number";
                    return false;
                }
                res = std::sqrt(a);
            } else if (token == "sin") {
                res = std::round(std::sin(a * DEG2RAD) * scale) / scale;
            } else if (token == "cos") {
                res = std::round(std::cos(a * DEG2RAD) * scale) / scale;
            } else if (token == "tan") {
                res = std::round(std::tan(a * DEG2RAD) * scale) / scale;

            } else if (token == "sinh") {
                res = std::round(std::sinh(a) * scale) / scale;
            } else if (token == "cosh") {
                res = std::round(std::cosh(a) * scale) / scale;
            } else if (token == "tanh") {
                res = std::round(std::tanh(a) * scale) / scale;

            } else if (token == "cot") {
                double tanVal = std::tan(a * DEG2RAD);
                if (tanVal == 0) {
                    qWarning() << "Error: cotangent undefined (tan = 0)";
                    return false;
                }
                res = std::round(1.0 / tanVal * scale) / scale;
            } else if (token == "log") {
                if (a <= 0) {
                    qWarning() << "Error: log of non-positive number";
                    return false;
                }
                res = std::round(std::log10(a) * scale) / scale;
            } else if (token == "ln") {
                if (a <= 0) {
                    qWarning() << "Error: ln of non-positive number";
                    return false;
                }
                res = std::round(std::log(a) * scale) / scale;
            } else if (token == "abs") {
                res = std::fabs(a);
            } else {
                qWarning() << "Error: unknown function" << token;
                return false;
            }

            stack.push(res);
        }
        else {
            // Toán tử nhị phân: + - * /
            if (stack.size() < 2) {
                qWarning() << "Error: stack too small for operator" << token;
                return false;
            }

            double b = stack.pop();
            double a = stack.pop();

            auto operation = OperationFactory::getOperation(token);
            if (!operation) {
                qWarning() << "Error: unknown operator" << token;
                return false;
            }

            try {
                stack.push(operation->execute(a, b));
            } catch (const std::exception& e) {
                qWarning() << "Exception during operation:" << e.what();
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

