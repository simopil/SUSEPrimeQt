#ifndef LOGOUT_INFO_H
#define LOGOUT_INFO_H

#include <QDialog>

namespace Ui {
class logout_info;
}

class logout_info : public QDialog
{
    Q_OBJECT

public:
    explicit logout_info(QWidget *parent = nullptr);
    ~logout_info();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::logout_info *ui;
};

#endif // LOGOUT_INFO_H
