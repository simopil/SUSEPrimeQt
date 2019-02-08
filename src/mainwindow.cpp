#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "logout_info.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QProcess>
#include <QFileInfo>
#include <QProcess>

static QString SUSEPrimeqt_versionstring = "SUSEPrimeQt  0.6.1";
static QString SUSEPrime_versionstring = "- Provides a simple GUI for SUSEPrime 0.6. Needs suse-prime >= 0.6";

static bool intel2_exist;
static bool bbswitch_exists;

using namespace std;


bool fileExists(QString path) {
    QFileInfo check_file(path);
    // check if file exists and if yes: Is it really a file and no directory?
    if (check_file.exists() && check_file.isFile()) {
        return true;
    } else {
        return false;
    }
}

void MainWindow::refresh()
{
    //logfile
    if (fileExists("/var/log/prime-select.log")) {
        QFile logfile("/var/log/prime-select.log");
        logfile.open(QIODevice::ReadOnly);
        QTextStream streamlog(&logfile);
        QString log = streamlog.readAll();
        logfile.close();
        ui->logViewer->setLineWrapMode(QTextEdit::NoWrap);
        ui->logViewer->setText(log);
        ui->logcleaner_but->setEnabled(true);
    } else {
        ui->logViewer->setText("logfile /var/log/prime-select.log NOT exist! Probably cleaned by user");
        ui->logcleaner_but->setEnabled(false);
    }
    //bbswitch
    if(bbswitch_exists) {
        if (fileExists("/proc/acpi/bbswitch")) {
            QFile bbswitch("/proc/acpi/bbswitch");
            bbswitch.open(QIODevice::ReadOnly);
            QTextStream bbswitchstream(&bbswitch);
            QString bbstatus = bbswitch.readAll();
            if (bbstatus.contains("ON", Qt::CaseSensitive)) {
                ui->bbswitchStatus->setText("<font color=\"green\">ON</font>");
            }
            else if (bbstatus.contains("OFF", Qt::CaseSensitive)) {
                ui->bbswitchStatus->setText("<font color=\"black\">OFF</font>");
            } else {
                ui->bbswitchStatus->setText("<font color=\"red\">ERR</font>");
            }
        } else {
            ui->bbswitchStatus->setText("<font color=\"red\">ERR</font>");
        }
    }
    //current-driver
    if(fileExists("/etc/prime/current_type")) {
        QFile current_drv("/etc/prime/current_type");
        current_drv.open(QIODevice::ReadOnly);
        QTextStream current_drvstream(&current_drv);
        QString driver;
        driver = current_drvstream.readAll();
        ui->driverStatus->setText(driver);
        QString currmsg = "driver already in use";
        if( driver.contains("intel2", Qt::CaseSensitive) )      { ui->switchIntel2->setEnabled(false); ui->switchIntel2->setToolTip("intel2 driver already in use"); }
        else if( driver.contains("intel", Qt::CaseSensitive) )  { ui->switchIntel->setEnabled(false); ui->switchIntel->setToolTip("intel driver already in use"); }
        else if( driver.contains("nvidia", Qt::CaseSensitive) ) { ui->switchNvidia->setEnabled(false); ui->switchNvidia->setToolTip("nvidia driver already in use"); }
    } else {
        ui->driverStatus->setText("<font color=\"red\">NOT SET</font>");
    }
    //boot-default
    if (fileExists("/etc/prime/boot")) {
        QFile boot("/etc/prime/boot");
        boot.open(QIODevice::ReadOnly);
        QTextStream bootstream(&boot);
        QString bootpref = bootstream.readAll();
        if (bootpref.contains("intel", Qt::CaseSensitive)) {
            ui->radiointel->setStyleSheet("QRadioButton { color: red }");
            ui->radiointel->setEnabled(false);
            } else {
            ui->radiointel->setStyleSheet(styleSheet());
            ui->radiointel->setEnabled(true);
        }
        if (bootpref.contains("intel2", Qt::CaseSensitive)) {
            ui->radiointel2->setStyleSheet("QRadioButton { color: red }");
            ui->radiointel2->setEnabled(false);
            } else {
            ui->radiointel2->setStyleSheet(styleSheet());
            if(intel2_exist) ui->radiointel2->setEnabled(true);
        }
        if (bootpref.contains("nvidia", Qt::CaseSensitive)) {
            ui->radionvidia->setStyleSheet("QRadioButton { color: red }");
            ui->radionvidia->setEnabled(false);
            } else {
            ui->radionvidia->setStyleSheet(styleSheet());
            ui->radionvidia->setEnabled(true);
        }
        if (bootpref.contains("last", Qt::CaseSensitive)) {
            ui->radiolast->setStyleSheet("QRadioButton { color: red }");
            ui->radiolast->setEnabled(false);
            } else {
            ui->radiolast->setStyleSheet(styleSheet());
            ui->radiolast->setEnabled(true);
        }
     } else {
        ui->radiolast->setStyleSheet("QRadioButton { color: red }");
        ui->radiointel->setStyleSheet(styleSheet());
        ui->radiointel2->setStyleSheet(styleSheet());
        ui->radionvidia->setStyleSheet(styleSheet());
     }
    //boot-force
    if (fileExists("/etc/prime/forced_boot")) {
        QFile frcboot("/etc/prime/forced_boot");
        frcboot.open(QIODevice::ReadOnly);
        QTextStream bootfrcstream(&frcboot);
        QString frcdrv = bootfrcstream.readAll();
        if (frcdrv.contains("intel2", Qt::CaseSensitive))  { ui->force_boot_stat->setText("<font color=\"red\">Current: INTEL2</font>"); }
        else if (frcdrv.contains("intel", Qt::CaseSensitive))        { ui->force_boot_stat->setText("<font color=\"red\">Current: INTEL</font>");}
        else if (frcdrv.contains("nvidia", Qt::CaseSensitive))  { ui->force_boot_stat->setText("<font color=\"red\">Current: NVIDIA</font>"); }
        ui->restore_nextboot->setEnabled(true);
    }else{
        ui->force_boot_stat->setText("<font color=\"black\">Current: NOT SET</font>");
        ui->restore_nextboot->setEnabled(false);
    }
    //service_status
    if (fileExists("/etc/systemd/system/multi-user.target.wants/prime-boot-selector.service")) {
        ui->serv_stat->setText("<font color=\"green\">ENABLED</font>");
        ui->serviceDisable->setEnabled(true);
    } else {
        ui->serv_stat->setText("<font color=\"red\">DISABLED</font>");
        ui->serviceDisable->setEnabled(false);
    }
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->commandout->append("Command line output:");
    ui->commandout->append("");
    QProcess get_usage;
    get_usage.start("prime-select");
    get_usage.waitForFinished(-1);
    QString output = get_usage.readAllStandardOutput();
    ui->info_usagebox->setText(output);
    ui->ver_lab_str->setText(SUSEPrimeqt_versionstring);
    ui->label_versiondesc->setText(SUSEPrime_versionstring);
    //xf86-video-intel_check
    QProcess intel2_check;
    intel2_check.start("rpm -qi xf86-video-intel");
    intel2_check.waitForFinished(-1);
    QString intel2_check_string = intel2_check.readAllStandardOutput();
    if(!intel2_check_string.contains("Name"))
    {
        ui->switchIntel2->setEnabled(false);
        ui->switchIntel2->setToolTip("package xf86-video-intel is not installed");
        ui->radiointel2->setEnabled(false);
        ui->radiointel2->setToolTip("package xf86-video-intel is not installed");
        ui->combo_forceboot->removeItem(1);
        intel2_exist = false;
    }
    //bbswitch_check
    QProcess bbswitch_check;
    bbswitch_check.start("rpm -qi bbswitch");
    bbswitch_check.waitForFinished(-1);
    QString bbswitch_check_string = bbswitch_check.readAllStandardOutput();
    if(!bbswitch_check_string.contains("Name"))
    {
        ui->bbswitch_widget->setEnabled(false);
        ui->bbswitchStatus->deleteLater();
        ui->bbs_label->deleteLater();
        ui->bbswitch_widget->setToolTip("Nvidia card will never powered off. This may cause overheating and low battery life. To have this feature, please install bbswitch package");
        bbswitch_exists = false;
    } else ui->bbswitch_notinst_label->deleteLater();
    //tooltips
    ui->bootdef_widget->setToolTip("Set the default card at boot or remember last used");
    ui->nextboot_widget->setToolTip("Select card only for next boot, default card setting will not change");
    ui->service_widget->setToolTip("Manage the service. Remember SUSEPrime needs service enabled to correctly work");
    ui->unsetButton->setToolTip("Disable service and reset configuration of SUSEPrime");
    //refresh_and_set_tab
    MainWindow::refresh();
    ui->tabWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    Q_UNUSED(index);
    MainWindow::refresh();
}

