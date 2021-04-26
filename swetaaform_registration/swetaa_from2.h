#ifndef SWETAA_FROM2_H
#define SWETAA_FROM2_H

#include <QMainWindow>

namespace Ui {
class swetaa_from2;
}

class swetaa_from2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit swetaa_from2(QWidget *parent = nullptr);
    ~swetaa_from2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_lineEdit_returnPressed();

private:
    Ui::swetaa_from2 *ui;
};

#endif // SWETAA_FROM2_H
