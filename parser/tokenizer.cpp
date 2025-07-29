#include "tokenizer.h"
#include <QRegularExpression>

QVector<QString> Tokenizer::tokenize(const QString& expr) {
    QVector<QString> tokens;
    QString current;

    int len = expr.length();
    int i = 0;
    while (i < len) {
        QChar ch = expr[i];
        if (ch.isDigit() || ch == '.') {
            // Lấy số, bao gồm dấu chấm thập phân
            current.clear();
            while (i < len && (expr[i].isDigit() || expr[i] == '.')) {
                current += expr[i];
                ++i;
            }
            tokens.append(current);
            continue;  // vì i đã tăng rồi, tiếp tục vòng while
        }
        else if (ch.isSpace()) {
            ++i; // bỏ qua khoảng trắng
        }
        else if (ch.isLetter()) {
            // Lấy toàn bộ chuỗi chữ liên tiếp (ví dụ "mod", "sqrt")
            current.clear();
            while (i < len && expr[i].isLetter()) {
                current += expr[i];
                ++i;
            }
            tokens.append(current);
        }
        else {
            // Ký tự đặc biệt như + - * / ( ) ...
            tokens.append(QString(ch));
            ++i;
        }
    }

    return tokens;
}
