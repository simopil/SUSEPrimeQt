#include "about.h"
#include "ui_about.h"
#include <QProcess>

static QString SUSEPrimeqt_versionstring = "SUSEPrimeQt  0.6.2";
static QString SUSEPrime_versionstring = "- Provides a simple GUI for SUSEPrime 0.6. Needs suse-prime >= 0.6";

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    QProcess get_usage;
    get_usage.start("prime-select");
    get_usage.waitForFinished(-1);
    QString output = get_usage.readAllStandardOutput();
    ui->info_usagebox->setText(output);
    ui->ver_lab_str->setText(SUSEPrimeqt_versionstring);
    ui->label_versiondesc->setText(SUSEPrime_versionstring);
}

about::~about()
{
    delete ui;
}
