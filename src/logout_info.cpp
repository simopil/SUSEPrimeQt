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

void logout_info::on_logout_abort_but_clicked()
{
    QProcess* abort_switch = new QProcess();
    abort_switch->start("pkexec killall prime-select");
    this->close();
}

void logout_info::on_logout_but_clicked()
{
    this->close();
}
