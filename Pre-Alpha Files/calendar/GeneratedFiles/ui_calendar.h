/********************************************************************************
** Form generated from reading UI file 'calendar.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDAR_H
#define UI_CALENDAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calendarClass
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *yearBackButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *MonthBackButton;
    QLabel *label_2;
    QToolButton *MonthFrontButton;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *yearFrontButton;
    QLabel *Titlelabel;
    QLabel *DateLabel;
    QCalendarWidget *calendarWidget;
    QPushButton *OkButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *calendarClass)
    {
        if (calendarClass->objectName().isEmpty())
            calendarClass->setObjectName(QStringLiteral("calendarClass"));
        calendarClass->resize(371, 415);
        centralWidget = new QWidget(calendarClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 30, 371, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        yearBackButton = new QToolButton(horizontalLayoutWidget);
        yearBackButton->setObjectName(QStringLiteral("yearBackButton"));

        horizontalLayout->addWidget(yearBackButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        MonthBackButton = new QToolButton(horizontalLayoutWidget);
        MonthBackButton->setObjectName(QStringLiteral("MonthBackButton"));

        horizontalLayout->addWidget(MonthBackButton);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 26, 100);\n"
"color: rgb(255,255,255);\n"
"\n"
"\n"
"font: 75 8\n"
"pt \"Microsoft Sans Serif\";"));

        horizontalLayout->addWidget(label_2);

        MonthFrontButton = new QToolButton(horizontalLayoutWidget);
        MonthFrontButton->setObjectName(QStringLiteral("MonthFrontButton"));

        horizontalLayout->addWidget(MonthFrontButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        yearFrontButton = new QToolButton(horizontalLayoutWidget);
        yearFrontButton->setObjectName(QStringLiteral("yearFrontButton"));

        horizontalLayout->addWidget(yearFrontButton);

        Titlelabel = new QLabel(centralWidget);
        Titlelabel->setObjectName(QStringLiteral("Titlelabel"));
        Titlelabel->setGeometry(QRect(0, 0, 370, 30));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        Titlelabel->setFont(font);
        Titlelabel->setStyleSheet(QLatin1String("font: 75 24pt \"Times New Roman\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
""));
        Titlelabel->setAlignment(Qt::AlignCenter);
        DateLabel = new QLabel(centralWidget);
        DateLabel->setObjectName(QStringLiteral("DateLabel"));
        DateLabel->setGeometry(QRect(0, 70, 371, 31));
        DateLabel->setAlignment(Qt::AlignCenter);
        calendarWidget = new QCalendarWidget(centralWidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(0, 102, 371, 231));
        OkButton = new QPushButton(centralWidget);
        OkButton->setObjectName(QStringLiteral("OkButton"));
        OkButton->setGeometry(QRect(270, 332, 101, 31));
        calendarClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(calendarClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 371, 21));
        calendarClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(calendarClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        calendarClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(calendarClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        calendarClass->setStatusBar(statusBar);

        retranslateUi(calendarClass);

        QMetaObject::connectSlotsByName(calendarClass);
    } // setupUi

    void retranslateUi(QMainWindow *calendarClass)
    {
        calendarClass->setWindowTitle(QApplication::translate("calendarClass", "calendar", 0));
        yearBackButton->setText(QApplication::translate("calendarClass", "<<", 0));
        MonthBackButton->setText(QApplication::translate("calendarClass", "<<", 0));
        label_2->setText(QApplication::translate("calendarClass", "DATE SELECTOR", 0));
        MonthFrontButton->setText(QApplication::translate("calendarClass", ">>", 0));
        yearFrontButton->setText(QApplication::translate("calendarClass", ">>", 0));
        Titlelabel->setText(QApplication::translate("calendarClass", "CALENDAR", 0));
        DateLabel->setText(QString());
        OkButton->setText(QApplication::translate("calendarClass", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class calendarClass: public Ui_calendarClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDAR_H
