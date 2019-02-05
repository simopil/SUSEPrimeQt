#include "mainwindow.h"
#include "notinst_error.h"
#include <QApplication>
#include <QProcess>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
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
