/********************************************************************************
** Form generated from reading UI file 'logout_info.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGOUT_INFO_H
#define UI_LOGOUT_INFO_H

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

class Ui_logout_info
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *logout_info)
    {
        if (logout_info->objectName().isEmpty())
            logout_info->setObjectName(QString::fromUtf8("logout_info"));
        logout_info->resize(443, 179);
        label = new QLabel(logout_info);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 421, 101));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pushButton = new QPushButton(logout_info);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 120, 88, 34));
        pushButton->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pushButton_2 = new QPushButton(logout_info);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 120, 88, 34));
        pushButton_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        retranslateUi(logout_info);

        QMetaObject::connectSlotsByName(logout_info);
    } // setupUi

    void retranslateUi(QDialog *logout_info)
    {
        logout_info->setWindowTitle(QApplication::translate("logout_info", "Info", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("logout_info", "Please logout to switch graphics", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("logout_info", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("logout_info", "Abort Switch", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class logout_info: public Ui_logout_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGOUT_INFO_H
