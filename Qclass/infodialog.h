#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class infoDialog;
}

class infoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit infoDialog(QWidget *parent = nullptr);
    ~infoDialog();

    QString getPosition() const;

    QString getFavoriteoS() const;

private slots:
    void on_OKpushButton_clicked();

    void on_CANCELpushButton_clicked();

private:
    Ui::infoDialog *ui;
    QString position;
    QString FavoriteoS;
};

#endif // INFODIALOG_H
