#include "swetaa_from2.h"
#include "ui_swetaa_from2.h"
#include<QFileDialog>
#include<QMessageBox>
#include<QDebug>
swetaa_from2::swetaa_from2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::swetaa_from2)
{
    ui->setupUi(this);
}

swetaa_from2::~swetaa_from2()
{
    delete ui;
}

void swetaa_from2::on_pushButton_clicked()
{
    QString picpath=QFileDialog::getOpenFileName(this,tr("Open file"),"C://","PDF File(*.pdf)");

}

void swetaa_from2::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Swetaa_212218104169","Do you want to submit the form?",QMessageBox::Ok|QMessageBox::Cancel);
        if(reply==QMessageBox::Ok)
        {
            QMessageBox::information(this,"Swetaa_212218104169","Submitted successfully!");
        }
        if(reply==QMessageBox::Cancel)
        {
            qDebug()<<"No Submission is Made ";
        }
}

void swetaa_from2::on_pushButton_3_clicked()
{
     QMessageBox::StandardButton reply=QMessageBox::question(this,"Swetaa_212218104169","Do you want to cancel the form?",QMessageBox::Ok|QMessageBox::Cancel);
    if(reply==QMessageBox::Ok)
    {
        qDebug()<<"You cancelled the form ";
    }
    if(reply==QMessageBox::Cancel)
    {
        qDebug()<<"Returned with no Information... ";
    }
}

void swetaa_from2::on_lineEdit_returnPressed()
{
    QRegularExpression re("^[a-zA-Z0-9+_.-]+@[a-zA-Z0-9.-]+$");
       QRegularExpressionMatch match = re.match(ui->lineEdit->text());
       bool hasMatch = match.hasMatch();
       if (!hasMatch)
       {
          QMessageBox::information(this,"Swetaa_212218104169","Invalid Format");
       }
}
