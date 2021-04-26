#ifndef SWETAA_FORM_H
#define SWETAA_FORM_H
#include "swetaa_from2.h"
#include <QMainWindow>
#include<QFileDialog>
QT_BEGIN_NAMESPACE
namespace Ui { class swetaa_form; }
QT_END_NAMESPACE

class swetaa_form : public QMainWindow
{
    Q_OBJECT

public:
    swetaa_form(QWidget *parent = nullptr);
    ~swetaa_form();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_6_returnPressed();

private:
    Ui::swetaa_form *ui;
     swetaa_from2 *swetaaform2;
};
#endif // SWETAA_FORM_H
