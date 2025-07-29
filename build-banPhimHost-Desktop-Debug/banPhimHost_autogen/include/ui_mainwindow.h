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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MyPlainTextEdit.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    MyPlainTextEdit *plainTextEdit;
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
        MainWindow->resize(448, 446);
        QFont font;
        font.setPointSize(13);
        MainWindow->setFont(font);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("utilities-system-monitor");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        plainTextEdit = new MyPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));

        verticalLayout_2->addWidget(plainTextEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        key_clear = new QPushButton(centralwidget);
        key_clear->setObjectName("key_clear");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(key_clear->sizePolicy().hasHeightForWidth());
        key_clear->setSizePolicy(sizePolicy);
        key_clear->setMinimumSize(QSize(0, 0));
        key_clear->setSizeIncrement(QSize(0, 0));
        key_clear->setCursor(QCursor(Qt::PointingHandCursor));
        key_clear->setAutoFillBackground(false);

        horizontalLayout_6->addWidget(key_clear);

        key_sym9 = new QPushButton(centralwidget);
        key_sym9->setObjectName("key_sym9");
        sizePolicy.setHeightForWidth(key_sym9->sizePolicy().hasHeightForWidth());
        key_sym9->setSizePolicy(sizePolicy);
        key_sym9->setMinimumSize(QSize(0, 0));
        key_sym9->setSizeIncrement(QSize(0, 0));
        key_sym9->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_6->addWidget(key_sym9);

        key_sym0 = new QPushButton(centralwidget);
        key_sym0->setObjectName("key_sym0");
        sizePolicy.setHeightForWidth(key_sym0->sizePolicy().hasHeightForWidth());
        key_sym0->setSizePolicy(sizePolicy);
        key_sym0->setMinimumSize(QSize(0, 0));
        key_sym0->setSizeIncrement(QSize(0, 0));
        key_sym0->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_6->addWidget(key_sym0);

        key_mod = new QPushButton(centralwidget);
        key_mod->setObjectName("key_mod");
        sizePolicy.setHeightForWidth(key_mod->sizePolicy().hasHeightForWidth());
        key_mod->setSizePolicy(sizePolicy);
        key_mod->setMinimumSize(QSize(0, 0));
        key_mod->setSizeIncrement(QSize(0, 0));
        key_mod->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_6->addWidget(key_mod);

        key_pi = new QPushButton(centralwidget);
        key_pi->setObjectName("key_pi");
        sizePolicy.setHeightForWidth(key_pi->sizePolicy().hasHeightForWidth());
        key_pi->setSizePolicy(sizePolicy);
        key_pi->setMinimumSize(QSize(0, 0));
        key_pi->setSizeIncrement(QSize(0, 0));
        key_pi->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_6->addWidget(key_pi);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        key_7 = new QPushButton(centralwidget);
        key_7->setObjectName("key_7");
        sizePolicy.setHeightForWidth(key_7->sizePolicy().hasHeightForWidth());
        key_7->setSizePolicy(sizePolicy);
        key_7->setMinimumSize(QSize(0, 0));
        key_7->setSizeIncrement(QSize(0, 0));
        key_7->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(key_7);

        key_8 = new QPushButton(centralwidget);
        key_8->setObjectName("key_8");
        sizePolicy.setHeightForWidth(key_8->sizePolicy().hasHeightForWidth());
        key_8->setSizePolicy(sizePolicy);
        key_8->setMinimumSize(QSize(0, 0));
        key_8->setSizeIncrement(QSize(0, 0));
        key_8->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(key_8);

        key_9 = new QPushButton(centralwidget);
        key_9->setObjectName("key_9");
        sizePolicy.setHeightForWidth(key_9->sizePolicy().hasHeightForWidth());
        key_9->setSizePolicy(sizePolicy);
        key_9->setMinimumSize(QSize(0, 0));
        key_9->setSizeIncrement(QSize(0, 0));
        key_9->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(key_9);

        key_div = new QPushButton(centralwidget);
        key_div->setObjectName("key_div");
        sizePolicy.setHeightForWidth(key_div->sizePolicy().hasHeightForWidth());
        key_div->setSizePolicy(sizePolicy);
        key_div->setMinimumSize(QSize(0, 0));
        key_div->setSizeIncrement(QSize(0, 0));
        key_div->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(key_div);

        key_square_root = new QPushButton(centralwidget);
        key_square_root->setObjectName("key_square_root");
        sizePolicy.setHeightForWidth(key_square_root->sizePolicy().hasHeightForWidth());
        key_square_root->setSizePolicy(sizePolicy);
        key_square_root->setMinimumSize(QSize(0, 0));
        key_square_root->setSizeIncrement(QSize(0, 0));
        key_square_root->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(key_square_root);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        key_4 = new QPushButton(centralwidget);
        key_4->setObjectName("key_4");
        sizePolicy.setHeightForWidth(key_4->sizePolicy().hasHeightForWidth());
        key_4->setSizePolicy(sizePolicy);
        key_4->setMinimumSize(QSize(0, 0));
        key_4->setSizeIncrement(QSize(0, 0));
        key_4->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(key_4);

        key_5 = new QPushButton(centralwidget);
        key_5->setObjectName("key_5");
        sizePolicy.setHeightForWidth(key_5->sizePolicy().hasHeightForWidth());
        key_5->setSizePolicy(sizePolicy);
        key_5->setMinimumSize(QSize(0, 0));
        key_5->setSizeIncrement(QSize(0, 0));
        key_5->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(key_5);

        key_6 = new QPushButton(centralwidget);
        key_6->setObjectName("key_6");
        sizePolicy.setHeightForWidth(key_6->sizePolicy().hasHeightForWidth());
        key_6->setSizePolicy(sizePolicy);
        key_6->setMinimumSize(QSize(0, 0));
        key_6->setSizeIncrement(QSize(0, 0));
        key_6->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(key_6);

        key_mul = new QPushButton(centralwidget);
        key_mul->setObjectName("key_mul");
        sizePolicy.setHeightForWidth(key_mul->sizePolicy().hasHeightForWidth());
        key_mul->setSizePolicy(sizePolicy);
        key_mul->setMinimumSize(QSize(0, 0));
        key_mul->setSizeIncrement(QSize(0, 0));
        key_mul->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(key_mul);

        key_x_squared = new QPushButton(centralwidget);
        key_x_squared->setObjectName("key_x_squared");
        sizePolicy.setHeightForWidth(key_x_squared->sizePolicy().hasHeightForWidth());
        key_x_squared->setSizePolicy(sizePolicy);
        key_x_squared->setMinimumSize(QSize(0, 0));
        key_x_squared->setSizeIncrement(QSize(0, 0));
        key_x_squared->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(key_x_squared);


        verticalLayout->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        key_add = new QPushButton(centralwidget);
        key_add->setObjectName("key_add");
        sizePolicy.setHeightForWidth(key_add->sizePolicy().hasHeightForWidth());
        key_add->setSizePolicy(sizePolicy);
        key_add->setMinimumSize(QSize(0, 0));
        key_add->setSizeIncrement(QSize(0, 0));
        key_add->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_add, 1, 3, 1, 1);

        key_3 = new QPushButton(centralwidget);
        key_3->setObjectName("key_3");
        sizePolicy.setHeightForWidth(key_3->sizePolicy().hasHeightForWidth());
        key_3->setSizePolicy(sizePolicy);
        key_3->setMinimumSize(QSize(0, 0));
        key_3->setSizeIncrement(QSize(0, 0));
        key_3->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_3, 0, 2, 1, 1);

        key_2 = new QPushButton(centralwidget);
        key_2->setObjectName("key_2");
        sizePolicy.setHeightForWidth(key_2->sizePolicy().hasHeightForWidth());
        key_2->setSizePolicy(sizePolicy);
        key_2->setMinimumSize(QSize(0, 0));
        key_2->setSizeIncrement(QSize(0, 0));
        key_2->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_2, 0, 1, 1, 1);

        key_percent = new QPushButton(centralwidget);
        key_percent->setObjectName("key_percent");
        sizePolicy.setHeightForWidth(key_percent->sizePolicy().hasHeightForWidth());
        key_percent->setSizePolicy(sizePolicy);
        key_percent->setMinimumSize(QSize(0, 0));
        key_percent->setSizeIncrement(QSize(0, 0));
        key_percent->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_percent, 1, 2, 1, 1);

        key_dot = new QPushButton(centralwidget);
        key_dot->setObjectName("key_dot");
        sizePolicy.setHeightForWidth(key_dot->sizePolicy().hasHeightForWidth());
        key_dot->setSizePolicy(sizePolicy);
        key_dot->setMinimumSize(QSize(0, 0));
        key_dot->setSizeIncrement(QSize(0, 0));
        key_dot->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_dot, 1, 1, 1, 1);

        key_1 = new QPushButton(centralwidget);
        key_1->setObjectName("key_1");
        sizePolicy.setHeightForWidth(key_1->sizePolicy().hasHeightForWidth());
        key_1->setSizePolicy(sizePolicy);
        key_1->setMinimumSize(QSize(0, 0));
        key_1->setSizeIncrement(QSize(0, 0));
        key_1->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_1, 0, 0, 1, 1);

        key_0 = new QPushButton(centralwidget);
        key_0->setObjectName("key_0");
        sizePolicy.setHeightForWidth(key_0->sizePolicy().hasHeightForWidth());
        key_0->setSizePolicy(sizePolicy);
        key_0->setMinimumSize(QSize(0, 0));
        key_0->setSizeIncrement(QSize(0, 0));
        key_0->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_0, 1, 0, 1, 1);

        key_sub = new QPushButton(centralwidget);
        key_sub->setObjectName("key_sub");
        sizePolicy.setHeightForWidth(key_sub->sizePolicy().hasHeightForWidth());
        key_sub->setSizePolicy(sizePolicy);
        key_sub->setMinimumSize(QSize(0, 0));
        key_sub->setSizeIncrement(QSize(0, 0));
        key_sub->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_sub, 0, 3, 1, 1);

        key_equals = new QPushButton(centralwidget);
        key_equals->setObjectName("key_equals");
        sizePolicy.setHeightForWidth(key_equals->sizePolicy().hasHeightForWidth());
        key_equals->setSizePolicy(sizePolicy);
        key_equals->setMinimumSize(QSize(0, 0));
        key_equals->setSizeIncrement(QSize(0, 0));
        key_equals->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(key_equals, 0, 4, 2, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 448, 25));
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
        key_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
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
