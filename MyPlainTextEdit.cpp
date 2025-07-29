#include "MyPlainTextEdit.h"

void MyPlainTextEdit::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        emit returnPressed();
    } else {
        QPlainTextEdit::keyPressEvent(event);
    }
}
