#include "tokenizer.h"
#include <QRegularExpression>

QVector<QString> Tokenizer::tokenize(const QString& expr) {
    QVector<QString> tokens;
    QString current;
    for (int i = 0; i < expr.length(); ++i) {
        QChar ch = expr[i];
        if (ch.isDigit() || ch == '.') {
            current += ch;
        } else {
            if (!current.isEmpty()) {
                tokens.append(current);
                current.clear();
            }
            if (ch.isSpace()) continue;
            if (ch.isLetter()) {
                QString func;
                while (i < expr.length() && expr[i].isLetter()) {
                    func += expr[i++];
                }
                --i;
                tokens.append(func); // ex: sqrt
            } else {
                tokens.append(QString(ch));
            }
        }
    }
    if (!current.isEmpty()) {
        tokens.append(current);
    }
    return tokens;
}
