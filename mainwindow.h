#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_key_equals_clicked();
//    void on_genericButton_clicked();   // slot chung cho các nút 0-9
    void handleKeyClicked();
    void on_key_clear_clicked();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
