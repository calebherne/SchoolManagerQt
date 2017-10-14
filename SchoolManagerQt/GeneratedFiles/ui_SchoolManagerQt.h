/********************************************************************************
** Form generated from reading UI file 'SchoolManagerQt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHOOLMANAGERQT_H
#define UI_SCHOOLMANAGERQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SchoolManagerQtClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SchoolManagerQtClass)
    {
        if (SchoolManagerQtClass->objectName().isEmpty())
            SchoolManagerQtClass->setObjectName(QStringLiteral("SchoolManagerQtClass"));
        SchoolManagerQtClass->resize(600, 400);
        menuBar = new QMenuBar(SchoolManagerQtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        SchoolManagerQtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SchoolManagerQtClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SchoolManagerQtClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(SchoolManagerQtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SchoolManagerQtClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SchoolManagerQtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SchoolManagerQtClass->setStatusBar(statusBar);

        retranslateUi(SchoolManagerQtClass);

        QMetaObject::connectSlotsByName(SchoolManagerQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *SchoolManagerQtClass)
    {
        SchoolManagerQtClass->setWindowTitle(QApplication::translate("SchoolManagerQtClass", "SchoolManagerQt", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SchoolManagerQtClass: public Ui_SchoolManagerQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHOOLMANAGERQT_H
