#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'base_k3baudiorippingoptionwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_K3BAUDIORIPPINGOPTIONWIDGET_H
#define UI_BASE_K3BAUDIORIPPINGOPTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kcombobox.h"
#include "kurlrequester.h"

QT_BEGIN_NAMESPACE

class Ui_base_K3bAudioRippingOptionWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox2;
    QHBoxLayout *hboxLayout;
    KComboBox *m_comboFileType;
    QToolButton *m_buttonConfigurePlugin;
    QGroupBox *groupBox3;
    QVBoxLayout *vboxLayout;
    QCheckBox *m_checkCreatePlaylist;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacer1_2;
    QCheckBox *m_checkPlaylistRelative;
    QCheckBox *m_checkSingleFile;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacer1_2_2;
    QCheckBox *m_checkWriteCueFile;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout1;
    QLabel *textLabel1;
    KUrlRequester *m_editBaseDir;
    QLabel *m_labelFreeSpace;
    QLabel *textLabel1_2;
    QLabel *m_labelNeededSpace;

    void setupUi(QWidget *base_K3bAudioRippingOptionWidget)
    {
        if (base_K3bAudioRippingOptionWidget->objectName().isEmpty())
            base_K3bAudioRippingOptionWidget->setObjectName(QString::fromUtf8("base_K3bAudioRippingOptionWidget"));
        base_K3bAudioRippingOptionWidget->resize(436, 189);
        gridLayout = new QGridLayout(base_K3bAudioRippingOptionWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox2 = new QGroupBox(base_K3bAudioRippingOptionWidget);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        hboxLayout = new QHBoxLayout(groupBox2);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_comboFileType = new KComboBox(groupBox2);
        m_comboFileType->setObjectName(QString::fromUtf8("m_comboFileType"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_comboFileType->sizePolicy().hasHeightForWidth());
        m_comboFileType->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(m_comboFileType);

        m_buttonConfigurePlugin = new QToolButton(groupBox2);
        m_buttonConfigurePlugin->setObjectName(QString::fromUtf8("m_buttonConfigurePlugin"));

        hboxLayout->addWidget(m_buttonConfigurePlugin);


        gridLayout->addWidget(groupBox2, 0, 0, 1, 1);

        groupBox3 = new QGroupBox(base_K3bAudioRippingOptionWidget);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        vboxLayout = new QVBoxLayout(groupBox3);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_checkCreatePlaylist = new QCheckBox(groupBox3);
        m_checkCreatePlaylist->setObjectName(QString::fromUtf8("m_checkCreatePlaylist"));

        vboxLayout->addWidget(m_checkCreatePlaylist);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacer1_2 = new QSpacerItem(20, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacer1_2);

        m_checkPlaylistRelative = new QCheckBox(groupBox3);
        m_checkPlaylistRelative->setObjectName(QString::fromUtf8("m_checkPlaylistRelative"));
        m_checkPlaylistRelative->setEnabled(false);

        hboxLayout1->addWidget(m_checkPlaylistRelative);


        vboxLayout->addLayout(hboxLayout1);

        m_checkSingleFile = new QCheckBox(groupBox3);
        m_checkSingleFile->setObjectName(QString::fromUtf8("m_checkSingleFile"));

        vboxLayout->addWidget(m_checkSingleFile);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacer1_2_2 = new QSpacerItem(20, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacer1_2_2);

        m_checkWriteCueFile = new QCheckBox(groupBox3);
        m_checkWriteCueFile->setObjectName(QString::fromUtf8("m_checkWriteCueFile"));
        m_checkWriteCueFile->setEnabled(false);

        hboxLayout2->addWidget(m_checkWriteCueFile);


        vboxLayout->addLayout(hboxLayout2);

        verticalSpacer = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);


        gridLayout->addWidget(groupBox3, 0, 1, 2, 1);

        groupBox1 = new QGroupBox(base_K3bAudioRippingOptionWidget);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(groupBox1->sizePolicy().hasHeightForWidth());
        groupBox1->setSizePolicy(sizePolicy1);
        gridLayout1 = new QGridLayout(groupBox1);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        textLabel1 = new QLabel(groupBox1);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout1->addWidget(textLabel1, 1, 0, 1, 1);

        m_editBaseDir = new KUrlRequester(groupBox1);
        m_editBaseDir->setObjectName(QString::fromUtf8("m_editBaseDir"));

        gridLayout1->addWidget(m_editBaseDir, 0, 0, 1, 2);

        m_labelFreeSpace = new QLabel(groupBox1);
        m_labelFreeSpace->setObjectName(QString::fromUtf8("m_labelFreeSpace"));
        m_labelFreeSpace->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_labelFreeSpace->setWordWrap(false);

        gridLayout1->addWidget(m_labelFreeSpace, 1, 1, 1, 1);

        textLabel1_2 = new QLabel(groupBox1);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setWordWrap(false);

        gridLayout1->addWidget(textLabel1_2, 2, 0, 1, 1);

        m_labelNeededSpace = new QLabel(groupBox1);
        m_labelNeededSpace->setObjectName(QString::fromUtf8("m_labelNeededSpace"));
        m_labelNeededSpace->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_labelNeededSpace->setWordWrap(false);

        gridLayout1->addWidget(m_labelNeededSpace, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox1, 1, 0, 1, 1);


        retranslateUi(base_K3bAudioRippingOptionWidget);
        QObject::connect(m_checkCreatePlaylist, SIGNAL(toggled(bool)), m_checkPlaylistRelative, SLOT(setEnabled(bool)));
        QObject::connect(m_checkSingleFile, SIGNAL(toggled(bool)), m_checkWriteCueFile, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(base_K3bAudioRippingOptionWidget);
    } // setupUi

    void retranslateUi(QWidget *base_K3bAudioRippingOptionWidget)
    {
        groupBox2->setTitle(tr2i18n("Filetype", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_buttonConfigurePlugin->setToolTip(tr2i18n("Configure Plugin", nullptr));
#endif // QT_NO_TOOLTIP
        m_buttonConfigurePlugin->setText(tr2i18n("...", nullptr));
        groupBox3->setTitle(tr2i18n("Options", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkCreatePlaylist->setToolTip(tr2i18n("Create playlist for the ripped files", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkCreatePlaylist->setWhatsThis(tr2i18n("<p>If this option is checked K3b will create a playlist of the ripped files\n"
"which can be used with programs like Amarok or JuK.\n"
"<p>You may use the special strings to give the playlist a unique filename.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkCreatePlaylist->setText(tr2i18n("Create m&3u playlist", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkPlaylistRelative->setToolTip(tr2i18n("Use relative paths instead of absolute", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkPlaylistRelative->setWhatsThis(tr2i18n("<p>If this option is checked, the entries in the playlist will be relative to its location.\n"
"<p>Example: If your playlist is located in <em>/home/myself/music</em> and\n"
"your audio files are in <em>/home/myself/music/cool</em>; then the entries in the\n"
"playlist will look something like: <em>cool/track1.ogg</em>.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkPlaylistRelative->setText(tr2i18n("&Use relative paths", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkSingleFile->setToolTip(tr2i18n("Rip all tracks to a single file", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkSingleFile->setWhatsThis(tr2i18n("<p>If this option is checked K3b will create only one\n"
"audio file no matter how many tracks are ripped. This\n"
"file will contain all tracks one after the other.\n"
"<p>This might be useful to rip a live album or a radio play.\n"
"<p><b>Caution:</b> The file will have the name made from playlist pattern.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkSingleFile->setText(tr2i18n("Create si&ngle file", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkWriteCueFile->setToolTip(tr2i18n("Write a cuefile", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkWriteCueFile->setWhatsThis(tr2i18n("<p>If this option is checked K3b will create a CDRWIN cue file which allows one to easily write a copy of the audio CD on other systems.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkWriteCueFile->setText(tr2i18n("Write &cue file", nullptr));
        groupBox1->setTitle(tr2i18n("Target Folder", nullptr));
        textLabel1->setText(tr2i18n("Free space in directory:", nullptr));
        m_labelFreeSpace->setText(tr2i18n("-", nullptr));
        textLabel1_2->setText(tr2i18n("Space needed:", nullptr));
        m_labelNeededSpace->setText(tr2i18n("-", nullptr));
        Q_UNUSED(base_K3bAudioRippingOptionWidget);
    } // retranslateUi

};

namespace Ui {
    class base_K3bAudioRippingOptionWidget: public Ui_base_K3bAudioRippingOptionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BASE_K3BAUDIORIPPINGOPTIONWIDGET_H

