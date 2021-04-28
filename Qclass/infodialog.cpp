#include "infodialog.h"
#include "ui_infodialog.h"

infoDialog::infoDialog(QWidget *parent) :
    QDialog(parent,Qt::WindowSystemMenuHint|Qt::WindowTitleHint),
    ui(new Ui::infoDialog)
{
    ui->setupUi(this);
}

infoDialog::~infoDialog()
{
    delete ui;
}

void infoDialog::on_OKpushButton_clicked()
{
    QString userPosition = ui->PositionlineEdit->text();
    if(!userPosition.isEmpty())
    {
        position=userPosition;
        if(ui->WindowsradioButton->isChecked())
        {
            FavoriteoS="Windows";
        }
        if(ui->MacradioButton->isChecked())
        {
            FavoriteoS="Mac";
        }
        if(ui->LinuxradioButton->isChecked())
        {
            FavoriteoS="Linux";
        }
    }
    accept();
  }


void infoDialog::on_CANCELpushButton_clicked()
{

        reject();
}

QString infoDialog::getFavoriteoS() const
{
    return FavoriteoS;
}

QString infoDialog::getPosition() const
{
    return position;
}


