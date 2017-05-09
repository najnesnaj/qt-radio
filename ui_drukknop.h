/********************************************************************************
** Form generated from reading UI file 'drukknop.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRUKKNOP_H
#define UI_DRUKKNOP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Drukknop
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Drukknop)
    {
        if (Drukknop->objectName().isEmpty())
            Drukknop->setObjectName(QString::fromUtf8("Drukknop"));
        Drukknop->resize(800, 480);
#ifndef QT_NO_TOOLTIP
        Drukknop->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
       // Drukknop->setToolTipDuration(0);
        centralWidget = new QWidget(Drukknop);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 10, 251, 51));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 80, 251, 51));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(600, 0, 241, 41));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 330, 251, 51));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(70, 150, 251, 51));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(70, 230, 251, 61));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(430, 90, 321, 311));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Drukknop->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Drukknop);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 23));
        Drukknop->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Drukknop);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Drukknop->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Drukknop);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Drukknop->setStatusBar(statusBar);

        retranslateUi(Drukknop);
        QObject::connect(pushButton, SIGNAL(clicked()), lcdNumber, SLOT(show()));

        QMetaObject::connectSlotsByName(Drukknop);
    } // setupUi

    void retranslateUi(QMainWindow *Drukknop)
    {
        Drukknop->setWindowTitle(QApplication::translate("Drukknop", "Drukknop", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Drukknop", "radio1", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Drukknop", "radio2", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Drukknop", "mnm", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Drukknop", "klara", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Drukknop", "classic21", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Drukknop: public Ui_Drukknop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUKKNOP_H
