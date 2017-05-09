#include "drukknop.h"
#include "ui_drukknop.h"
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <fcntl.h>
#include <termios.h>
#include <errno.h>
#include <qmessagebox.h>
#include <qtextstream.h>


Drukknop::Drukknop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Drukknop)
{

    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timerHandler()));
    timer->start(5000);

}

Drukknop::~Drukknop()
{
    delete ui;
}

void Drukknop::timerHandler()
    {

    QFile file("/tmp/testpipe");
   // teller++;
         //put your code to display message her

           if(!file.open(QIODevice::ReadOnly)) {
                  QMessageBox::information(0, "error", file.errorString());
               }
       QTextStream in(&file);
       this->ui->textBrowser->clear();
             this->ui->textBrowser->setText(in.readAll());
         file.close();
         system("emptypipe");
   // this->ui->textBrowser->setText("test");
    }


void Drukknop::on_pushButton_clicked()
{
system("radio1");

//fiffi = open(myfifo, O_RDONLY);
//lengfiffi = read(fiffi, fifbuf, 80);
//close(fiffi);
//this->ui->label->setText(QApplication::translate("Drukknop", fifbuf, 0, QApplication::UnicodeUTF8));
//this->ui->textBrowser->setText("dit is een test van het tekstveld");
//this->ui->textBrowser->setText(in.readAll());
//this->ui->textBrowser->setText(fifbuf);
//teller++;
//this->ui->lcdNumber->display(teller);
}

void Drukknop::on_pushButton_2_clicked()
{
system("radio2");
this->ui->textBrowser->setText("radio2");

this->ui->textBrowser->reload();
}
void Drukknop::on_pushButton_3_clicked()
{
system("mnm");
this->ui->textBrowser->setText("mnm");


}
void Drukknop::on_pushButton_4_clicked()
{
system("klara");
this->ui->textBrowser->setText("klara");

}
void Drukknop::on_pushButton_5_clicked()
{
system("classic21");

this->ui->textBrowser->setText("classic21");
}
void Drukknop::on_lcdNumber_overflow()
{

}
