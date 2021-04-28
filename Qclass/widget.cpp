#include "widget.h"
#include "ui_widget.h"
#include<infodialog.h>
#include<QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_ProvideInfopushButton_clicked()
{
    infoDialog *dialog=new infoDialog(this);
    /*Modal
            int ret=dialog->exec();
    if(ret==QDialog::Accepted)
    {
        QString position=dialog->getPosition();
        QString Os=dialog->getFavouriteoS();
        QDebug()<<"Dialog Accepted,position is:"<<position<<"and favorite os:"<<Os;
        ui->infolabel->setText("your position is:"+position"and your favourite os is:"+Os);
    }
    if(ret==QDialog::Rejected)
    {
        qDebug()<<"Dialog Rejected";
    }
*/
    connect(dialog,&infoDialog::rejected,[=](){
        qDebug()<<"Dialog Rejected";
    });
    dialog->show();
    dialog->raise();
    dialog->activateWindow();

}
