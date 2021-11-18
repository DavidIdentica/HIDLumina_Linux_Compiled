/********************************************************************************
** Form generated from reading UI file 'main_hid.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_HID_H
#define UI_MAIN_HID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_hid
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *main_hid)
    {
        if (main_hid->objectName().isEmpty())
            main_hid->setObjectName(QStringLiteral("main_hid"));
        main_hid->setMinimumSize(QSize(0, 383));
        label = new QLabel(main_hid);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 258, 17));
        lineEdit = new QLineEdit(main_hid);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 46, 258, 25));
        lineEdit->setReadOnly(true);
        label_2 = new QLabel(main_hid);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 77, 258, 17));
        pushButton_2 = new QPushButton(main_hid);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 131, 258, 25));
        pushButton = new QPushButton(main_hid);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 162, 258, 25));
        textEdit = new QTextEdit(main_hid);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 193, 258, 162));
        lineEdit_2 = new QLineEdit(main_hid);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 100, 258, 25));
        lineEdit_2->setReadOnly(true);

        retranslateUi(main_hid);

        QMetaObject::connectSlotsByName(main_hid);
    } // setupUi

    void retranslateUi(QWidget *main_hid)
    {
        main_hid->setWindowTitle(QApplication::translate("main_hid", "main_hid", nullptr));
        label->setText(QApplication::translate("main_hid", "IP:", nullptr));
        label_2->setText(QApplication::translate("main_hid", "Port:", nullptr));
        pushButton_2->setText(QApplication::translate("main_hid", "Cancel", nullptr));
        pushButton->setText(QApplication::translate("main_hid", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_hid: public Ui_main_hid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_HID_H
