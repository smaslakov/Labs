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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QSpinBox *numberofelemspin;
    QPushButton *bubbesortbut;
    QPushButton *mergesortbut;
    QPushButton *quicksortbut;
    QPushButton *heapsortbut;
    QPushButton *searchbut;
    QFrame *frame;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *indexlabel;
    QLabel *label_2;
    QPushButton *stopsearchbut;
    QTextEdit *textEdit;
    QPushButton *interpolationsortbut;
    QFrame *frame_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QTextEdit *BinPowanswer;
    QLabel *indexeloutput;
    QLabel *label_8;
    QLabel *numbereloutput;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, 0, 650, 400));
        numberofelemspin = new QSpinBox(centralwidget);
        numberofelemspin->setObjectName("numberofelemspin");
        numberofelemspin->setGeometry(QRect(690, 10, 61, 22));
        numberofelemspin->setMaximum(300);
        numberofelemspin->setValue(0);
        bubbesortbut = new QPushButton(centralwidget);
        bubbesortbut->setObjectName("bubbesortbut");
        bubbesortbut->setGeometry(QRect(650, 60, 141, 32));
        mergesortbut = new QPushButton(centralwidget);
        mergesortbut->setObjectName("mergesortbut");
        mergesortbut->setGeometry(QRect(650, 120, 141, 32));
        quicksortbut = new QPushButton(centralwidget);
        quicksortbut->setObjectName("quicksortbut");
        quicksortbut->setGeometry(QRect(650, 180, 141, 32));
        heapsortbut = new QPushButton(centralwidget);
        heapsortbut->setObjectName("heapsortbut");
        heapsortbut->setGeometry(QRect(650, 240, 141, 32));
        searchbut = new QPushButton(centralwidget);
        searchbut->setObjectName("searchbut");
        searchbut->setGeometry(QRect(650, 340, 151, 32));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 201, 191));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 10, 191, 31));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        spinBox = new QSpinBox(frame);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(0, 50, 181, 31));
        spinBox->setMaximum(1000000);
        indexlabel = new QLabel(frame);
        indexlabel->setObjectName("indexlabel");
        indexlabel->setGeometry(QRect(0, 130, 171, 61));
        QFont font1;
        font1.setPointSize(50);
        indexlabel->setFont(font1);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 80, 101, 41));
        label_2->setFont(font);
        stopsearchbut = new QPushButton(centralwidget);
        stopsearchbut->setObjectName("stopsearchbut");
        stopsearchbut->setGeometry(QRect(650, 340, 151, 32));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 400, 571, 81));
        interpolationsortbut = new QPushButton(centralwidget);
        interpolationsortbut->setObjectName("interpolationsortbut");
        interpolationsortbut->setGeometry(QRect(650, 300, 151, 32));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(570, 400, 231, 151));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 30, 141, 31));
        QFont font2;
        font2.setPointSize(15);
        label_3->setFont(font2);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 0, 51, 41));
        label_4->setFont(font2);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 60, 41, 21));
        label_5->setFont(font2);
        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 80, 111, 21));
        label_6->setFont(font2);
        BinPowanswer = new QTextEdit(frame_2);
        BinPowanswer->setObjectName("BinPowanswer");
        BinPowanswer->setGeometry(QRect(0, 100, 231, 51));
        BinPowanswer->setFont(font);
        indexeloutput = new QLabel(frame_2);
        indexeloutput->setObjectName("indexeloutput");
        indexeloutput->setGeometry(QRect(60, 10, 91, 21));
        indexeloutput->setFont(font2);
        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(230, 100, 51, 41));
        label_8->setFont(font2);
        numbereloutput = new QLabel(frame_2);
        numbereloutput->setObjectName("numbereloutput");
        numbereloutput->setGeometry(QRect(150, 30, 51, 31));
        numbereloutput->setFont(font2);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 60, 91, 21));
        label_7->setFont(font2);
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
        bubbesortbut->setText(QCoreApplication::translate("MainWindow", "bubble sort", nullptr));
        mergesortbut->setText(QCoreApplication::translate("MainWindow", "merge sort", nullptr));
        quicksortbut->setText(QCoreApplication::translate("MainWindow", "quick sort", nullptr));
        heapsortbut->setText(QCoreApplication::translate("MainWindow", "heap sort", nullptr));
        searchbut->setText(QCoreApplication::translate("MainWindow", "binary search", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter element:", nullptr));
        indexlabel->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "INDEX:", nullptr));
        stopsearchbut->setText(QCoreApplication::translate("MainWindow", "stop search", nullptr));
        interpolationsortbut->setText(QCoreApplication::translate("MainWindow", "Interpolation sort", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Number of elements:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "INDEX:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "MOD:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "BinPow answer:", nullptr));
        indexeloutput->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "INDEX:", nullptr));
        numbereloutput->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "2147483647", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
