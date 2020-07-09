#include "k3bFileFilterDialog.h"

#include <KConfig>
#include <KSharedConfig>
#include <KIO/Global>
#include <KConfigGroup>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>

FileFilter::FileFilter(QWidget *parent) :
    QDialog(parent)
{
    this->setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    this->setFixedSize(400, 400);

    QLabel *icon = new QLabel();
    icon->setFixedSize(30,30);
    icon->setStyleSheet("QLabel{background-image: url(:/icon/icon/logo.png);"
                        "background-color:rgb(233, 233, 233);"
                        "background-repeat: no-repeat;background-color:transparent;}");
    QLabel *title = new QLabel("kylin-burner");
    title->setFixedSize(80,30);
    title->setStyleSheet("QLabel{background-color:rgb(233, 233, 233);"
                         "background-repeat: no-repeat;color:rgb(0, 0, 0);"
                         "font: 14px;background-color:transparent;}");
    QPushButton *close = new QPushButton();
    close->setFixedSize(30,30);
    close->setStyleSheet("QPushButton{border-image: url(:/icon/icon/icon-关闭-默认.png);"
                         "border:none;background-color:rgb(233, 233, 233);"
                         "border-radius: 4px;background-color:transparent;}"
                          "QPushButton:hover{border-image: url(:/icon/icon/icon-关闭-悬停点击.png);"
                         "border:none;background-color:rgb(248, 100, 87);"
                         "border-radius: 4px;}");
    connect(close, &QPushButton::clicked, this, &FileFilter::filter_exit);

    QHBoxLayout *titlebar = new QHBoxLayout();
    titlebar->addWidget(icon);
    titlebar->addSpacing(10);
    titlebar->addWidget(title);
    titlebar->addStretch();
    titlebar->addWidget(close);
    
    QVBoxLayout *mainWidgetLayout = new QVBoxLayout(this);
    QLabel *filter_label = new QLabel("filter");
    filter_label->setFixedSize(80,30);
    filter_label->setStyleSheet("QLabel{background-color:rgb(233, 233, 233);"
                                "background-repeat: no-repeat;color:rgb(0, 0, 0);"
                                "font: 24px;background-color:transparent;}");

    discard_hidden_file = new QCheckBox("discard hidden file");
    discard_hidden_file->setChecked(true);
    
    discard_broken_link = new QCheckBox("discard broken link");
    discard_broken_link->setChecked(true);
    
    follow_link = new QCheckBox("follow link");
    follow_link->setChecked(false);

    mainWidgetLayout->addLayout(titlebar);
    mainWidgetLayout->addWidget(filter_label);
    mainWidgetLayout->addSpacing(50);
    mainWidgetLayout->addWidget( discard_hidden_file);
    mainWidgetLayout->addSpacing(20);
    mainWidgetLayout->addWidget( discard_broken_link);
    mainWidgetLayout->addSpacing(20);
    mainWidgetLayout->addWidget(follow_link);
    mainWidgetLayout->addStretch();

    this->setModal(true);

}

FileFilter::~FileFilter()
{
}

void FileFilter::filter_exit()
{
    KConfigGroup grp( KSharedConfig::openConfig(), "default data settings" );   
    grp.writeEntry( "discard hidden file", discard_hidden_file->isChecked() );
    grp.writeEntry( "discard symlinks", false );
    grp.writeEntry( "discard broken symlinks", discard_broken_link->isChecked() );
    grp.writeEntry( "follow symbolic links", follow_link->isChecked() );
    
    this->close();
}
