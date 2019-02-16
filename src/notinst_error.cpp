#include "notinst_error.h"
#include "ui_notinst_error.h"

notinst_error::notinst_error(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::notinst_error)
{
    ui->setupUi(this);
    ui->retranslateUi(this);
}

notinst_error::~notinst_error()
{
    delete ui;
}

void notinst_error::on_error_exit_but_clicked()
{
    close();
}
