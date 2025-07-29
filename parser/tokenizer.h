#ifndef TOKENIZER_H
#define TOKENIZER_H

#include <QString>
#include <QVector>

class Tokenizer {
public:
    static QVector<QString> tokenize(const QString& expr);
};

#endif // TOKENIZER_H
