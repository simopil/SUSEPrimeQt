/********************************************************************************
** Form generated from reading UI file 'already_use.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALREADY_USE_H
#define UI_ALREADY_USE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_already_use
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *already_use)
    {
        if (already_use->objectName().isEmpty())
            already_use->setObjectName(QString::fromUtf8("already_use"));
        already_use->resize(443, 179);
        label = new QLabel(already_use);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 271, 101));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pushButton = new QPushButton(already_use);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 130, 88, 34));
        pushButton->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        retranslateUi(already_use);

        QMetaObject::connectSlotsByName(already_use);
    } // setupUi

    void retranslateUi(QDialog *already_use)
    {
        already_use->setWindowTitle(QApplication::translate("already_use", "ERROR", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("already_use", "Driver already in use!", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("already_use", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class already_use: public Ui_already_use {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALREADY_USE_H
