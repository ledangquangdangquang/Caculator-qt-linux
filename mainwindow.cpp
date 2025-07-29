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
    // Set color ui
    ui->key_clear->setStyleSheet("background-color: red; color: white;");
    ui->key_equals->setStyleSheet("background-color: green; color: white;");
    // Key input handle (done)
    QStringList ops = {"0", "1", "2", "3", "4",
                       "5", "6", "7", "8", "9",
                       "sym9", "sym0", "mod", "pi",
                       "square_root", "x_squared", "percent", "dot",
                       "add", "sub", "mul", "div"};

    for (const QString& op : ops) {
        QString btnName = "key_" + op;
        QPushButton* btn = findChild<QPushButton*>(btnName);
        connect(btn, &QPushButton::clicked, this, &MainWindow::handleKeyClicked);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
// Enter = Button "="

// Fillter no a number (done)
// Event when buttoon "=" cliked (done)
void MainWindow::on_key_equals_clicked()
{
    QString expr = ui->plainTextEdit->toPlainText();
    qDebug() << "Entered:" << expr;
    static const QRegularExpression re("[a-zA-Z]");
    if (re.match(expr).hasMatch()) {
    ui->plainTextEdit->insertPlainText("\nERORR: not a number");
        return;
    }

}
// Print name of object in plain text when each button cliked (done)
void MainWindow::handleKeyClicked()
{
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    if (!btn) return;

    QString btnText = btn->text();
    QString objName = btn->objectName(); // Lấy objectName để xử lý các trường hợp đặc biệt

    if (objName == "key_square_root") {
        ui->plainTextEdit->insertPlainText("√("); // Thêm luôn dấu mở ngoặc
    } else if (objName == "key_x_squared") {
        ui->plainTextEdit->insertPlainText("^2"); // Dùng ký hiệu mũ
    } else {
        ui->plainTextEdit->insertPlainText(btnText);
    }
}
// Clear button clicked (done)
void MainWindow::on_key_clear_clicked()
{
    ui->plainTextEdit->clear();
}
