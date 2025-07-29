#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <QObject>
#include <QRegularExpression>
#include <QShortcut>
#include "MyPlainTextEdit.h"

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
    // Handle Enter key, Enter numpad key, Equal key (done)
    // connect signal returnPressed() from MyPlainTextEdit
    connect(ui->plainTextEdit, &MyPlainTextEdit::returnPressed,
            this, &MainWindow::on_key_equals_clicked);
    QShortcut* enterShortcut = new QShortcut(QKeySequence(Qt::Key_Return), this); // real enter
    connect(enterShortcut, &QShortcut::activated, this, &MainWindow::on_key_equals_clicked);
    QShortcut* numpadEnterShortcut = new QShortcut(QKeySequence(Qt::Key_Enter), this); // numpad enter
    connect(numpadEnterShortcut, &QShortcut::activated, this, &MainWindow::on_key_equals_clicked);
    QShortcut* equalShortcut = new QShortcut(QKeySequence(Qt::Key_Equal), this); // equal key
    connect(equalShortcut, &QShortcut::activated, this, &MainWindow::on_key_equals_clicked);

    // Comma and dot handle (done)
    connect(ui->plainTextEdit, &MyPlainTextEdit::dotPressed,
            this, &MainWindow::dotHandle);
    QShortcut* dotShortcut = new QShortcut(QKeySequence(Qt::Key_Period), this); // real enter
    connect(dotShortcut, &QShortcut::activated, this, &MainWindow::dotHandle);
    QShortcut* commaShortcut = new QShortcut(QKeySequence(Qt::Key_Comma), this); // real enter
    connect(commaShortcut, &QShortcut::activated, this, &MainWindow::dotHandle);
}

MainWindow::~MainWindow()
{
    delete ui;
}
// Enter = Button "="
// Fillter no a number (done)
// Event when buttoon "=" cliked (NOT DONE)
void MainWindow::on_key_equals_clicked()
{
    // Check spell (done)
    QString expr = ui->plainTextEdit->toPlainText();
    qDebug() << "Entered:" << expr;

    // 1. Regex ký tự hợp lệ
    static const QRegularExpression re(R"([^0-9+\-*/%^().,\s𝛑√a-zA-Z×÷])");
    if (re.match(expr).hasMatch()) {
        ui->plainTextEdit->appendPlainText("ERROR: contains invalid characters");
        return;
    }

    // 2. Chỉ cho phép từ 'mod'
    static const QRegularExpression wordRe(R"(\b(?!mod\b)[a-zA-Z]+\b)");
    if (wordRe.match(expr).hasMatch()) {
        ui->plainTextEdit->appendPlainText("ERROR: unknown word (only 'mod' allowed)");
        return;
    }

    // 3. Kiểm tra có ít nhất một số
    static const QRegularExpression digitRe(R"(\d)");
    if (!digitRe.match(expr).hasMatch()) {
        ui->plainTextEdit->appendPlainText("ERROR: expression must contain number(s)");
        return;
    }

    // 4. Kiểm tra ngoặc mở/đóng phải khớp nhau
    int open = expr.count('(');
    int close = expr.count(')');
    if (open != close) {
        ui->plainTextEdit->appendPlainText("ERROR: unmatched parentheses");
        return;
    }

    ui->plainTextEdit->setFocus();
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
    } else if (objName == "key_dot") {
        dotHandle();
    } else {
        ui->plainTextEdit->insertPlainText(btnText);
    }
    ui->plainTextEdit->setFocus();
}
// Clear button clicked (done)
void MainWindow::on_key_clear_clicked()
{
    ui->plainTextEdit->clear();
    ui->plainTextEdit->setFocus();

}

void MainWindow::dotHandle()
{
    ui->plainTextEdit->insertPlainText(".");
}

