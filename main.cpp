#include "drukknop.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//QTimer *timer = new QTimer(this);
    //timer->start(10);
    Drukknop w;

    w.show();


    return a.exec();
}
