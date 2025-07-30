#include "evaluator.h"
#include <QStack>
#include <QDebug>
#include <QSet>
#include <cmath>
Complex  Evaluator::roundComplex(const Complex& z, int decimals) {
    double scale = std::pow(10.0, decimals);
    return Complex(
        std::round(z.real() * scale) / scale,
        std::round(z.imag() * scale) / scale
        );
}

bool Evaluator::isUnaryFunction(const QString& token) {
    static const QSet<QString> unaryFunctions = {
        "sqrt", "sin", "cos", "tan", "cot", "log", "ln", "abs",
        "sinh", "cosh", "tanh"
    };
    return unaryFunctions.contains(token);
}
bool Evaluator::evaluate(const QVector<QString>& postfixTokens, Complex& result) {
    QStack<Complex> stack;
    constexpr Complex DEG2RAD = M_PI / 180.0;
    int decimals = 5; // Lam tron den 5 chu so thap phan
//    Complex scale = std::pow(10, decimals);
    for (const QString& token : postfixTokens) {
        bool isNumber;
        double realVal= token.toDouble(&isNumber);

        if (isNumber) {
            stack.push(Complex(realVal, 0));
        } else if (token == "i") {
            stack.push(Complex(0, 1));
        }
        else if (isUnaryFunction(token)) {
            if (stack.isEmpty()) {
                qWarning() << "Error: empty stack for function" << token;
                return false;
            }

            Complex a = stack.pop();
            Complex res;

            if (token == "sqrt") {
                if (a.imag() != 0 || a.real() < 0) {
                    qWarning() << "Error: sqrt of negative or complex number";
                    return false;
                }
                res = std::sqrt(a);
            } else if (token == "sin") {
                res = roundComplex(std::sin(a * DEG2RAD), decimals);
            } else if (token == "cos") {
                res = roundComplex(std::cos(a * DEG2RAD), decimals);
            } else if (token == "tan") {
                res = roundComplex(std::tan(a * DEG2RAD), decimals);
            } else if (token == "sinh") {
                res = roundComplex(std::sinh(a), decimals);
            } else if (token == "cosh") {
                res = roundComplex(std::cosh(a), decimals);
            } else if (token == "tanh") {
                res = roundComplex(std::tanh(a), decimals);
            } else if (token == "cot") {
                Complex tanVal = std::tan(a * DEG2RAD);
                if (std::abs(tanVal) < 1e-12) {  // tránh chia cho 0
                    qWarning() << "Error: cotangent undefined (tan ≈ 0)";
                    return false;
                }
                res = roundComplex(Complex(1.0) / tanVal, decimals);
            } else if (token == "log") {
                if (a.real() <= 0 && std::abs(a.imag()) < 1e-12) {
                    qWarning() << "Error: log of non-positive real number";
                    return false;
                }
                res = roundComplex(std::log10(a), decimals);
            } else if (token == "ln") {
                if (a.real() <= 0 && std::abs(a.imag()) < 1e-12) {
                    qWarning() << "Error: ln of non-positive real number";
                    return false;
                }
                res = roundComplex(std::log(a), decimals);
            } else if (token == "abs") {
                res = Complex(std::abs(a), 0);  // Trị tuyệt đối là số thực
            }
                    else {
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

            Complex b = stack.pop();
            Complex a = stack.pop();

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

