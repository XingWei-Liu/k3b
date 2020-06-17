#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'base_k3baudiotrackwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_K3BAUDIOTRACKWIDGET_H
#define UI_BASE_K3BAUDIOTRACKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <k3bmsfedit.h>
#include "k3bmsfedit.h"
#include "klineedit.h"

QT_BEGIN_NAMESPACE

class Ui_base_K3bAudioTrackWidget
{
public:
    QHBoxLayout *hboxLayout;
    QTabWidget *m_mainTab;
    QWidget *tab;
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    KLineEdit *m_editSongwriter;
    QLabel *textLabel4;
    KLineEdit *m_editArranger;
    KLineEdit *m_editComposer;
    KLineEdit *m_editMessage;
    QFrame *line2;
    QLabel *textLabel3;
    QLabel *textLabel5;
    QLabel *textLabel8;
    KLineEdit *m_editTitle;
    QLabel *textLabel2;
    QLabel *textLabel6;
    QLabel *textLabel1;
    KLineEdit *m_editIsrc;
    KLineEdit *m_editPerformer;
    QSpacerItem *spacer4;
    QWidget *tab1;
    QVBoxLayout *vboxLayout1;
    QCheckBox *m_checkPreemphasis;
    QCheckBox *m_checkCopyPermitted;
    QHBoxLayout *hboxLayout1;
    QLabel *m_labelPostGap;
    K3b::MsfEdit *m_editPostGap;
    QSpacerItem *spacer7;
    QSpacerItem *spacer3;

