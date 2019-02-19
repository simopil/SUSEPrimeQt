#include "mainwindow.h"
#include "notinst_error.h"
#include <QApplication>
#include <QProcess>
#include <QTranslator>
#include <QLocale>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    //translations
    QString translation = QString(":/lang/%1.qm").arg(QLocale::system().name());
    QTranslator translator;
    bool transl_exists = translator.load(translation);
    if(transl_exists) a.installTranslator(&translator);
    MainWindow w;
    //SUSEPrime_check
    QProcess get_usage;
    get_usage.start("prime-select");
    get_usage.waitForFinished(-1);
    QString output = get_usage.readAllStandardOutput();
    if(output.isEmpty())
    {
        notinst_error dialog;
        dialog.setModal(true);
        dialog.exec();
        //ERROR_suseprime-not-installed
        return 1;
    }
    w.show();
    return a.exec();
}
