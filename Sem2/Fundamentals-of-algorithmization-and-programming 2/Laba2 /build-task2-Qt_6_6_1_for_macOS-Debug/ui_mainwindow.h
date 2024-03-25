/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *table;
    QTableWidget *topScorersTable;
    QTableWidget *topPenaltyTable;
    QTableWidget *WorstscorersTable;
    QFrame *frame;
    QPushButton *openfilebut;
    QPushButton *pushButton;
    QPushButton *hidetopscorrers;
    QPushButton *biggestpenalty;
    QPushButton *hidetoppenalty;
    QPushButton *worstscorersbut;
    QPushButton *hideworstscorers;
    QPushButton *addbut;
    QPushButton *editbut;
    QFrame *EDITMENU;
    QLineEdit *nameline;
    QLineEdit *clubline;
    QLineEdit *goalsline;
    QLineEdit *penaltyline;
    QLineEdit *roleline;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *confirmbut;
    QPushButton *confirmbut_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        table = new QTableWidget(centralwidget);
        if (table->columnCount() < 5)
            table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        table->setObjectName("table");
        table->setGeometry(QRect(-5, 1, 461, 441));
        topScorersTable = new QTableWidget(centralwidget);
        if (topScorersTable->columnCount() < 5)
            topScorersTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        topScorersTable->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        topScorersTable->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        topScorersTable->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        topScorersTable->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        topScorersTable->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        topScorersTable->setObjectName("topScorersTable");
        topScorersTable->setGeometry(QRect(0, 0, 461, 441));
        topPenaltyTable = new QTableWidget(centralwidget);
        if (topPenaltyTable->columnCount() < 5)
            topPenaltyTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        topPenaltyTable->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        topPenaltyTable->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        topPenaltyTable->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        topPenaltyTable->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        topPenaltyTable->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        topPenaltyTable->setObjectName("topPenaltyTable");
        topPenaltyTable->setGeometry(QRect(0, 0, 461, 441));
        WorstscorersTable = new QTableWidget(centralwidget);
        if (WorstscorersTable->columnCount() < 5)
            WorstscorersTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        WorstscorersTable->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        WorstscorersTable->setHorizontalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        WorstscorersTable->setHorizontalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        WorstscorersTable->setHorizontalHeaderItem(3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        WorstscorersTable->setHorizontalHeaderItem(4, __qtablewidgetitem19);
        WorstscorersTable->setObjectName("WorstscorersTable");
        WorstscorersTable->setGeometry(QRect(0, 0, 481, 441));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(510, 0, 171, 271));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        openfilebut = new QPushButton(frame);
        openfilebut->setObjectName("openfilebut");
        openfilebut->setGeometry(QRect(20, 0, 131, 31));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 30, 131, 32));
        hidetopscorrers = new QPushButton(frame);
        hidetopscorrers->setObjectName("hidetopscorrers");
        hidetopscorrers->setGeometry(QRect(20, 60, 131, 32));
        biggestpenalty = new QPushButton(frame);
        biggestpenalty->setObjectName("biggestpenalty");
        biggestpenalty->setGeometry(QRect(20, 90, 131, 32));
        hidetoppenalty = new QPushButton(frame);
        hidetoppenalty->setObjectName("hidetoppenalty");
        hidetoppenalty->setGeometry(QRect(20, 120, 131, 32));
        worstscorersbut = new QPushButton(frame);
        worstscorersbut->setObjectName("worstscorersbut");
        worstscorersbut->setGeometry(QRect(20, 150, 141, 32));
        hideworstscorers = new QPushButton(frame);
        hideworstscorers->setObjectName("hideworstscorers");
        hideworstscorers->setGeometry(QRect(20, 180, 141, 32));
        addbut = new QPushButton(frame);
        addbut->setObjectName("addbut");
        addbut->setGeometry(QRect(20, 210, 141, 32));
        editbut = new QPushButton(frame);
        editbut->setObjectName("editbut");
        editbut->setGeometry(QRect(20, 240, 141, 32));
        EDITMENU = new QFrame(centralwidget);
        EDITMENU->setObjectName("EDITMENU");
        EDITMENU->setGeometry(QRect(490, 270, 181, 231));
        EDITMENU->setFrameShape(QFrame::StyledPanel);
        EDITMENU->setFrameShadow(QFrame::Raised);
        nameline = new QLineEdit(EDITMENU);
        nameline->setObjectName("nameline");
        nameline->setGeometry(QRect(70, 30, 113, 21));
        clubline = new QLineEdit(EDITMENU);
        clubline->setObjectName("clubline");
        clubline->setGeometry(QRect(70, 60, 113, 21));
        goalsline = new QLineEdit(EDITMENU);
        goalsline->setObjectName("goalsline");
        goalsline->setGeometry(QRect(70, 90, 113, 21));
        penaltyline = new QLineEdit(EDITMENU);
        penaltyline->setObjectName("penaltyline");
        penaltyline->setGeometry(QRect(80, 120, 101, 21));
        roleline = new QLineEdit(EDITMENU);
        roleline->setObjectName("roleline");
        roleline->setGeometry(QRect(70, 150, 113, 21));
        label = new QLabel(EDITMENU);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 30, 71, 20));
        label_2 = new QLabel(EDITMENU);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 60, 71, 16));
        label_3 = new QLabel(EDITMENU);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 90, 71, 16));
        label_4 = new QLabel(EDITMENU);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 120, 91, 16));
        label_5 = new QLabel(EDITMENU);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 150, 61, 16));
        label_6 = new QLabel(EDITMENU);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 0, 71, 16));
        confirmbut = new QPushButton(EDITMENU);
        confirmbut->setObjectName("confirmbut");
        confirmbut->setGeometry(QRect(40, 190, 100, 32));
        confirmbut_2 = new QPushButton(EDITMENU);
        confirmbut_2->setObjectName("confirmbut_2");
        confirmbut_2->setGeometry(QRect(40, 190, 100, 32));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Club", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Role", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Goals", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Penalty", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = topScorersTable->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = topScorersTable->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Club", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = topScorersTable->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Role", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = topScorersTable->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Goals", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = topScorersTable->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "Penalty", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = topPenaltyTable->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = topPenaltyTable->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "Club", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = topPenaltyTable->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Role", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = topPenaltyTable->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "Goals", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = topPenaltyTable->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "Penalty", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = WorstscorersTable->horizontalHeaderItem(0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = WorstscorersTable->horizontalHeaderItem(1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "Club", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = WorstscorersTable->horizontalHeaderItem(2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "Role", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = WorstscorersTable->horizontalHeaderItem(3);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "Goals", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = WorstscorersTable->horizontalHeaderItem(4);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "Penalty", nullptr));
        openfilebut->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Display top scorers", nullptr));
        hidetopscorrers->setText(QCoreApplication::translate("MainWindow", "Hide top scorers", nullptr));
        biggestpenalty->setText(QCoreApplication::translate("MainWindow", "Top penalty", nullptr));
        hidetoppenalty->setText(QCoreApplication::translate("MainWindow", "Hide top penalty", nullptr));
        worstscorersbut->setText(QCoreApplication::translate("MainWindow", "Display worst scorers", nullptr));
        hideworstscorers->setText(QCoreApplication::translate("MainWindow", "Hide top penalty", nullptr));
        addbut->setText(QCoreApplication::translate("MainWindow", "Add Player", nullptr));
        editbut->setText(QCoreApplication::translate("MainWindow", "Edit selected player", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter name:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter club:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Enter goals:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Enter penalty:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Enter role:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "EDIT MENU", nullptr));
        confirmbut->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        confirmbut_2->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
