#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <QObject>
#include <QRegularExpression>
#include <QKeyEvent>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList ops = {"0", "1", "2", "3", "4",
                       "5", "6", "7", "8", "9",
                       "sym9", "sym0", "mod", "pi",
                       "square_root", "x_squared", "percent", "dot",
                       "add", "sub", "mul", "div"};

    for (const QString& op : ops) {
        QString btnName = "key_" + op;
        QPushButton* btn = findChild<QPushButton*>(btnName);
        if (btn) {
            connect(btn, &QPushButton::clicked, this, &MainWindow::on_genericButton_clicked);
        } else {
            qDebug() << "Button not found:" << btnName;
        }
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
// Enter = Button "="
// Fillter no a number

// Event when buttoon "=" cliked
void MainWindow::on_key_equals_clicked()
{
    QString expr = ui->plainTextEdit->toPlainText();
    qDebug() << "Entered:" << expr;
    QRegularExpression re("[a-zA-Z]");
    if (re.match(expr).hasMatch()) {
    ui->plainTextEdit->insertPlainText("\nERORR: not a number");
        return;
    }

}
// Print name of object in plain text when each button cliked
void MainWindow::on_genericButton_clicked()
{
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    if (btn) {
        ui->plainTextEdit->insertPlainText(btn->text());
    }
}
// Clear button clicked
void MainWindow::on_key_clear_clicked()
{
    ui->plainTextEdit->clear();
}
