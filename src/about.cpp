#include "about.h"
#include "ui_about.h"
#include <QProcess>
#include <QTranslator>

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    ui->retranslateUi(this);
    QProcess get_usage;
    get_usage.start("prime-select");
    get_usage.waitForFinished(-1);
    QString output = get_usage.readAllStandardOutput();
    ui->info_usagebox->setText(output);
    ui->ver_lab_str->setText("SUSEPrimeQt  0.6.4");
    ui->label_versiondesc->setText(tr("- Provides a simple GUI for SUSEPrime 0.6. Needs suse-prime >= 0.6"));
    QString translation = QString(":/lang/%1/%1.qm").arg(QLocale::system().name());
    QTranslator translator;
    bool transl_exists = translator.load(translation);
    if(transl_exists == false) ui->transl_about->hide();
}
about::~about()
{
    delete ui;
}
