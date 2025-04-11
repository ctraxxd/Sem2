/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName("mainwindow");
        mainwindow->resize(315, 159);
        pushButton = new QPushButton(mainwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 281, 25));
        label = new QLabel(mainwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 171, 17));
        label_2 = new QLabel(mainwindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 110, 171, 17));
        lineEdit = new QLineEdit(mainwindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, 60, 113, 25));
        lineEdit->setReadOnly(true);
        lineEdit_2 = new QLineEdit(mainwindow);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(180, 110, 113, 25));
        lineEdit_2->setReadOnly(true);

        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QWidget *mainwindow)
    {
        mainwindow->setWindowTitle(QCoreApplication::translate("mainwindow", "mainwindow", nullptr));
        pushButton->setText(QCoreApplication::translate("mainwindow", "\320\262\321\213\320\261\321\200\320\260\321\202\321\214 \320\277\320\260\320\277\320\272\321\203", nullptr));
        label->setText(QCoreApplication::translate("mainwindow", "\320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\320\276\320\264\320\277\320\260\320\277\320\276\320\272:", nullptr));
        label_2->setText(QCoreApplication::translate("mainwindow", "\320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\204\320\260\320\271\320\273\320\276\320\262:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
