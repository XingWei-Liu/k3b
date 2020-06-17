#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'base_k3bvideodvdrippingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_K3BVIDEODVDRIPPINGWIDGET_H
#define UI_BASE_K3BVIDEODVDRIPPINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <k3bintmapcombobox.h>
#include "k3bintmapcombobox.h"
#include "klineedit.h"
#include "kurllabel.h"
#include "kurlrequester.h"

QT_BEGIN_NAMESPACE

class Ui_base_K3bVideoDVDRippingWidget
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *textLabel4;
    QTreeView *m_titleView;
    QTabWidget *tabWidget2;
    QWidget *tab1;
    QGridLayout *gridLayout;
    QGroupBox *groupBox6;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel2_2;
    QComboBox *m_comboVideoSize;
    QPushButton *m_buttonCustomPictureSize;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel2_3;
    QSpinBox *m_spinVideoBitrate;
    QGroupBox *groupBox1_2;
    QGridLayout *gridLayout1;
    QLabel *textLabel1_2;
    KUrlRequester *m_editBaseDir;
    QLabel *m_labelFreeSpace;
    QLabel *textLabel1_2_2;
    QLabel *m_labelNeededSpace;
    QGroupBox *groupBox4;
    QVBoxLayout *vboxLayout2;
    QStackedWidget *m_stackAudioQuality;
    QWidget *m_stackPageAudioQualityMp3;
    QVBoxLayout *vboxLayout3;
    QCheckBox *m_checkAudioVBR;
    QHBoxLayout *hboxLayout2;
    QLabel *m_labelAudioBitrate;
    QComboBox *m_comboAudioBitrate;
    QWidget *m_stackPageAudioQualityAC3Pt;
    QHBoxLayout *hboxLayout3;
    QLabel *m_labelNoAudioSettings;
    QWidget *m_stackPageAudioQualityAC3;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout4;
    QLabel *textLabel1_3;
    QSpinBox *m_spinAudioBitrate;
    QSpacerItem *spacer3;
    QGroupBox *groupBox1;
    QVBoxLayout *vboxLayout5;
    QHBoxLayout *hboxLayout5;
    QLabel *textLabel1;
    K3b::IntMapComboBox *m_comboVideoCodec;
    QHBoxLayout *hboxLayout6;
    QLabel *textLabel2;
    K3b::IntMapComboBox *m_comboAudioCodec;
    QWidget *TabPage;
    QVBoxLayout *vboxLayout6;
    QHBoxLayout *hboxLayout7;
    QLabel *textLabel1_4;
    QComboBox *m_comboFilenamePattern;
    KUrlLabel *m_specialStringsLabel;
    QHBoxLayout *hboxLayout8;
    QCheckBox *m_checkBlankReplace;
    KLineEdit *m_editBlankReplace;
    QSpacerItem *spacer5;
    QWidget *tab2;
    QVBoxLayout *vboxLayout7;
    QCheckBox *m_checkTwoPassEncoding;
    QCheckBox *m_checkAutoClipping;
    QCheckBox *m_checkAudioResampling;
    QCheckBox *m_checkLowPriority;
    QSpacerItem *spacer1;

    void setupUi(QWidget *base_K3bVideoDVDRippingWidget)
    {
        if (base_K3bVideoDVDRippingWidget->objectName().isEmpty())
            base_K3bVideoDVDRippingWidget->setObjectName(QString::fromUtf8("base_K3bVideoDVDRippingWidget"));
        base_K3bVideoDVDRippingWidget->resize(644, 387);
        vboxLayout = new QVBoxLayout(base_K3bVideoDVDRippingWidget);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        textLabel4 = new QLabel(base_K3bVideoDVDRippingWidget);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
        textLabel4->setWordWrap(false);

        vboxLayout->addWidget(textLabel4);

        m_titleView = new QTreeView(base_K3bVideoDVDRippingWidget);
        m_titleView->setObjectName(QString::fromUtf8("m_titleView"));
        m_titleView->setRootIsDecorated(false);
        m_titleView->setItemsExpandable(false);
        m_titleView->setAllColumnsShowFocus(true);

        vboxLayout->addWidget(m_titleView);

        tabWidget2 = new QTabWidget(base_K3bVideoDVDRippingWidget);
        tabWidget2->setObjectName(QString::fromUtf8("tabWidget2"));
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        gridLayout = new QGridLayout(tab1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox6 = new QGroupBox(tab1);
        groupBox6->setObjectName(QString::fromUtf8("groupBox6"));
        vboxLayout1 = new QVBoxLayout(groupBox6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel2_2 = new QLabel(groupBox6);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));
        textLabel2_2->setWordWrap(false);

        hboxLayout->addWidget(textLabel2_2);

        m_comboVideoSize = new QComboBox(groupBox6);
        m_comboVideoSize->setObjectName(QString::fromUtf8("m_comboVideoSize"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_comboVideoSize->sizePolicy().hasHeightForWidth());
        m_comboVideoSize->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(m_comboVideoSize);

        m_buttonCustomPictureSize = new QPushButton(groupBox6);
        m_buttonCustomPictureSize->setObjectName(QString::fromUtf8("m_buttonCustomPictureSize"));

        hboxLayout->addWidget(m_buttonCustomPictureSize);


        vboxLayout1->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabel2_3 = new QLabel(groupBox6);
        textLabel2_3->setObjectName(QString::fromUtf8("textLabel2_3"));
        textLabel2_3->setWordWrap(false);

        hboxLayout1->addWidget(textLabel2_3);

        m_spinVideoBitrate = new QSpinBox(groupBox6);
        m_spinVideoBitrate->setObjectName(QString::fromUtf8("m_spinVideoBitrate"));
        m_spinVideoBitrate->setEnabled(true);
        sizePolicy.setHeightForWidth(m_spinVideoBitrate->sizePolicy().hasHeightForWidth());
        m_spinVideoBitrate->setSizePolicy(sizePolicy);
        m_spinVideoBitrate->setMaximum(10000);
        m_spinVideoBitrate->setValue(1800);

        hboxLayout1->addWidget(m_spinVideoBitrate);


        vboxLayout1->addLayout(hboxLayout1);


        gridLayout->addWidget(groupBox6, 0, 1, 1, 1);

        groupBox1_2 = new QGroupBox(tab1);
        groupBox1_2->setObjectName(QString::fromUtf8("groupBox1_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(groupBox1_2->sizePolicy().hasHeightForWidth());
        groupBox1_2->setSizePolicy(sizePolicy1);
        gridLayout1 = new QGridLayout(groupBox1_2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        textLabel1_2 = new QLabel(groupBox1_2);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setWordWrap(false);

        gridLayout1->addWidget(textLabel1_2, 1, 0, 1, 1);

        m_editBaseDir = new KUrlRequester(groupBox1_2);
        m_editBaseDir->setObjectName(QString::fromUtf8("m_editBaseDir"));

        gridLayout1->addWidget(m_editBaseDir, 0, 0, 1, 2);

        m_labelFreeSpace = new QLabel(groupBox1_2);
        m_labelFreeSpace->setObjectName(QString::fromUtf8("m_labelFreeSpace"));
        m_labelFreeSpace->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_labelFreeSpace->setWordWrap(false);

        gridLayout1->addWidget(m_labelFreeSpace, 1, 1, 1, 1);

        textLabel1_2_2 = new QLabel(groupBox1_2);
        textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));
        textLabel1_2_2->setWordWrap(false);

        gridLayout1->addWidget(textLabel1_2_2, 2, 0, 1, 1);

        m_labelNeededSpace = new QLabel(groupBox1_2);
        m_labelNeededSpace->setObjectName(QString::fromUtf8("m_labelNeededSpace"));
        m_labelNeededSpace->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_labelNeededSpace->setWordWrap(false);

        gridLayout1->addWidget(m_labelNeededSpace, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox1_2, 1, 0, 1, 1);

        groupBox4 = new QGroupBox(tab1);
        groupBox4->setObjectName(QString::fromUtf8("groupBox4"));
        vboxLayout2 = new QVBoxLayout(groupBox4);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        m_stackAudioQuality = new QStackedWidget(groupBox4);
        m_stackAudioQuality->setObjectName(QString::fromUtf8("m_stackAudioQuality"));
        m_stackPageAudioQualityMp3 = new QWidget();
        m_stackPageAudioQualityMp3->setObjectName(QString::fromUtf8("m_stackPageAudioQualityMp3"));
        vboxLayout3 = new QVBoxLayout(m_stackPageAudioQualityMp3);
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        m_checkAudioVBR = new QCheckBox(m_stackPageAudioQualityMp3);
        m_checkAudioVBR->setObjectName(QString::fromUtf8("m_checkAudioVBR"));

        vboxLayout3->addWidget(m_checkAudioVBR);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        m_labelAudioBitrate = new QLabel(m_stackPageAudioQualityMp3);
        m_labelAudioBitrate->setObjectName(QString::fromUtf8("m_labelAudioBitrate"));
        m_labelAudioBitrate->setWordWrap(false);

        hboxLayout2->addWidget(m_labelAudioBitrate);

        m_comboAudioBitrate = new QComboBox(m_stackPageAudioQualityMp3);
        m_comboAudioBitrate->setObjectName(QString::fromUtf8("m_comboAudioBitrate"));
        m_comboAudioBitrate->setDuplicatesEnabled(false);

        hboxLayout2->addWidget(m_comboAudioBitrate);


        vboxLayout3->addLayout(hboxLayout2);

        m_stackAudioQuality->addWidget(m_stackPageAudioQualityMp3);
        m_stackPageAudioQualityAC3Pt = new QWidget();
        m_stackPageAudioQualityAC3Pt->setObjectName(QString::fromUtf8("m_stackPageAudioQualityAC3Pt"));
        hboxLayout3 = new QHBoxLayout(m_stackPageAudioQualityAC3Pt);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        m_labelNoAudioSettings = new QLabel(m_stackPageAudioQualityAC3Pt);
        m_labelNoAudioSettings->setObjectName(QString::fromUtf8("m_labelNoAudioSettings"));
        m_labelNoAudioSettings->setWordWrap(true);

        hboxLayout3->addWidget(m_labelNoAudioSettings);

        m_stackAudioQuality->addWidget(m_stackPageAudioQualityAC3Pt);
        m_stackPageAudioQualityAC3 = new QWidget();
        m_stackPageAudioQualityAC3->setObjectName(QString::fromUtf8("m_stackPageAudioQualityAC3"));
        vboxLayout4 = new QVBoxLayout(m_stackPageAudioQualityAC3);
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        textLabel1_3 = new QLabel(m_stackPageAudioQualityAC3);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        textLabel1_3->setWordWrap(false);

        hboxLayout4->addWidget(textLabel1_3);

        m_spinAudioBitrate = new QSpinBox(m_stackPageAudioQualityAC3);
        m_spinAudioBitrate->setObjectName(QString::fromUtf8("m_spinAudioBitrate"));
        m_spinAudioBitrate->setMinimum(32);
        m_spinAudioBitrate->setMaximum(640);
        m_spinAudioBitrate->setSingleStep(2);
        m_spinAudioBitrate->setValue(128);

        hboxLayout4->addWidget(m_spinAudioBitrate);


        vboxLayout4->addLayout(hboxLayout4);

        spacer3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout4->addItem(spacer3);

        m_stackAudioQuality->addWidget(m_stackPageAudioQualityAC3);

        vboxLayout2->addWidget(m_stackAudioQuality);


        gridLayout->addWidget(groupBox4, 1, 1, 1, 1);

        groupBox1 = new QGroupBox(tab1);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        vboxLayout5 = new QVBoxLayout(groupBox1);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        textLabel1 = new QLabel(groupBox1);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout5->addWidget(textLabel1);

        m_comboVideoCodec = new K3b::IntMapComboBox(groupBox1);
        m_comboVideoCodec->setObjectName(QString::fromUtf8("m_comboVideoCodec"));

        hboxLayout5->addWidget(m_comboVideoCodec);


        vboxLayout5->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        textLabel2 = new QLabel(groupBox1);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        hboxLayout6->addWidget(textLabel2);

        m_comboAudioCodec = new K3b::IntMapComboBox(groupBox1);
        m_comboAudioCodec->setObjectName(QString::fromUtf8("m_comboAudioCodec"));

        hboxLayout6->addWidget(m_comboAudioCodec);


        vboxLayout5->addLayout(hboxLayout6);


        gridLayout->addWidget(groupBox1, 0, 0, 1, 1);

        tabWidget2->addTab(tab1, QString());
        TabPage = new QWidget();
        TabPage->setObjectName(QString::fromUtf8("TabPage"));
        vboxLayout6 = new QVBoxLayout(TabPage);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        textLabel1_4 = new QLabel(TabPage);
        textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));
        textLabel1_4->setWordWrap(false);

        hboxLayout7->addWidget(textLabel1_4);

        m_comboFilenamePattern = new QComboBox(TabPage);
        m_comboFilenamePattern->setObjectName(QString::fromUtf8("m_comboFilenamePattern"));
        sizePolicy.setHeightForWidth(m_comboFilenamePattern->sizePolicy().hasHeightForWidth());
        m_comboFilenamePattern->setSizePolicy(sizePolicy);
        m_comboFilenamePattern->setAcceptDrops(true);
        m_comboFilenamePattern->setEditable(true);
        m_comboFilenamePattern->setDuplicatesEnabled(false);

        hboxLayout7->addWidget(m_comboFilenamePattern);


        vboxLayout6->addLayout(hboxLayout7);

        m_specialStringsLabel = new KUrlLabel(TabPage);
        m_specialStringsLabel->setObjectName(QString::fromUtf8("m_specialStringsLabel"));
        m_specialStringsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout6->addWidget(m_specialStringsLabel);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        m_checkBlankReplace = new QCheckBox(TabPage);
        m_checkBlankReplace->setObjectName(QString::fromUtf8("m_checkBlankReplace"));

        hboxLayout8->addWidget(m_checkBlankReplace);

        m_editBlankReplace = new KLineEdit(TabPage);
        m_editBlankReplace->setObjectName(QString::fromUtf8("m_editBlankReplace"));
        m_editBlankReplace->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_editBlankReplace->sizePolicy().hasHeightForWidth());
        m_editBlankReplace->setSizePolicy(sizePolicy2);

        hboxLayout8->addWidget(m_editBlankReplace);


        vboxLayout6->addLayout(hboxLayout8);

        spacer5 = new QSpacerItem(5, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout6->addItem(spacer5);

        tabWidget2->addTab(TabPage, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        vboxLayout7 = new QVBoxLayout(tab2);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        m_checkTwoPassEncoding = new QCheckBox(tab2);
        m_checkTwoPassEncoding->setObjectName(QString::fromUtf8("m_checkTwoPassEncoding"));
        m_checkTwoPassEncoding->setChecked(true);

        vboxLayout7->addWidget(m_checkTwoPassEncoding);

        m_checkAutoClipping = new QCheckBox(tab2);
        m_checkAutoClipping->setObjectName(QString::fromUtf8("m_checkAutoClipping"));
        m_checkAutoClipping->setChecked(true);

        vboxLayout7->addWidget(m_checkAutoClipping);

        m_checkAudioResampling = new QCheckBox(tab2);
        m_checkAudioResampling->setObjectName(QString::fromUtf8("m_checkAudioResampling"));
        m_checkAudioResampling->setChecked(true);

        vboxLayout7->addWidget(m_checkAudioResampling);

        m_checkLowPriority = new QCheckBox(tab2);
        m_checkLowPriority->setObjectName(QString::fromUtf8("m_checkLowPriority"));
        m_checkLowPriority->setChecked(true);

        vboxLayout7->addWidget(m_checkLowPriority);

        spacer1 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout7->addItem(spacer1);

        tabWidget2->addTab(tab2, QString());

        vboxLayout->addWidget(tabWidget2);


        retranslateUi(base_K3bVideoDVDRippingWidget);
        QObject::connect(m_checkBlankReplace, SIGNAL(toggled(bool)), m_editBlankReplace, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(base_K3bVideoDVDRippingWidget);
    } // setupUi

    void retranslateUi(QWidget *base_K3bVideoDVDRippingWidget)
    {
        textLabel4->setText(tr2i18n("Please select the audio streams you want to include in every ripped title", nullptr));
        groupBox6->setTitle(tr2i18n("Video Quality", nullptr));
        textLabel2_2->setText(tr2i18n("Video Size:", nullptr));
        m_buttonCustomPictureSize->setText(tr2i18n("&Custom...", nullptr));
        textLabel2_3->setText(tr2i18n("Video Bitrate:", nullptr));
        m_spinVideoBitrate->setSuffix(tr2i18n(" kbps", nullptr));
        groupBox1_2->setTitle(tr2i18n("Target Folder", nullptr));
        textLabel1_2->setText(tr2i18n("Free space in directory:", nullptr));
        m_labelFreeSpace->setText(tr2i18n("-", nullptr));
        textLabel1_2_2->setText(tr2i18n("Space needed:", nullptr));
        m_labelNeededSpace->setText(tr2i18n("-", nullptr));
        groupBox4->setTitle(tr2i18n("Audio Quality", nullptr));
        m_checkAudioVBR->setText(tr2i18n("Variable &Bitrate", nullptr));
        m_labelAudioBitrate->setText(tr2i18n("Audio Bitrate:", nullptr));
        m_labelNoAudioSettings->setText(tr2i18n("<p>No Audio Quality settings available for <em>AC3 pass-through</em>. The audio stream from the Video DVD is used without any changes.</p>", nullptr));
        textLabel1_3->setText(tr2i18n("Audio Bitrate:", nullptr));
        m_spinAudioBitrate->setSuffix(tr2i18n(" kbps", nullptr));
        groupBox1->setTitle(tr2i18n("Filetype", nullptr));
        textLabel1->setText(tr2i18n("Video Codec:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_comboVideoCodec->setToolTip(tr2i18n("Select the Video codec used to encode the DVD titles", nullptr));
#endif // QT_NO_TOOLTIP
        textLabel2->setText(tr2i18n("Audio Codec:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_comboAudioCodec->setToolTip(tr2i18n("Select the Audio codec used to encode the DVD titles", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget2->setTabText(tabWidget2->indexOf(tab1), tr2i18n("Setti&ngs", nullptr));
        textLabel1_4->setText(tr2i18n("Ripped files pattern:", nullptr));
        m_specialStringsLabel->setText(tr2i18n("See special strings", nullptr));
        m_checkBlankReplace->setText(tr2i18n("Replace all &blanks with:", nullptr));
        m_editBlankReplace->setText(tr2i18n("_", nullptr));
        tabWidget2->setTabText(tabWidget2->indexOf(TabPage), tr2i18n("File Namin&g", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkTwoPassEncoding->setToolTip(tr2i18n("Enable 2-pass encoding", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkTwoPassEncoding->setWhatsThis(tr2i18n("<p>If this option is checked K3b encodes the video titles in two passes. The first pass is used to gather information about the video in order to improve the distribution of bits in the second pass. The resulting video will have a higher quality using a variable bitrate.\n"
"<p>If this option is not checked K3b will create video files with a constant bitrate and a lower quality.\n"
"<p>2-pass encoding results in a doubled encoding time.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkTwoPassEncoding->setText(tr2i18n("&2-pass encoding", nullptr));
#ifndef UI_QT_NO_SHORTCUT
        m_checkTwoPassEncoding->setShortcut(tr2i18n("Alt+2", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef UI_QT_NO_TOOLTIP
        m_checkAutoClipping->setToolTip(tr2i18n("Automatically detect the black borders of the video", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkAutoClipping->setWhatsThis(tr2i18n("<p>Most Video DVDs are encoded in a letterboxed format. <em>Letterboxed</em> refers to black bars used at the top and bottom (and sometimes at the sides) of the video to force it into one of the aspect ratios supported by the Video DVD standard.\n"
"<p>If this option is checked K3b will automatically detect and remove these black bars from the resulting video.\n"
"<p>Although this method is very reliable there may be problems if the source material is exceptionally short or dark.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkAutoClipping->setText(tr2i18n("Automatic &Video Clipping", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkAudioResampling->setToolTip(tr2i18n("Change the sample rate of the audio stream to 44.1 KHz", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkAudioResampling->setWhatsThis(tr2i18n("<p>Video DVD audio streams normally are encoded with a sampling rate of 48000 Hz. Audio CDs on the other hand are encoded with a sampling rate of 44100 Hz.\n"
"<p>If this option is checked K3b will change the sampling rate of the audio stream to 44100 Hz.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkAudioResampling->setText(tr2i18n("Resample Audio to &44.1 KHz", nullptr));
#ifndef UI_QT_NO_SHORTCUT
        m_checkAudioResampling->setShortcut(tr2i18n("Alt+4", nullptr));
#endif // QT_NO_SHORTCUT
        m_checkLowPriority->setText(tr2i18n("Low s&cheduling priority for the video transcoding process", nullptr));
        tabWidget2->setTabText(tabWidget2->indexOf(tab2), tr2i18n("&Advanced", nullptr));
        Q_UNUSED(base_K3bVideoDVDRippingWidget);
    } // retranslateUi

};

namespace Ui {
    class base_K3bVideoDVDRippingWidget: public Ui_base_K3bVideoDVDRippingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BASE_K3BVIDEODVDRIPPINGWIDGET_H

