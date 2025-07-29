#include "shuntingyard.h"
#include <QStack>
#include <QDebug>

int ShuntingYard::precedence(const QString& op) {
    if (op == "+" || op == "-") return 1;
    if (op == "*" || op == "/" || op == "mod" || op == "^") return 2;
    // Nếu bạn muốn thêm operator khác, nâng cấp ở đây
    return 0;
}

bool ShuntingYard::isOperator(const QString& token) {
    return token == "+" || token == "-" || token == "*" || token == "/"  || token == "mod"
        || token == "^";
}

bool ShuntingYard::isFunction(const QString& token) {
    // Ví dụ: chỉ có sqrt
    return token == "sqrt" || token == "sin";
}

QVector<QString> ShuntingYard::toPostfix(const QVector<QString>& tokens) {
    QVector<QString> outputQueue;
    QStack<QString> operatorStack;

    for (const QString& token : tokens) {
        if (token.isEmpty())
            continue;

        // Nếu token là số
        bool isNumber;
        token.toDouble(&isNumber);
        if (isNumber) {
            outputQueue.append(token);
        }
        // Nếu là hàm (sqrt)
        else if (isFunction(token)) {
            operatorStack.push(token);
        }
        // Nếu là toán tử
        else if (isOperator(token)) {
            while (!operatorStack.isEmpty()) {
                QString top = operatorStack.top();
                if ((isOperator(top) && precedence(top) >= precedence(token)) || isFunction(top)) {
                    outputQueue.append(operatorStack.pop());
                } else {
                    break;
                }
            }
            operatorStack.push(token);
        }
        // Nếu là dấu "("
        else if (token == "(") {
            operatorStack.push(token);
        }
        // Nếu là dấu ")"
        else if (token == ")") {
            while (!operatorStack.isEmpty() && operatorStack.top() != "(") {
                outputQueue.append(operatorStack.pop());
            }
            if (!operatorStack.isEmpty() && operatorStack.top() == "(") {
                operatorStack.pop();
            }
            // Nếu có hàm trên stack thì lấy ra
            if (!operatorStack.isEmpty() && isFunction(operatorStack.top())) {
                outputQueue.append(operatorStack.pop());
            }
        }
        // Các token khác coi như lỗi, bạn có thể thêm kiểm tra nếu muốn
    }

    // Đẩy hết toán tử còn lại vào output
    while (!operatorStack.isEmpty()) {
        outputQueue.append(operatorStack.pop());
    }

    return outputQueue;
}
