#ifndef DRUKKNOP_H
#define DRUKKNOP_H

#include <QMainWindow>
#include <QTimer>
#include <QFile>

namespace Ui {
class Drukknop;
}

class Drukknop : public QMainWindow
{
    Q_OBJECT

public:
    explicit Drukknop(QWidget *parent = 0);
    ~Drukknop();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();

    void on_lcdNumber_overflow();
public slots:
    void timerHandler();

private:
    Ui::Drukknop *ui;
    int teller=0;
   // char * myfifo ="/tmp/testpipe";

    int fiffi,lengfiffi;
    char fifbuf[80];

       //  ui->textBrowser->setText(in.readAll());
       QTimer *timer;

//QFile file("/tmp/testpipe");
//QTimer *timer = new QTimer(this);
 // connect(timer, SIGNAL(timeout()), this, SLOT(timerHandler()));
 //   connect(timer, SIGNAL(timeout()), this, SLOT(update()));
 //   timer->start(1000);
// timer->start(10);
};

#endif // DRUKKNOP_H
