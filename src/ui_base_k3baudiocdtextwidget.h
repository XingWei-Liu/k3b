#include <klocalizedstring.h>

/*
Widget to edit the global CD-Text in a K3b audio project.
*/

/********************************************************************************
** Form generated from reading UI file 'base_k3baudiocdtextwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_K3BAUDIOCDTEXTWIDGET_H
#define UI_BASE_K3BAUDIOCDTEXTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "klineedit.h"

QT_BEGIN_NAMESPACE

class Ui_base_K3bAudioCdTextWidget
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *m_groupCdText;
    QVBoxLayout *vboxLayout1;
    QFrame *frame3;
    QGridLayout *gridLayout;
    QLabel *textLabel2;
    QHBoxLayout *hboxLayout;
    KLineEdit *m_editPerformer;
    QToolButton *m_buttonCopyPerformer;
    QHBoxLayout *hboxLayout1;
    KLineEdit *m_editTitle;
    QToolButton *m_buttonCopyTitle;
    QLabel *textLabel1;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacer3;
    QPushButton *m_buttonMoreFields;
    QSpacerItem *spacer1;

    void setupUi(QWidget *K3bAudioCDTextWidget)
    {
        if (K3bAudioCDTextWidget->objectName().isEmpty())
            K3bAudioCDTextWidget->setObjectName(QString::fromUtf8("K3bAudioCDTextWidget"));
        vboxLayout = new QVBoxLayout(K3bAudioCDTextWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_groupCdText = new QGroupBox(K3bAudioCDTextWidget);
        m_groupCdText->setObjectName(QString::fromUtf8("m_groupCdText"));
        m_groupCdText->setCheckable(true);
        m_groupCdText->setChecked(false);
        vboxLayout1 = new QVBoxLayout(m_groupCdText);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        frame3 = new QFrame(m_groupCdText);
        frame3->setObjectName(QString::fromUtf8("frame3"));
        frame3->setFrameShape(QFrame::NoFrame);
        frame3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame3);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel2 = new QLabel(frame3);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        gridLayout->addWidget(textLabel2, 2, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_editPerformer = new KLineEdit(frame3);
        m_editPerformer->setObjectName(QString::fromUtf8("m_editPerformer"));

        hboxLayout->addWidget(m_editPerformer);

        m_buttonCopyPerformer = new QToolButton(frame3);
        m_buttonCopyPerformer->setObjectName(QString::fromUtf8("m_buttonCopyPerformer"));

        hboxLayout->addWidget(m_buttonCopyPerformer);


        gridLayout->addLayout(hboxLayout, 2, 1, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        m_editTitle = new KLineEdit(frame3);
        m_editTitle->setObjectName(QString::fromUtf8("m_editTitle"));

        hboxLayout1->addWidget(m_editTitle);

        m_buttonCopyTitle = new QToolButton(frame3);
        m_buttonCopyTitle->setObjectName(QString::fromUtf8("m_buttonCopyTitle"));

        hboxLayout1->addWidget(m_buttonCopyTitle);


        gridLayout->addLayout(hboxLayout1, 1, 1, 1, 1);

        textLabel1 = new QLabel(frame3);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 1, 0, 1, 1);


        vboxLayout1->addWidget(frame3);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacer3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacer3);

        m_buttonMoreFields = new QPushButton(m_groupCdText);
        m_buttonMoreFields->setObjectName(QString::fromUtf8("m_buttonMoreFields"));

        hboxLayout2->addWidget(m_buttonMoreFields);


        vboxLayout1->addLayout(hboxLayout2);

        spacer1 = new QSpacerItem(21, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacer1);


        vboxLayout->addWidget(m_groupCdText);

#ifndef UI_QT_NO_SHORTCUT
        textLabel2->setBuddy(m_editPerformer);
        textLabel1->setBuddy(m_editTitle);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(m_editTitle, m_editPerformer);

        retranslateUi(K3bAudioCDTextWidget);

        QMetaObject::connectSlotsByName(K3bAudioCDTextWidget);
    } // setupUi

    void retranslateUi(QWidget *K3bAudioCDTextWidget)
    {
        m_groupCdText->setTitle(tr2i18n("Write CD-Text", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_groupCdText->setProperty("toolTip", QVariant(QString()));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_groupCdText->setProperty("whatsThis", QVariant(tr2i18n("<p><b>CD-Text</b>\n"
"<p>If this option is checked K3b uses some otherwise unused space on the Audio CD to store additional information, such as the artist's name or the CD title.\n"
"<p>CD-Text is an extension to the audio CD standard introduced by Sony.\n"
"<p>CD-Text will only be usable on CD players that support this extension (mostly car CD players) and software like K3b, of course.\n"
"<p>Since a CD-Text-enhanced Audio CD will work in any Hifi CD or DVD player even if the player does not support CD-Text explicitly, enabling it is never a bad idea (just remember to fill in the CD-Text information).", nullptr)));
#endif // QT_NO_WHATSTHIS
        textLabel2->setText(tr2i18n("Perf&ormer:", nullptr));
        m_buttonCopyPerformer->setText(tr2i18n("...", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_buttonCopyPerformer->setProperty("toolTip", QVariant(tr2i18n("Copy to all tracks", nullptr)));
#endif // QT_NO_TOOLTIP
        m_buttonCopyTitle->setText(tr2i18n("...", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_buttonCopyTitle->setProperty("toolTip", QVariant(tr2i18n("Copy to all tracks", nullptr)));
#endif // QT_NO_TOOLTIP
        textLabel1->setText(tr2i18n("&Title:", nullptr));
        m_buttonMoreFields->setText(tr2i18n("More Fiel&ds...", nullptr));
        Q_UNUSED(K3bAudioCDTextWidget);
    } // retranslateUi

};

namespace Ui {
    class base_K3bAudioCdTextWidget: public Ui_base_K3bAudioCdTextWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BASE_K3BAUDIOCDTEXTWIDGET_H

