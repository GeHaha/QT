/********************************************************************************
** Form generated from reading UI file 'my_window.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MY_WINDOW_H
#define UI_MY_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_My_Window
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *My_Window)
    {
        if (My_Window->objectName().isEmpty())
            My_Window->setObjectName(QStringLiteral("My_Window"));
        My_Window->resize(400, 300);
        centralWidget = new QWidget(My_Window);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 90, 75, 23));
        My_Window->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(My_Window);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        My_Window->setMenuBar(menuBar);
        mainToolBar = new QToolBar(My_Window);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        My_Window->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(My_Window);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        My_Window->setStatusBar(statusBar);

        retranslateUi(My_Window);

        QMetaObject::connectSlotsByName(My_Window);
    } // setupUi

    void retranslateUi(QMainWindow *My_Window)
    {
        My_Window->setWindowTitle(QApplication::translate("My_Window", "My_Window", 0));
        pushButton->setText(QApplication::translate("My_Window", "HELLO WORD", 0));
    } // retranslateUi

};

namespace Ui {
    class My_Window: public Ui_My_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MY_WINDOW_H
