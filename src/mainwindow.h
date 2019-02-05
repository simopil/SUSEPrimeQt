#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_tabWidget_currentChanged(int index);

    void on_switchNvidia_clicked();

    void on_switchIntel_clicked();

    void on_switchIntel2_clicked();

    void on_unsetButton_clicked();

    void on_apply_bootdefault_clicked();

    void on_apply_forceboot_clicked();

    void on_restore_nextboot_clicked();

    void on_serviceDisable_clicked();

    void on_serviceRestore_clicked();

    void on_logcleaner_but_clicked();

private:
    Ui::MainWindow *ui;
    void refresh();
};

#endif // MAINWINDOW_H