    void setupUi(QWidget *K3bAudioTrackWidget)
    {
        if (K3bAudioTrackWidget->objectName().isEmpty())
            K3bAudioTrackWidget->setObjectName(QString::fromUtf8("K3bAudioTrackWidget"));
        hboxLayout = new QHBoxLayout(K3bAudioTrackWidget);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_mainTab = new QTabWidget(K3bAudioTrackWidget);
        m_mainTab->setObjectName(QString::fromUtf8("m_mainTab"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        vboxLayout = new QVBoxLayout(tab);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_editSongwriter = new KLineEdit(tab);
        m_editSongwriter->setObjectName(QString::fromUtf8("m_editSongwriter"));

        gridLayout->addWidget(m_editSongwriter, 4, 1, 1, 1);

        textLabel4 = new QLabel(tab);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
        textLabel4->setWordWrap(false);

        gridLayout->addWidget(textLabel4, 4, 0, 1, 1);

        m_editArranger = new KLineEdit(tab);
        m_editArranger->setObjectName(QString::fromUtf8("m_editArranger"));

        gridLayout->addWidget(m_editArranger, 3, 1, 1, 1);

        m_editComposer = new KLineEdit(tab);
        m_editComposer->setObjectName(QString::fromUtf8("m_editComposer"));

        gridLayout->addWidget(m_editComposer, 3, 3, 1, 1);

        m_editMessage = new KLineEdit(tab);
        m_editMessage->setObjectName(QString::fromUtf8("m_editMessage"));

        gridLayout->addWidget(m_editMessage, 5, 1, 1, 3);

        line2 = new QFrame(tab);
        line2->setObjectName(QString::fromUtf8("line2"));
        line2->setFrameShape(QFrame::HLine);
        line2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line2, 1, 0, 1, 4);

        textLabel3 = new QLabel(tab);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(false);

        gridLayout->addWidget(textLabel3, 2, 0, 2, 1);

        textLabel5 = new QLabel(tab);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
        textLabel5->setWordWrap(false);

        gridLayout->addWidget(textLabel5, 2, 2, 2, 1);

        textLabel8 = new QLabel(tab);
        textLabel8->setObjectName(QString::fromUtf8("textLabel8"));
        textLabel8->setWordWrap(false);

        gridLayout->addWidget(textLabel8, 5, 0, 1, 1);

        m_editTitle = new KLineEdit(tab);
        m_editTitle->setObjectName(QString::fromUtf8("m_editTitle"));

        gridLayout->addWidget(m_editTitle, 0, 1, 1, 1);

        textLabel2 = new QLabel(tab);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        gridLayout->addWidget(textLabel2, 0, 2, 1, 1);

        textLabel6 = new QLabel(tab);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        textLabel6->setWordWrap(false);

        gridLayout->addWidget(textLabel6, 4, 2, 1, 1);

        textLabel1 = new QLabel(tab);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        m_editIsrc = new KLineEdit(tab);
        m_editIsrc->setObjectName(QString::fromUtf8("m_editIsrc"));

        gridLayout->addWidget(m_editIsrc, 4, 3, 1, 1);

        m_editPerformer = new KLineEdit(tab);
        m_editPerformer->setObjectName(QString::fromUtf8("m_editPerformer"));

        gridLayout->addWidget(m_editPerformer, 0, 3, 1, 1);


        vboxLayout->addLayout(gridLayout);

        spacer4 = new QSpacerItem(350, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacer4);

        m_mainTab->addTab(tab, QString());
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        vboxLayout1 = new QVBoxLayout(tab1);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        m_checkPreemphasis = new QCheckBox(tab1);
        m_checkPreemphasis->setObjectName(QString::fromUtf8("m_checkPreemphasis"));

        vboxLayout1->addWidget(m_checkPreemphasis);

        m_checkCopyPermitted = new QCheckBox(tab1);
        m_checkCopyPermitted->setObjectName(QString::fromUtf8("m_checkCopyPermitted"));

        vboxLayout1->addWidget(m_checkCopyPermitted);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        m_labelPostGap = new QLabel(tab1);
        m_labelPostGap->setObjectName(QString::fromUtf8("m_labelPostGap"));
        m_labelPostGap->setWordWrap(false);

        hboxLayout1->addWidget(m_labelPostGap);

        m_editPostGap = new K3b::MsfEdit(tab1);
        m_editPostGap->setObjectName(QString::fromUtf8("m_editPostGap"));

        hboxLayout1->addWidget(m_editPostGap);

        spacer7 = new QSpacerItem(161, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacer7);


        vboxLayout1->addLayout(hboxLayout1);

        spacer3 = new QSpacerItem(41, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacer3);

        m_mainTab->addTab(tab1, QString());

        hboxLayout->addWidget(m_mainTab);

#ifndef UI_QT_NO_SHORTCUT
        textLabel4->setBuddy(m_editSongwriter);
        textLabel3->setBuddy(m_editArranger);
        textLabel5->setBuddy(m_editComposer);
        textLabel8->setBuddy(m_editMessage);
        textLabel2->setBuddy(m_editPerformer);
        textLabel6->setBuddy(m_editIsrc);
        textLabel1->setBuddy(m_editTitle);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(m_editTitle, m_editPerformer);
        QWidget::setTabOrder(m_editPerformer, m_editArranger);
        QWidget::setTabOrder(m_editArranger, m_editComposer);
        QWidget::setTabOrder(m_editComposer, m_editSongwriter);
        QWidget::setTabOrder(m_editSongwriter, m_editIsrc);
        QWidget::setTabOrder(m_editIsrc, m_editMessage);
        QWidget::setTabOrder(m_editMessage, m_checkPreemphasis);
        QWidget::setTabOrder(m_checkPreemphasis, m_checkCopyPermitted);

        retranslateUi(K3bAudioTrackWidget);

        QMetaObject::connectSlotsByName(K3bAudioTrackWidget);
    } // setupUi

    void retranslateUi(QWidget *K3bAudioTrackWidget)
    {
        textLabel4->setText(tr2i18n("So&ngwriter:", nullptr));
        textLabel3->setText(tr2i18n("&Arranger:", nullptr));
        textLabel5->setText(tr2i18n("&Composer:", nullptr));
        textLabel8->setText(tr2i18n("&Message:", nullptr));
        textLabel2->setText(tr2i18n("&Performer:", nullptr));
        textLabel6->setText(tr2i18n("&ISRC:", nullptr));
        textLabel1->setText(tr2i18n("&Title:", nullptr));
        m_mainTab->setTabText(m_mainTab->indexOf(tab), tr2i18n("C&D-Text", nullptr));
        m_checkPreemphasis->setText(tr2i18n("Preemph&asis", nullptr));
#ifndef UI_QT_NO_WHATSTHIS
        m_checkPreemphasis->setProperty("whatsThis", QVariant(tr2i18n("<p>Preemphasis is mainly used in audio processing. Higher frequencies in audio signals usually have lower amplitudes. This can lead to bad signal quality on noisy transmission because the high frequencies might become too weak. To avoid this effect, high frequencies are amplified before transmission (preemphasis); the receiver will then weaken them accordingly for playback.", nullptr)));
#endif // QT_NO_WHATSTHIS
        m_checkCopyPermitted->setText(tr2i18n("&Copy permitted", nullptr));
        m_labelPostGap->setText(tr2i18n("Post-Gap:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_editPostGap->setProperty("toolTip", QVariant(tr2i18n("Set the length of the track's post-gap", nullptr)));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_editPostGap->setProperty("whatsThis", QVariant(tr2i18n("<p>On an audio CD each track (except for the last) can have a post-gap.\n"
"This does not mean that K3b adds an additional gap of silence to the track. This setting simply influences the display on a Hifi audio CD player. The part of an audio track that is marked as post-gap is counted backwards.\n"
"<p>This setting is irrelevant for most users as modern CD burners can put arbitrary audio data in the post-gap when burning in DAO mode.\n"
"<p><i>In other CD-burning applications the post-gap might be called the pre-gap. The pre-gap of track 2 is the same as the post-gap of track 1.\n"
"<p><b>Changing the post-gap does not change the length of the track.</b>\n"
"<p><b>When writing in TAO writing mode (not recommended for Audio CDs) the post-gap will most likely be muted and on some burners forced to 2 seconds.</b>", nullptr)));
#endif // QT_NO_WHATSTHIS
        m_mainTab->setTabText(m_mainTab->indexOf(tab1), tr2i18n("&Options", nullptr));
        Q_UNUSED(K3bAudioTrackWidget);
    } // retranslateUi

};

namespace Ui {
    class base_K3bAudioTrackWidget: public Ui_base_K3bAudioTrackWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BASE_K3BAUDIOTRACKWIDGET_H

