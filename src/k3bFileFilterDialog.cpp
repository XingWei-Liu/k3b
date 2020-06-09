#include "k3bFileFilter.h"
#include <KConfig>
#include <KSharedConfig>


FileFilter::FileFilter(QWidget *parent) :
    QDialog(parent),
{
    filter_dialog = new QDialog();
    filter_dialog->setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    filter_dialog->setFixedSize(400, 400);

    QLabel *icon = new QLabel();
    icon->setFixedSize(30,30);
    icon->setStyleSheet("QLabel{background-image: url(:/new/prefix1/pic/logo.png);"
                        "background-color:rgb(233, 233, 233);"
                        "background-repeat: no-repeat;background-color:transparent;}");
    QLabel *title = new QLabel("kylin-burner");
    title->setFixedSize(80,30);
    title->setStyleSheet("QLabel{background-color:rgb(233, 233, 233);"
                         "background-repeat: no-repeat;color:rgb(0, 0, 0);"
                         "font: 14px;background-color:transparent;}");
    QPushButton *close = new QPushButton();
    close->setFixedSize(30,30);
    close->setStyleSheet("QPushButton{border-image: url(:/new/prefix1/pic/icon-关闭-默认.png);"
                         "border:none;background-color:rgb(233, 233, 233);"
                         "border-radius: 4px;background-color:transparent;}"
                          "QPushButton:hover{border-image: url(:/new/prefix1/pic/icon-关闭-悬停点击.png);"
                         "border:none;background-color:rgb(248, 100, 87);"
                         "border-radius: 4px;}");
    connect(close, &QPushButton::clicked, this, &BurnFilter::filter_exit);

    QHBoxLayout *titlebar = new QHBoxLayout();
    titlebar->addWidget(icon);
    titlebar->addSpacing(10);
    titlebar->addWidget(title);
    titlebar->addStretch();
    titlebar->addWidget(close);
    QVBoxLayout *mainWidgetLayout = new QVBoxLayout(filter_dialog);
    QLabel *filter_label = new QLabel("filter");
    filter_label->setFixedSize(80,30);
    filter_label->setStyleSheet("QLabel{background-color:rgb(233, 233, 233);"
                                "background-repeat: no-repeat;color:rgb(0, 0, 0);"
                                "font: 24px;background-color:transparent;}");

    hide_check = new QCheckBox();
    hide_check->setText("Checking discs with MD5 files");
    hide_check->setChecked(false);
    link_check = new QCheckBox("link");
    link_check->setChecked(false);
    deform_link = new QCheckBox("deform link");
    deform_link->setChecked(false);

    mainWidgetLayout->addLayout(titlebar);
    mainWidgetLayout->addWidget(filter_label);
    mainWidgetLayout->addSpacing(50);
    mainWidgetLayout->addWidget(hide_check);
    mainWidgetLayout->addSpacing(20);
    mainWidgetLayout->addWidget(link_check);
    mainWidgetLayout->addSpacing(20);
    mainWidgetLayout->addWidget(deform_link);
    mainWidgetLayout->addStretch();

    filter_dialog->setModal(true);
    filter_dialog->show();

}

FileFilter::~FileFilter()
{
    delete ui;
}

void FileFilter::filter_exit()
{
    pro.set_filter_hide(hide_check->isChecked());
    pro.set_filter_link(link_check->isChecked());
    pro.set_filter_deform_link(deform_link->isChecked());
    KConfigGroup grp( KSharedConfig::openConfig(), "image writing" );
    c.writeEntry( "simulate", d->checkDummy->isChecked() );
    filter_dialog->close();
}
