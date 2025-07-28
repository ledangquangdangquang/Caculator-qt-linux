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

void MainWindow::on_key_equals_clicked()
{
    QString expr = ui->plainTextEdit->toPlainText();
    qDebug() << "Entered:" << expr;

}

void MainWindow::on_genericButton_clicked()
{
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    if (btn) {
        ui->plainTextEdit->insertPlainText(btn->text());
    }
}

void MainWindow::on_key_clear_clicked()
{
    ui->plainTextEdit->clear();
}
