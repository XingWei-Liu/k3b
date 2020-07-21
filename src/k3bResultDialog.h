#ifndef BURNRESULTDIALOG_H
#define BURNRESULTDIALOG_H

#include <QDialog>

class BurnResult : public QDialog
{
    Q_OBJECT

public:
    explicit BurnResult( int , QWidget *parent = nullptr);
    ~BurnResult();

    Q_SLOT void exit();

private:
    QDialog *clean_dialog;
};

#endif // BURNRESULTDIALOG_H

