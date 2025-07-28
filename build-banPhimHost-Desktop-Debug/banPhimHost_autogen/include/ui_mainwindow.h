/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *plainTextEdit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *key_clear;
    QPushButton *key_sym9;
    QPushButton *key_sym0;
    QPushButton *key_mod;
    QPushButton *key_pi;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *key_7;
    QPushButton *key_8;
    QPushButton *key_9;
    QPushButton *key_div;
    QPushButton *key_square_root;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *key_4;
    QPushButton *key_5;
    QPushButton *key_6;
    QPushButton *key_mul;
    QPushButton *key_x_squared;
    QGridLayout *gridLayout;
    QPushButton *key_add;
    QPushButton *key_3;
    QPushButton *key_2;
    QPushButton *key_percent;
    QPushButton *key_dot;
    QPushButton *key_1;
    QPushButton *key_0;
    QPushButton *key_sub;
    QPushButton *key_equals;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(262, 329);
        QFont font;
        font.setPointSize(13);
        MainWindow->setFont(font);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("utilities-system-monitor")));
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 261, 282));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(verticalLayoutWidget_2);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));

        verticalLayout_2->addWidget(plainTextEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        key_clear = new QPushButton(verticalLayoutWidget_2);
        key_clear->setObjectName("key_clear");
        key_clear->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_6->addWidget(key_clear);

        key_sym9 = new QPushButton(verticalLayoutWidget_2);
        key_sym9->setObjectName("key_sym9");
        key_sym9->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_6->addWidget(key_sym9);

        key_sym0 = new QPushButton(verticalLayoutWidget_2);
        key_sym0->setObjectName("key_sym0");
        key_sym0->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_6->addWidget(key_sym0);

        key_mod = new QPushButton(verticalLayoutWidget_2);
        key_mod->setObjectName("key_mod");
        key_mod->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_6->addWidget(key_mod);

        key_pi = new QPushButton(verticalLayoutWidget_2);
        key_pi->setObjectName("key_pi");
        key_pi->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_6->addWidget(key_pi);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        key_7 = new QPushButton(verticalLayoutWidget_2);
        key_7->setObjectName("key_7");
        key_7->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(key_7);

        key_8 = new QPushButton(verticalLayoutWidget_2);
        key_8->setObjectName("key_8");
        key_8->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(key_8);

        key_9 = new QPushButton(verticalLayoutWidget_2);
        key_9->setObjectName("key_9");
        key_9->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(key_9);

        key_div = new QPushButton(verticalLayoutWidget_2);
        key_div->setObjectName("key_div");
        key_div->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(key_div);

        key_square_root = new QPushButton(verticalLayoutWidget_2);
        key_square_root->setObjectName("key_square_root");
        key_square_root->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(key_square_root);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        key_4 = new QPushButton(verticalLayoutWidget_2);
        key_4->setObjectName("key_4");
        key_4->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(key_4);

        key_5 = new QPushButton(verticalLayoutWidget_2);
        key_5->setObjectName("key_5");
        key_5->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(key_5);

        key_6 = new QPushButton(verticalLayoutWidget_2);
        key_6->setObjectName("key_6");
        key_6->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(key_6);

        key_mul = new QPushButton(verticalLayoutWidget_2);
        key_mul->setObjectName("key_mul");
        key_mul->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(key_mul);

        key_x_squared = new QPushButton(verticalLayoutWidget_2);
        key_x_squared->setObjectName("key_x_squared");
        key_x_squared->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(key_x_squared);


        verticalLayout->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        key_add = new QPushButton(verticalLayoutWidget_2);
        key_add->setObjectName("key_add");
        key_add->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_add, 1, 3, 1, 1);

        key_3 = new QPushButton(verticalLayoutWidget_2);
        key_3->setObjectName("key_3");
        key_3->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_3, 0, 2, 1, 1);

        key_2 = new QPushButton(verticalLayoutWidget_2);
        key_2->setObjectName("key_2");
        key_2->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_2, 0, 1, 1, 1);

        key_percent = new QPushButton(verticalLayoutWidget_2);
        key_percent->setObjectName("key_percent");
        key_percent->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_percent, 1, 2, 1, 1);

        key_dot = new QPushButton(verticalLayoutWidget_2);
        key_dot->setObjectName("key_dot");
        key_dot->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_dot, 1, 1, 1, 1);

        key_1 = new QPushButton(verticalLayoutWidget_2);
        key_1->setObjectName("key_1");
        key_1->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_1, 0, 0, 1, 1);

        key_0 = new QPushButton(verticalLayoutWidget_2);
        key_0->setObjectName("key_0");
        key_0->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_0, 1, 0, 1, 1);

        key_sub = new QPushButton(verticalLayoutWidget_2);
        key_sub->setObjectName("key_sub");
        key_sub->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_sub, 0, 3, 1, 1);

        key_equals = new QPushButton(verticalLayoutWidget_2);
        key_equals->setObjectName("key_equals");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(key_equals->sizePolicy().hasHeightForWidth());
        key_equals->setSizePolicy(sizePolicy);
        key_equals->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_equals, 0, 4, 2, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 262, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Caculator", nullptr));
        key_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        key_sym9->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        key_sym0->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        key_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        key_pi->setText(QCoreApplication::translate("MainWindow", "\360\235\233\221", nullptr));
        key_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        key_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        key_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        key_div->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        key_square_root->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        key_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        key_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        key_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        key_mul->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        key_x_squared->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
        key_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        key_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        key_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        key_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        key_dot->setText(QCoreApplication::translate("MainWindow", ",", nullptr));
        key_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        key_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        key_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        key_equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