void MainWindow::on_switchNvidia_clicked()
{
    QProcess* logout_waiter = new QProcess();
    logout_waiter->start("pkexec prime-select nvidia");
    logout_waiter->waitForFinished(-1);
    QString output = logout_waiter->readAllStandardOutput();
    if(output.isEmpty()) output = logout_waiter->readAllStandardError();
    ui->commandout->append(output);
    logout_info dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_switchIntel_clicked()
{
    QProcess* logout_waiter = new QProcess();
    logout_waiter->start("pkexec prime-select intel");
    logout_waiter->waitForFinished(-1);
    QString output = logout_waiter->readAllStandardOutput();
    if(output.isEmpty()) output = logout_waiter->readAllStandardError();
    ui->commandout->append(output);
    logout_info dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_switchIntel2_clicked()
{
    QProcess* logout_waiter = new QProcess();
    logout_waiter->start("pkexec prime-select intel2");
    logout_waiter->waitForFinished(-1);
    QString output = logout_waiter->readAllStandardOutput();
    if(output.isEmpty()) output = logout_waiter->readAllStandardError();
    ui->commandout->append(output);
    logout_info dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_unsetButton_clicked()
{
    QProcess* unset_command = new QProcess();
    unset_command->start("pkexec prime-select unset");
    unset_command->waitForFinished(-1);
    MainWindow::refresh();
}

void MainWindow::on_apply_bootdefault_clicked()
{
    QProcess* bootdef_cmd = new QProcess();
    if(ui->radiointel->isChecked()) bootdef_cmd->start("pkexec prime-select boot intel");
    else if(ui->radiointel2->isChecked()) bootdef_cmd->start("pkexec prime-select boot intel2");
    else if(ui->radionvidia->isChecked()) bootdef_cmd->start("pkexec prime-select boot nvidia");
    else if(ui->radiolast->isChecked()) bootdef_cmd->start("pkexec prime-select boot last");
    bootdef_cmd->waitForFinished(-1);
    QString output = bootdef_cmd->readAllStandardOutput();
    if(output.isEmpty()) output = bootdef_cmd->readAllStandardError();
    ui->commandout->append(output);
    MainWindow::refresh();
}

void MainWindow::on_apply_forceboot_clicked()
{
    QProcess* bootfrc_cmd = new QProcess();
    QString forceboot = ui->combo_forceboot->currentText();
    if( forceboot.contains("INTEL2") ) bootfrc_cmd->start("pkexec prime-select next-boot intel2");
    else if( forceboot.contains("INTEL") ) bootfrc_cmd->start("pkexec prime-select next-boot intel");
    else if( forceboot.contains("NVIDIA") ) bootfrc_cmd->start("pkexec prime-select next-boot nvidia");
    bootfrc_cmd->waitForFinished(-1);
    QString output = bootfrc_cmd->readAllStandardOutput();
    if(output.isEmpty()) output = bootfrc_cmd->readAllStandardError();
    ui->commandout->append(output);
    MainWindow::refresh();
}

void MainWindow::on_restore_nextboot_clicked()
{
    QProcess* bootrest_cmd = new QProcess();
    bootrest_cmd->start("pkexec prime-select next-boot abort");
    bootrest_cmd->waitForFinished(-1);
    QString output = bootrest_cmd->readAllStandardOutput();
    if(output.isEmpty()) output = bootrest_cmd->readAllStandardError();
    ui->commandout->append(output);
    MainWindow::refresh();
}

void MainWindow::on_serviceDisable_clicked()
{
    if (fileExists("/etc/systemd/system/multi-user.target.wants/prime-boot-selector.service")) {
        QProcess* serv_dis = new QProcess();
        serv_dis->start("pkexec prime-select service disable");
        serv_dis->waitForFinished(-1);
        QString output = serv_dis->readAllStandardOutput();
        if(output.isEmpty()) output = serv_dis->readAllStandardError();
        ui->commandout->append(output);
        MainWindow::refresh();
    }
}

void MainWindow::on_serviceRestore_clicked()
{
    QProcess* serv_res = new QProcess();
    serv_res->start("pkexec prime-select service restore");
    serv_res->waitForFinished(-1);
    QString output = serv_res->readAllStandardOutput();
    if(output.isEmpty()) output = serv_res->readAllStandardError();
    ui->commandout->append(output);
    MainWindow::refresh();
}

void MainWindow::on_logcleaner_but_clicked()
{
    QProcess* log_cleaner = new QProcess();
    log_cleaner->start("pkexec prime-select log-clean");
    log_cleaner->waitForFinished(-1);
    QString output = log_cleaner->readAllStandardOutput();
    if(output.isEmpty()) output = log_cleaner->readAllStandardError();
    ui->commandout->append(output);
    MainWindow::refresh();
}
