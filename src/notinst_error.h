#ifndef NOTINST_ERROR_H
#define NOTINST_ERROR_H

#include <QDialog>

namespace Ui {
class notinst_error;
}

class notinst_error : public QDialog
{
    Q_OBJECT

public:
    explicit notinst_error(QWidget *parent = nullptr);
    ~notinst_error();

private slots:
    void on_error_exit_but_clicked();

private:
    Ui::notinst_error *ui;
};

#endif // NOTINST_ERROR_H
