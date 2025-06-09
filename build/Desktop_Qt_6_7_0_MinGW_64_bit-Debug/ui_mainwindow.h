/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDaten_einlesen;
    QAction *actionKonto_hinzufuegen;
    QAction *actionKonto_loeschen;
    QAction *actionKonto_suchen;
    QAction *actionJsonDatenErstellen;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionDaten_einlesen = new QAction(MainWindow);
        actionDaten_einlesen->setObjectName("actionDaten_einlesen");
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("document-open")));
        actionDaten_einlesen->setIcon(icon);
        actionDaten_einlesen->setMenuRole(QAction::MenuRole::NoRole);
        actionKonto_hinzufuegen = new QAction(MainWindow);
        actionKonto_hinzufuegen->setObjectName("actionKonto_hinzufuegen");
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("contact-new")));
        actionKonto_hinzufuegen->setIcon(icon1);
        actionKonto_hinzufuegen->setMenuRole(QAction::MenuRole::NoRole);
        actionKonto_loeschen = new QAction(MainWindow);
        actionKonto_loeschen->setObjectName("actionKonto_loeschen");
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("edit-clear")));
        actionKonto_loeschen->setIcon(icon2);
        actionKonto_loeschen->setMenuRole(QAction::MenuRole::NoRole);
        actionKonto_suchen = new QAction(MainWindow);
        actionKonto_suchen->setObjectName("actionKonto_suchen");
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8("edit-find")));
        actionKonto_suchen->setIcon(icon3);
        actionKonto_suchen->setMenuRole(QAction::MenuRole::NoRole);
        actionJsonDatenErstellen = new QAction(MainWindow);
        actionJsonDatenErstellen->setObjectName("actionJsonDatenErstellen");
        QIcon icon4(QIcon::fromTheme(QString::fromUtf8("document-save-as")));
        actionJsonDatenErstellen->setIcon(icon4);
        actionJsonDatenErstellen->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::LeftToolBarArea, toolBar);

        toolBar->addAction(actionDaten_einlesen);
        toolBar->addAction(actionJsonDatenErstellen);
        toolBar->addAction(actionKonto_suchen);
        toolBar->addAction(actionKonto_hinzufuegen);
        toolBar->addAction(actionKonto_loeschen);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionDaten_einlesen->setText(QCoreApplication::translate("MainWindow", "Daten einlesen", nullptr));
        actionKonto_hinzufuegen->setText(QCoreApplication::translate("MainWindow", "Konto hinzufuegen", nullptr));
        actionKonto_loeschen->setText(QCoreApplication::translate("MainWindow", "Konto loeschen", nullptr));
        actionKonto_suchen->setText(QCoreApplication::translate("MainWindow", "Konto suchen", nullptr));
        actionJsonDatenErstellen->setText(QCoreApplication::translate("MainWindow", "JsonDatenErstellen ", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
