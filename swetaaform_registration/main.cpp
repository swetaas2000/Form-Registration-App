#include "swetaa_form.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    swetaa_form w;
    w.show();
    return a.exec();
}
