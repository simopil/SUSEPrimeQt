/********************************************************************************
** Form generated from reading UI file 'notinst_error.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTINST_ERROR_H
#define UI_NOTINST_ERROR_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_notinst_error
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *error_exit_but;

    void setupUi(QDialog *notinst_error)
    {
        if (notinst_error->objectName().isEmpty())
            notinst_error->setObjectName(QString::fromUtf8("notinst_error"));
        notinst_error->resize(443, 179);
        gridLayout = new QGridLayout(notinst_error);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(notinst_error);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        error_exit_but = new QPushButton(notinst_error);
        error_exit_but->setObjectName(QString::fromUtf8("error_exit_but"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(error_exit_but->sizePolicy().hasHeightForWidth());
        error_exit_but->setSizePolicy(sizePolicy);
        error_exit_but->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        gridLayout->addWidget(error_exit_but, 1, 0, 1, 1, Qt::AlignHCenter);


        retranslateUi(notinst_error);

        QMetaObject::connectSlotsByName(notinst_error);
    } // setupUi

    void retranslateUi(QDialog *notinst_error)
    {
        notinst_error->setWindowTitle(QApplication::translate("notinst_error", "FATAL", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("notinst_error", "FATAL ERROR: SUSEPrime seems not installed in the system", 0, QApplication::UnicodeUTF8));
        error_exit_but->setText(QApplication::translate("notinst_error", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class notinst_error: public Ui_notinst_error {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTINST_ERROR_H
