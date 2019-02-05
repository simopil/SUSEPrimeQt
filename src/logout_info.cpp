#include "logout_info.h"
#include "ui_logout_info.h"
#include <QProcess>

logout_info::logout_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logout_info)
{
    ui->setupUi(this);
}

logout_info::~logout_info()
{
    delete ui;
}

void logout_info::on_pushButton_clicked()
{
    this->close();
}

void logout_info::on_pushButton_2_clicked()
{
    QProcess* abort_switch = new QProcess();
    abort_switch->start("pkexec killall prime-select");
    this->close();
}
