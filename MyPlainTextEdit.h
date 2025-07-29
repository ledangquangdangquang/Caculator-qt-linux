#ifndef MYPLAINTEXTEDIT_H
#define MYPLAINTEXTEDIT_H

#include <QPlainTextEdit>
#include <QKeyEvent>

class MyPlainTextEdit : public QPlainTextEdit
{
    Q_OBJECT

public:
    using QPlainTextEdit::QPlainTextEdit;

signals:
    void returnPressed();

protected:
    void keyPressEvent(QKeyEvent *event) override;
};
#endif // MYPLAINTEXTEDIT_H
