#include "k3bResultDialog.h"

#include <KLocalizedString>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QDebug>

BurnResult::BurnResult( int ret ,QWidget *parent) :
    QDialog(parent)
{
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    setFixedSize(430, 260);

    qDebug() << __func__ << __LINE__ << __FILE__ << endl;

    QPalette pal(palette());
    pal.setColor(QPalette::Background, QColor(255, 255, 255));
    setAutoFillBackground(true);
    setPalette(pal);

    QLabel *icon = new QLabel();
    icon->setFixedSize(16,16);
    icon->setStyleSheet("QLabel{background-image: url(:/icon/icon/logo-小.png);"
                        "background-repeat: no-repeat;background-color:transparent;}");
    QLabel *title = new QLabel(i18n("kylin-burner"));
    title->setFixedSize(48,11);
    title->setStyleSheet("QLabel{background-color:transparent;"
                         "background-repeat: no-repeat;color:#444444;"
                         "font: 12px;}");
    QPushButton *close = new QPushButton();
    close->setFixedSize(20,20);
    close->setStyleSheet("QPushButton{border-image: url(:/icon/icon/icon-关闭-默认.png);"
                         "border:none;background-color:rgb(233, 233, 233);"
                         "border-radius: 4px;background-color:transparent;}"
                          "QPushButton:hover{border-image: url(:/icon/icon/icon-关闭-悬停点击.png);"
                         "border:none;background-color:rgb(248, 100, 87);"
                         "border-radius: 4px;}");
    connect(close, SIGNAL(clicked()), this, SLOT(exit() ) );

    QLabel* label_top = new QLabel( this );
    label_top->setFixedHeight(27);
    QHBoxLayout *titlebar = new QHBoxLayout(label_top);
    titlebar->setContentsMargins(11, 0, 0, 0);
    titlebar->addWidget(icon);
    titlebar->addSpacing(5);
    titlebar->addWidget(title);
    titlebar->addStretch();
    titlebar->addWidget(close);
    titlebar->addSpacing(5);

    QLabel* label_icon = new QLabel();
    label_icon->setFixedSize(50,50);
    label_icon->setStyleSheet("QLabel{background-image: url(:/icon/icon/icon-right.png);"
                              "background-repeat: no-repeat;background-color:transparent;}");

    QLabel* label_info = new QLabel( i18n("success"), this );
    label_info->setFixedSize(130,29);
    label_info->setStyleSheet("QLabel{background-color:transparent;"
                              "background-repeat: no-repeat;font:30px;color:#444444;}");

    QHBoxLayout* hlayout = new QHBoxLayout();
    hlayout->addSpacing( 113 );
    hlayout->addWidget( label_icon );
    hlayout->addSpacing( 24 );
    hlayout->addWidget( label_info );
    hlayout->addStretch( 0 );
    
    if( !ret ){
        label_icon->setStyleSheet("QLabel{background-image: url(:/icon/icon/icon-error.png);"
                                  "background-repeat: no-repeat;background-color:transparent;}");
        label_info->setText( i18n("failed") );
    }
    
    QVBoxLayout* mainLayout = new QVBoxLayout( this );
    mainLayout->setContentsMargins(0, 0, 0, 0);
    mainLayout->addWidget( label_top );
    mainLayout->addSpacing( 78 );
    mainLayout->addLayout( hlayout );
    mainLayout->addStretch( 0 );
}

BurnResult::~BurnResult()
{
}

void BurnResult::exit()
{
    this->close();
}

