/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tabSwitch_boot;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QPushButton *switchIntel;
    QPushButton *switchIntel2;
    QPushButton *switchNvidia;
    QGroupBox *groupBox_2;
    QLabel *driverStatus;
    QGroupBox *groupBox_3;
    QLabel *bbswitchStatus;
    QLabel *label_8;
    QTextBrowser *commandout;
    QGroupBox *groupBox_4;
    QPushButton *apply_bootdefault;
    QRadioButton *radionvidia;
    QRadioButton *radiointel2;
    QRadioButton *radiolast;
    QRadioButton *radiointel;
    QGroupBox *groupBox_5;
    QPushButton *restore_nextboot;
    QComboBox *combo_forceboot;
    QLabel *force_boot_stat;
    QPushButton *apply_forceboot;
    QGroupBox *groupBox_6;
    QLabel *serv_stat;
    QPushButton *serviceRestore;
    QLabel *label_10;
    QPushButton *serviceDisable;
    QGroupBox *groupBox_7;
    QPushButton *logcleaner_but;
    QPushButton *unsetButton;
    QWidget *tabStatus;
    QGridLayout *gridLayout;
    QTextBrowser *logViewer;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QLabel *cred;
    QLabel *git_link;
    QLabel *icon;
    QLabel *ver_lab_str;
    QLabel *label_versiondesc;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_11;
    QTextBrowser *info_usagebox;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(660, 523);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(660, 520));
        MainWindow->setMaximumSize(QSize(99999, 99999));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/icon/nvidia.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon1);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(660, 500));
        centralWidget->setMaximumSize(QSize(99999, 99999));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(640, 486));
        tabWidget->setMaximumSize(QSize(999999, 999999));
        QFont font;
        font.setPointSize(8);
        tabWidget->setFont(font);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabSwitch_boot = new QWidget();
        tabSwitch_boot->setObjectName(QString::fromUtf8("tabSwitch_boot"));
        sizePolicy.setHeightForWidth(tabSwitch_boot->sizePolicy().hasHeightForWidth());
        tabSwitch_boot->setSizePolicy(sizePolicy);
        tabSwitch_boot->setMaximumSize(QSize(1920, 1080));
        gridLayout_4 = new QGridLayout(tabSwitch_boot);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(tabSwitch_boot);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(223, 141));
        groupBox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        switchIntel = new QPushButton(groupBox);
        switchIntel->setObjectName(QString::fromUtf8("switchIntel"));
        switchIntel->setGeometry(QRect(15, 35, 84, 32));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(switchIntel->sizePolicy().hasHeightForWidth());
        switchIntel->setSizePolicy(sizePolicy2);
        switchIntel->setMinimumSize(QSize(84, 32));
        switchIntel->setMaximumSize(QSize(84, 32));
        switchIntel->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        switchIntel2 = new QPushButton(groupBox);
        switchIntel2->setObjectName(QString::fromUtf8("switchIntel2"));
        switchIntel2->setGeometry(QRect(15, 75, 84, 32));
        sizePolicy2.setHeightForWidth(switchIntel2->sizePolicy().hasHeightForWidth());
        switchIntel2->setSizePolicy(sizePolicy2);
        switchIntel2->setMinimumSize(QSize(84, 32));
        switchIntel2->setMaximumSize(QSize(84, 32));
        switchIntel2->setLayoutDirection(Qt::LeftToRight);
        switchIntel2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        switchNvidia = new QPushButton(groupBox);
        switchNvidia->setObjectName(QString::fromUtf8("switchNvidia"));
        switchNvidia->setGeometry(QRect(110, 35, 84, 71));
        sizePolicy2.setHeightForWidth(switchNvidia->sizePolicy().hasHeightForWidth());
        switchNvidia->setSizePolicy(sizePolicy2);
        switchNvidia->setMinimumSize(QSize(84, 71));
        switchNvidia->setMaximumSize(QSize(84, 71));
        switchNvidia->setLayoutDirection(Qt::LeftToRight);
        switchNvidia->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(tabSwitch_boot);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMinimumSize(QSize(122, 141));
        groupBox_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        driverStatus = new QLabel(groupBox_2);
        driverStatus->setObjectName(QString::fromUtf8("driverStatus"));
        driverStatus->setEnabled(true);
        driverStatus->setGeometry(QRect(-10, 50, 140, 30));
        sizePolicy2.setHeightForWidth(driverStatus->sizePolicy().hasHeightForWidth());
        driverStatus->setSizePolicy(sizePolicy2);
        driverStatus->setMinimumSize(QSize(140, 30));
        driverStatus->setMaximumSize(QSize(140, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Droid Sans Japanese"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::PreferDefault);
        driverStatus->setFont(font1);
        driverStatus->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        driverStatus->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(tabSwitch_boot);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        groupBox_3->setMinimumSize(QSize(122, 141));
        groupBox_3->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        bbswitchStatus = new QLabel(groupBox_3);
        bbswitchStatus->setObjectName(QString::fromUtf8("bbswitchStatus"));
        bbswitchStatus->setEnabled(true);
        bbswitchStatus->setGeometry(QRect(32, 50, 50, 30));
        sizePolicy2.setHeightForWidth(bbswitchStatus->sizePolicy().hasHeightForWidth());
        bbswitchStatus->setSizePolicy(sizePolicy2);
        bbswitchStatus->setMinimumSize(QSize(50, 30));
        bbswitchStatus->setMaximumSize(QSize(50, 30));
        bbswitchStatus->setFont(font1);
        bbswitchStatus->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        bbswitchStatus->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(23, 92, 71, 16));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setMinimumSize(QSize(71, 16));
        label_8->setMaximumSize(QSize(71, 16));
        QFont font2;
        font2.setPointSize(9);
        label_8->setFont(font2);
        label_8->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        gridLayout_4->addWidget(groupBox_3, 0, 2, 1, 1);

        commandout = new QTextBrowser(tabSwitch_boot);
        commandout->setObjectName(QString::fromUtf8("commandout"));
        sizePolicy.setHeightForWidth(commandout->sizePolicy().hasHeightForWidth());
        commandout->setSizePolicy(sizePolicy);
        commandout->setMinimumSize(QSize(84, 432));
        commandout->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        commandout->setLineWrapMode(QTextEdit::NoWrap);

        gridLayout_4->addWidget(commandout, 0, 3, 3, 1);

        groupBox_4 = new QGroupBox(tabSwitch_boot);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        sizePolicy1.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy1);
        groupBox_4->setMinimumSize(QSize(223, 141));
        groupBox_4->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        apply_bootdefault = new QPushButton(groupBox_4);
        apply_bootdefault->setObjectName(QString::fromUtf8("apply_bootdefault"));
        apply_bootdefault->setGeometry(QRect(10, 90, 84, 32));
        sizePolicy2.setHeightForWidth(apply_bootdefault->sizePolicy().hasHeightForWidth());
        apply_bootdefault->setSizePolicy(sizePolicy2);
        apply_bootdefault->setMinimumSize(QSize(84, 32));
        apply_bootdefault->setMaximumSize(QSize(84, 32));
        apply_bootdefault->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        radionvidia = new QRadioButton(groupBox_4);
        radionvidia->setObjectName(QString::fromUtf8("radionvidia"));
        radionvidia->setGeometry(QRect(80, 30, 65, 22));
        sizePolicy2.setHeightForWidth(radionvidia->sizePolicy().hasHeightForWidth());
        radionvidia->setSizePolicy(sizePolicy2);
        radionvidia->setMinimumSize(QSize(65, 22));
        radionvidia->setMaximumSize(QSize(105, 22));
        radionvidia->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        radiointel2 = new QRadioButton(groupBox_4);
        radiointel2->setObjectName(QString::fromUtf8("radiointel2"));
        radiointel2->setGeometry(QRect(10, 60, 60, 22));
        sizePolicy2.setHeightForWidth(radiointel2->sizePolicy().hasHeightForWidth());
        radiointel2->setSizePolicy(sizePolicy2);
        radiointel2->setMinimumSize(QSize(60, 22));
        radiointel2->setMaximumSize(QSize(105, 22));
        radiointel2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        radiolast = new QRadioButton(groupBox_4);
        radiolast->setObjectName(QString::fromUtf8("radiolast"));
        radiolast->setGeometry(QRect(80, 60, 65, 22));
        sizePolicy2.setHeightForWidth(radiolast->sizePolicy().hasHeightForWidth());
        radiolast->setSizePolicy(sizePolicy2);
        radiolast->setMinimumSize(QSize(65, 22));
        radiolast->setMaximumSize(QSize(105, 22));
        radiolast->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        radiointel = new QRadioButton(groupBox_4);
        radiointel->setObjectName(QString::fromUtf8("radiointel"));
        radiointel->setGeometry(QRect(10, 30, 60, 22));
        sizePolicy2.setHeightForWidth(radiointel->sizePolicy().hasHeightForWidth());
        radiointel->setSizePolicy(sizePolicy2);
        radiointel->setMinimumSize(QSize(60, 22));
        radiointel->setMaximumSize(QSize(105, 22));
        radiointel->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        gridLayout_4->addWidget(groupBox_4, 1, 0, 1, 1);

        groupBox_5 = new QGroupBox(tabSwitch_boot);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        sizePolicy1.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy1);
        groupBox_5->setMinimumSize(QSize(250, 141));
        groupBox_5->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        restore_nextboot = new QPushButton(groupBox_5);
        restore_nextboot->setObjectName(QString::fromUtf8("restore_nextboot"));
        restore_nextboot->setGeometry(QRect(118, 90, 84, 32));
        sizePolicy2.setHeightForWidth(restore_nextboot->sizePolicy().hasHeightForWidth());
        restore_nextboot->setSizePolicy(sizePolicy2);
        restore_nextboot->setMinimumSize(QSize(84, 32));
        restore_nextboot->setMaximumSize(QSize(84, 32));
        restore_nextboot->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        combo_forceboot = new QComboBox(groupBox_5);
        combo_forceboot->setObjectName(QString::fromUtf8("combo_forceboot"));
        combo_forceboot->setGeometry(QRect(20, 50, 181, 32));
        sizePolicy2.setHeightForWidth(combo_forceboot->sizePolicy().hasHeightForWidth());
        combo_forceboot->setSizePolicy(sizePolicy2);
        combo_forceboot->setMinimumSize(QSize(181, 32));
        combo_forceboot->setMaximumSize(QSize(181, 32));
        combo_forceboot->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        force_boot_stat = new QLabel(groupBox_5);
        force_boot_stat->setObjectName(QString::fromUtf8("force_boot_stat"));
        force_boot_stat->setGeometry(QRect(20, 25, 141, 20));
        sizePolicy2.setHeightForWidth(force_boot_stat->sizePolicy().hasHeightForWidth());
        force_boot_stat->setSizePolicy(sizePolicy2);
        force_boot_stat->setMinimumSize(QSize(141, 20));
        force_boot_stat->setMaximumSize(QSize(141, 20));
        QFont font3;
        font3.setPointSize(12);
        force_boot_stat->setFont(font3);
        force_boot_stat->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        apply_forceboot = new QPushButton(groupBox_5);
        apply_forceboot->setObjectName(QString::fromUtf8("apply_forceboot"));
        apply_forceboot->setGeometry(QRect(20, 90, 84, 32));
        sizePolicy2.setHeightForWidth(apply_forceboot->sizePolicy().hasHeightForWidth());
        apply_forceboot->setSizePolicy(sizePolicy2);
        apply_forceboot->setMinimumSize(QSize(84, 32));
        apply_forceboot->setMaximumSize(QSize(84, 32));
        apply_forceboot->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        gridLayout_4->addWidget(groupBox_5, 1, 1, 1, 2);

        groupBox_6 = new QGroupBox(tabSwitch_boot);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        sizePolicy1.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy1);
        groupBox_6->setMinimumSize(QSize(223, 144));
        groupBox_6->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        serv_stat = new QLabel(groupBox_6);
        serv_stat->setObjectName(QString::fromUtf8("serv_stat"));
        serv_stat->setGeometry(QRect(45, 91, 128, 30));
        sizePolicy2.setHeightForWidth(serv_stat->sizePolicy().hasHeightForWidth());
        serv_stat->setSizePolicy(sizePolicy2);
        serv_stat->setMinimumSize(QSize(128, 30));
        serv_stat->setMaximumSize(QSize(128, 30));
        QFont font4;
        font4.setPointSize(20);
        serv_stat->setFont(font4);
        serv_stat->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        serviceRestore = new QPushButton(groupBox_6);
        serviceRestore->setObjectName(QString::fromUtf8("serviceRestore"));
        serviceRestore->setGeometry(QRect(120, 30, 88, 34));
        sizePolicy2.setHeightForWidth(serviceRestore->sizePolicy().hasHeightForWidth());
        serviceRestore->setSizePolicy(sizePolicy2);
        serviceRestore->setMinimumSize(QSize(88, 34));
        serviceRestore->setMaximumSize(QSize(88, 34));
        serviceRestore->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(90, 70, 58, 18));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setMinimumSize(QSize(58, 18));
        label_10->setMaximumSize(QSize(58, 18));
        label_10->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        serviceDisable = new QPushButton(groupBox_6);
        serviceDisable->setObjectName(QString::fromUtf8("serviceDisable"));
        serviceDisable->setGeometry(QRect(10, 30, 88, 34));
        sizePolicy2.setHeightForWidth(serviceDisable->sizePolicy().hasHeightForWidth());
        serviceDisable->setSizePolicy(sizePolicy2);
        serviceDisable->setMinimumSize(QSize(88, 34));
        serviceDisable->setMaximumSize(QSize(88, 34));
        serviceDisable->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        gridLayout_4->addWidget(groupBox_6, 2, 0, 1, 1);

        groupBox_7 = new QGroupBox(tabSwitch_boot);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        sizePolicy1.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy1);
        groupBox_7->setMinimumSize(QSize(250, 144));
        groupBox_7->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        logcleaner_but = new QPushButton(groupBox_7);
        logcleaner_but->setObjectName(QString::fromUtf8("logcleaner_but"));
        logcleaner_but->setGeometry(QRect(55, 88, 131, 34));
        sizePolicy2.setHeightForWidth(logcleaner_but->sizePolicy().hasHeightForWidth());
        logcleaner_but->setSizePolicy(sizePolicy2);
        logcleaner_but->setMinimumSize(QSize(131, 34));
        logcleaner_but->setMaximumSize(QSize(131, 34));
        logcleaner_but->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        unsetButton = new QPushButton(groupBox_7);
        unsetButton->setObjectName(QString::fromUtf8("unsetButton"));
        unsetButton->setGeometry(QRect(55, 30, 131, 34));
        sizePolicy2.setHeightForWidth(unsetButton->sizePolicy().hasHeightForWidth());
        unsetButton->setSizePolicy(sizePolicy2);
        unsetButton->setMinimumSize(QSize(131, 34));
        unsetButton->setMaximumSize(QSize(131, 34));
        unsetButton->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        gridLayout_4->addWidget(groupBox_7, 2, 1, 1, 2);

        tabWidget->addTab(tabSwitch_boot, QString());
        tabStatus = new QWidget();
        tabStatus->setObjectName(QString::fromUtf8("tabStatus"));
        tabStatus->setMaximumSize(QSize(99999, 99999));
        gridLayout = new QGridLayout(tabStatus);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        logViewer = new QTextBrowser(tabStatus);
        logViewer->setObjectName(QString::fromUtf8("logViewer"));

        gridLayout->addWidget(logViewer, 0, 0, 2, 1);

        tabWidget->addTab(tabStatus, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(575, 75));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        cred = new QLabel(frame);
        cred->setObjectName(QString::fromUtf8("cred"));
        cred->setGeometry(QRect(470, 10, 100, 16));
        sizePolicy2.setHeightForWidth(cred->sizePolicy().hasHeightForWidth());
        cred->setSizePolicy(sizePolicy2);
        cred->setMinimumSize(QSize(100, 0));
        cred->setFont(font);
        git_link = new QLabel(frame);
        git_link->setObjectName(QString::fromUtf8("git_link"));
        git_link->setGeometry(QRect(470, 30, 90, 16));
        sizePolicy2.setHeightForWidth(git_link->sizePolicy().hasHeightForWidth());
        git_link->setSizePolicy(sizePolicy2);
        git_link->setMinimumSize(QSize(90, 0));
        git_link->setFont(font);
        git_link->setOpenExternalLinks(true);
        git_link->setTextInteractionFlags(Qt::TextBrowserInteraction);
        icon = new QLabel(frame);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setGeometry(QRect(10, 7, 60, 60));
        icon->setMinimumSize(QSize(60, 60));
        icon->setPixmap(QPixmap(QString::fromUtf8(":/icon/icon/nvidia.png")));
        icon->setScaledContents(true);
        ver_lab_str = new QLabel(frame);
        ver_lab_str->setObjectName(QString::fromUtf8("ver_lab_str"));
        ver_lab_str->setGeometry(QRect(80, 10, 367, 55));
        sizePolicy2.setHeightForWidth(ver_lab_str->sizePolicy().hasHeightForWidth());
        ver_lab_str->setSizePolicy(sizePolicy2);
        ver_lab_str->setMinimumSize(QSize(350, 55));
        QFont font5;
        font5.setPointSize(30);
        ver_lab_str->setFont(font5);

        verticalLayout->addWidget(frame);

        label_versiondesc = new QLabel(tab);
        label_versiondesc->setObjectName(QString::fromUtf8("label_versiondesc"));
        sizePolicy1.setHeightForWidth(label_versiondesc->sizePolicy().hasHeightForWidth());
        label_versiondesc->setSizePolicy(sizePolicy1);
        label_versiondesc->setMinimumSize(QSize(575, 24));
        QFont font6;
        font6.setPointSize(13);
        label_versiondesc->setFont(font6);

        verticalLayout->addWidget(label_versiondesc);

        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setMinimumSize(QSize(575, 24));
        label_12->setFont(font6);

        verticalLayout->addWidget(label_12);

        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setMinimumSize(QSize(575, 24));
        QFont font7;
        font7.setPointSize(10);
        label_13->setFont(font7);

        verticalLayout->addWidget(label_13);

        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setMinimumSize(QSize(575, 24));
        label_11->setFont(font6);

        verticalLayout->addWidget(label_11);

        info_usagebox = new QTextBrowser(tab);
        info_usagebox->setObjectName(QString::fromUtf8("info_usagebox"));
        info_usagebox->setMinimumSize(QSize(575, 0));

        verticalLayout->addWidget(info_usagebox);

        tabWidget->addTab(tab, QString());

        gridLayout_2->addWidget(tabWidget, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setEnabled(true);
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SUSEPrimeQt", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Switch", 0, QApplication::UnicodeUTF8));
        switchIntel->setText(QApplication::translate("MainWindow", "INTEL", 0, QApplication::UnicodeUTF8));
        switchIntel2->setText(QApplication::translate("MainWindow", "INTEL 2", 0, QApplication::UnicodeUTF8));
        switchNvidia->setText(QApplication::translate("MainWindow", "NVIDIA", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Current driver:", 0, QApplication::UnicodeUTF8));
        driverStatus->setText(QApplication::translate("MainWindow", "driver", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Nvidia card is", 0, QApplication::UnicodeUTF8));
        bbswitchStatus->setText(QApplication::translate("MainWindow", "OFF", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "[BBSWITCH]", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Boot default", 0, QApplication::UnicodeUTF8));
        apply_bootdefault->setText(QApplication::translate("MainWindow", "Apply", 0, QApplication::UnicodeUTF8));
        radionvidia->setText(QApplication::translate("MainWindow", "N&VIDIA", 0, QApplication::UnicodeUTF8));
        radiointel2->setText(QApplication::translate("MainWindow", "INTEL&2 ", 0, QApplication::UnicodeUTF8));
        radiolast->setText(QApplication::translate("MainWindow", "&LAST", 0, QApplication::UnicodeUTF8));
        radiointel->setText(QApplication::translate("MainWindow", "&INTEL", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Force next boot", 0, QApplication::UnicodeUTF8));
        restore_nextboot->setText(QApplication::translate("MainWindow", "Restore", 0, QApplication::UnicodeUTF8));
        combo_forceboot->clear();
        combo_forceboot->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "INTEL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "INTEL2 [Opensource driver]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "NVIDIA", 0, QApplication::UnicodeUTF8)
        );
        force_boot_stat->setText(QApplication::translate("MainWindow", "Current: Not Set", 0, QApplication::UnicodeUTF8));
        apply_forceboot->setText(QApplication::translate("MainWindow", "Apply", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Service", 0, QApplication::UnicodeUTF8));
        serv_stat->setText(QApplication::translate("MainWindow", "DISABLED", 0, QApplication::UnicodeUTF8));
        serviceRestore->setText(QApplication::translate("MainWindow", "Restore", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Status:", 0, QApplication::UnicodeUTF8));
        serviceDisable->setText(QApplication::translate("MainWindow", "Disable", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Advanced", 0, QApplication::UnicodeUTF8));
        logcleaner_but->setText(QApplication::translate("MainWindow", "Logfile Clean", 0, QApplication::UnicodeUTF8));
        unsetButton->setText(QApplication::translate("MainWindow", "Reset settings", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabSwitch_boot), QApplication::translate("MainWindow", "Switch and Boot settings", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabStatus), QApplication::translate("MainWindow", "Log", 0, QApplication::UnicodeUTF8));
        cred->setText(QApplication::translate("MainWindow", "Coded by: simopil", 0, QApplication::UnicodeUTF8));
        git_link->setText(QApplication::translate("MainWindow", "<a href=\"https://github.com/simopil/suseprimeqt\">Open on Github</a>", 0, QApplication::UnicodeUTF8));
        icon->setText(QString());
        ver_lab_str->setText(QApplication::translate("MainWindow", "SUSEPrimeqt  vers", 0, QApplication::UnicodeUTF8));
        label_versiondesc->setText(QApplication::translate("MainWindow", "SUPrivides GUI for suse-prime x, SUSEPrime version x needed", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "- bbswitch also strictly recommended for managing nvidia power status", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "* If intel2 driver seems do anything, it means that you haven't intel open source driver installed", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Here a full command-line version usage and description", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "About Info", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
