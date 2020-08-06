/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *expression;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *result_out;
    QGridLayout *gridLayout;
    QPushButton *one;
    QPushButton *division;
    QPushButton *zero;
    QPushButton *nine;
    QPushButton *inversia;
    QPushButton *seven;
    QPushButton *four;
    QPushButton *three;
    QPushButton *five;
    QPushButton *two;
    QPushButton *six;
    QPushButton *eigth;
    QPushButton *multi;
    QPushButton *plus;
    QPushButton *minus;
    QFrame *line;
    QPushButton *result;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(338, 273);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        expression = new QLineEdit(centralWidget);
        expression->setObjectName(QStringLiteral("expression"));

        horizontalLayout->addWidget(expression);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label);

        result_out = new QLineEdit(centralWidget);
        result_out->setObjectName(QStringLiteral("result_out"));

        horizontalLayout_3->addWidget(result_out);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        one = new QPushButton(centralWidget);
        one->setObjectName(QStringLiteral("one"));

        gridLayout->addWidget(one, 0, 0, 1, 1);

        division = new QPushButton(centralWidget);
        division->setObjectName(QStringLiteral("division"));

        gridLayout->addWidget(division, 3, 4, 1, 1);

        zero = new QPushButton(centralWidget);
        zero->setObjectName(QStringLiteral("zero"));

        gridLayout->addWidget(zero, 3, 1, 1, 1);

        nine = new QPushButton(centralWidget);
        nine->setObjectName(QStringLiteral("nine"));

        gridLayout->addWidget(nine, 2, 2, 1, 1);

        inversia = new QPushButton(centralWidget);
        inversia->setObjectName(QStringLiteral("inversia"));

        gridLayout->addWidget(inversia, 4, 4, 1, 1);

        seven = new QPushButton(centralWidget);
        seven->setObjectName(QStringLiteral("seven"));

        gridLayout->addWidget(seven, 2, 0, 1, 1);

        four = new QPushButton(centralWidget);
        four->setObjectName(QStringLiteral("four"));

        gridLayout->addWidget(four, 1, 0, 1, 1);

        three = new QPushButton(centralWidget);
        three->setObjectName(QStringLiteral("three"));

        gridLayout->addWidget(three, 0, 2, 1, 1);

        five = new QPushButton(centralWidget);
        five->setObjectName(QStringLiteral("five"));

        gridLayout->addWidget(five, 1, 1, 1, 1);

        two = new QPushButton(centralWidget);
        two->setObjectName(QStringLiteral("two"));

        gridLayout->addWidget(two, 0, 1, 1, 1);

        six = new QPushButton(centralWidget);
        six->setObjectName(QStringLiteral("six"));

        gridLayout->addWidget(six, 1, 2, 1, 1);

        eigth = new QPushButton(centralWidget);
        eigth->setObjectName(QStringLiteral("eigth"));

        gridLayout->addWidget(eigth, 2, 1, 1, 1);

        multi = new QPushButton(centralWidget);
        multi->setObjectName(QStringLiteral("multi"));

        gridLayout->addWidget(multi, 2, 4, 1, 1);

        plus = new QPushButton(centralWidget);
        plus->setObjectName(QStringLiteral("plus"));

        gridLayout->addWidget(plus, 0, 4, 1, 1);

        minus = new QPushButton(centralWidget);
        minus->setObjectName(QStringLiteral("minus"));

        gridLayout->addWidget(minus, 1, 4, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 3, 5, 1);

        result = new QPushButton(centralWidget);
        result->setObjectName(QStringLiteral("result"));

        gridLayout->addWidget(result, 4, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 338, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", " Result:", 0));
        one->setText(QApplication::translate("MainWindow", "1", 0));
        division->setText(QApplication::translate("MainWindow", "/", 0));
        zero->setText(QApplication::translate("MainWindow", "0", 0));
        nine->setText(QApplication::translate("MainWindow", "9", 0));
        inversia->setText(QApplication::translate("MainWindow", "inv", 0));
        seven->setText(QApplication::translate("MainWindow", "7", 0));
        four->setText(QApplication::translate("MainWindow", "4", 0));
        three->setText(QApplication::translate("MainWindow", "3", 0));
        five->setText(QApplication::translate("MainWindow", "5", 0));
        two->setText(QApplication::translate("MainWindow", "2", 0));
        six->setText(QApplication::translate("MainWindow", "6", 0));
        eigth->setText(QApplication::translate("MainWindow", "8", 0));
        multi->setText(QApplication::translate("MainWindow", "*", 0));
        plus->setText(QApplication::translate("MainWindow", "+", 0));
        minus->setText(QApplication::translate("MainWindow", "-", 0));
        result->setText(QApplication::translate("MainWindow", "=", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
