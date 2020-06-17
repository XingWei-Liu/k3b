#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'base_k3bmovixoptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_K3BMOVIXOPTIONSWIDGET_H
#define UI_BASE_K3BMOVIXOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_base_K3bMovixOptionsWidget
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout;
    QLabel *textLabel2;
    KComboBox *m_comboSubtitleFontset;
    QLabel *textLabel7;
    QHBoxLayout *hboxLayout;
    QCheckBox *m_checkRandomPlay;
    QCheckBox *m_checkNoDma;
    QLineEdit *m_editUnwantedMplayerOptions;
    QLineEdit *m_editAdditionalMplayerOptions;
    QLabel *textLabel6;
    QLabel *textLabel3;
    QSpinBox *m_spinLoop;
    QLabel *m_labelAudioBackground;
    KComboBox *m_comboAudioBackground;
    QGroupBox *groupBox3;
    QGridLayout *gridLayout1;
    QLabel *m_labelKeyboardLayout;
    QLabel *textLabel1;
    KComboBox *m_comboBootMessageLanguage;
    QLabel *textLabel5;
    KComboBox *m_comboDefaultBootLabel;
    KComboBox *m_comboKeyboardLayout;
    QGroupBox *groupBox1;
    QHBoxLayout *hboxLayout1;
    QCheckBox *m_checkEject;
    QCheckBox *m_checkShutdown;
    QCheckBox *m_checkReboot;

    void setupUi(QWidget *base_K3bMovixOptionsWidget)
    {
        if (base_K3bMovixOptionsWidget->objectName().isEmpty())
            base_K3bMovixOptionsWidget->setObjectName(QString::fromUtf8("base_K3bMovixOptionsWidget"));
        base_K3bMovixOptionsWidget->resize(348, 418);
        vboxLayout = new QVBoxLayout(base_K3bMovixOptionsWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox2 = new QGroupBox(base_K3bMovixOptionsWidget);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        gridLayout = new QGridLayout(groupBox2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel2 = new QLabel(groupBox2);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        gridLayout->addWidget(textLabel2, 0, 0, 1, 1);

        m_comboSubtitleFontset = new KComboBox(groupBox2);
        m_comboSubtitleFontset->setObjectName(QString::fromUtf8("m_comboSubtitleFontset"));

        gridLayout->addWidget(m_comboSubtitleFontset, 0, 1, 1, 1);

        textLabel7 = new QLabel(groupBox2);
        textLabel7->setObjectName(QString::fromUtf8("textLabel7"));
        textLabel7->setWordWrap(false);

        gridLayout->addWidget(textLabel7, 5, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_checkRandomPlay = new QCheckBox(groupBox2);
        m_checkRandomPlay->setObjectName(QString::fromUtf8("m_checkRandomPlay"));

        hboxLayout->addWidget(m_checkRandomPlay);

        m_checkNoDma = new QCheckBox(groupBox2);
        m_checkNoDma->setObjectName(QString::fromUtf8("m_checkNoDma"));

        hboxLayout->addWidget(m_checkNoDma);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 2);

        m_editUnwantedMplayerOptions = new QLineEdit(groupBox2);
        m_editUnwantedMplayerOptions->setObjectName(QString::fromUtf8("m_editUnwantedMplayerOptions"));

        gridLayout->addWidget(m_editUnwantedMplayerOptions, 5, 1, 1, 1);

        m_editAdditionalMplayerOptions = new QLineEdit(groupBox2);
        m_editAdditionalMplayerOptions->setObjectName(QString::fromUtf8("m_editAdditionalMplayerOptions"));

        gridLayout->addWidget(m_editAdditionalMplayerOptions, 4, 1, 1, 1);

        textLabel6 = new QLabel(groupBox2);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        textLabel6->setWordWrap(false);

        gridLayout->addWidget(textLabel6, 4, 0, 1, 1);

        textLabel3 = new QLabel(groupBox2);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(false);

        gridLayout->addWidget(textLabel3, 2, 0, 1, 1);

        m_spinLoop = new QSpinBox(groupBox2);
        m_spinLoop->setObjectName(QString::fromUtf8("m_spinLoop"));
        m_spinLoop->setValue(1);

        gridLayout->addWidget(m_spinLoop, 2, 1, 1, 1);

        m_labelAudioBackground = new QLabel(groupBox2);
        m_labelAudioBackground->setObjectName(QString::fromUtf8("m_labelAudioBackground"));
        m_labelAudioBackground->setWordWrap(false);

        gridLayout->addWidget(m_labelAudioBackground, 1, 0, 1, 1);

        m_comboAudioBackground = new KComboBox(groupBox2);
        m_comboAudioBackground->setObjectName(QString::fromUtf8("m_comboAudioBackground"));

        gridLayout->addWidget(m_comboAudioBackground, 1, 1, 1, 1);


        vboxLayout->addWidget(groupBox2);

        groupBox3 = new QGroupBox(base_K3bMovixOptionsWidget);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        gridLayout1 = new QGridLayout(groupBox3);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        m_labelKeyboardLayout = new QLabel(groupBox3);
        m_labelKeyboardLayout->setObjectName(QString::fromUtf8("m_labelKeyboardLayout"));
        m_labelKeyboardLayout->setWordWrap(false);

        gridLayout1->addWidget(m_labelKeyboardLayout, 1, 0, 1, 1);

        textLabel1 = new QLabel(groupBox3);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout1->addWidget(textLabel1, 0, 0, 1, 1);

        m_comboBootMessageLanguage = new KComboBox(groupBox3);
        m_comboBootMessageLanguage->setObjectName(QString::fromUtf8("m_comboBootMessageLanguage"));

        gridLayout1->addWidget(m_comboBootMessageLanguage, 0, 1, 1, 1);

        textLabel5 = new QLabel(groupBox3);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
        textLabel5->setWordWrap(false);

        gridLayout1->addWidget(textLabel5, 2, 0, 1, 1);

        m_comboDefaultBootLabel = new KComboBox(groupBox3);
        m_comboDefaultBootLabel->setObjectName(QString::fromUtf8("m_comboDefaultBootLabel"));

        gridLayout1->addWidget(m_comboDefaultBootLabel, 2, 1, 1, 1);

        m_comboKeyboardLayout = new KComboBox(groupBox3);
        m_comboKeyboardLayout->setObjectName(QString::fromUtf8("m_comboKeyboardLayout"));

        gridLayout1->addWidget(m_comboKeyboardLayout, 1, 1, 1, 1);


        vboxLayout->addWidget(groupBox3);

        groupBox1 = new QGroupBox(base_K3bMovixOptionsWidget);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(groupBox1->sizePolicy().hasHeightForWidth());
        groupBox1->setSizePolicy(sizePolicy);
        hboxLayout1 = new QHBoxLayout(groupBox1);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        m_checkEject = new QCheckBox(groupBox1);
        m_checkEject->setObjectName(QString::fromUtf8("m_checkEject"));

        hboxLayout1->addWidget(m_checkEject);

        m_checkShutdown = new QCheckBox(groupBox1);
        m_checkShutdown->setObjectName(QString::fromUtf8("m_checkShutdown"));

        hboxLayout1->addWidget(m_checkShutdown);

        m_checkReboot = new QCheckBox(groupBox1);
        m_checkReboot->setObjectName(QString::fromUtf8("m_checkReboot"));

        hboxLayout1->addWidget(m_checkReboot);


        vboxLayout->addWidget(groupBox1);


        retranslateUi(base_K3bMovixOptionsWidget);
        QObject::connect(m_checkShutdown, SIGNAL(toggled(bool)), m_checkReboot, SLOT(setDisabled(bool)));
        QObject::connect(m_checkReboot, SIGNAL(toggled(bool)), m_checkShutdown, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(base_K3bMovixOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *base_K3bMovixOptionsWidget)
    {
        groupBox2->setTitle(tr2i18n("Playback Settings", nullptr));
        textLabel2->setText(tr2i18n("MPlayer subtitle fontset:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_comboSubtitleFontset->setToolTip(tr2i18n("Select the font to be used to render subtitles", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel7->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        textLabel7->setText(tr2i18n("Unwanted MPlayer options:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkRandomPlay->setToolTip(tr2i18n("The files are played in random order", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkRandomPlay->setWhatsThis(tr2i18n("<p>If this option is checked the order in which the files are played is determined randomly every time it is played.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkRandomPlay->setText(tr2i18n("Pla&y files randomly", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkNoDma->setToolTip(tr2i18n("Do not use DMA for media access", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkNoDma->setWhatsThis(tr2i18n("<p>If this option is checked the resulting eMovix CD/DVD will not use DMA for accessing the drive. This will slow down reading from the CD/DVD but may be necessary on some systems that do not support DMA.</p>", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkNoDma->setText(tr2i18n("&Do not use DMA", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_editUnwantedMplayerOptions->setToolTip(tr2i18n("MPlayer options you want to be sure MPlayer will not use", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_editUnwantedMplayerOptions->setWhatsThis(tr2i18n("<p>Here one can specify MPlayer options that should never be used.\n"
"<p>They have to be separated by spaces:\n"
"<pre>opt1 opt2 opt3</pre>", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        m_editAdditionalMplayerOptions->setToolTip(tr2i18n("Additional MPlayer options", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_editAdditionalMplayerOptions->setWhatsThis(tr2i18n("<p>MPlayer options that should be used in any case.\n"
"<p>They have to be separated by spaces:\n"
"<pre>opt1 opt2 opt3</pre>", nullptr));
#endif // QT_NO_WHATSTHIS
        textLabel6->setText(tr2i18n("Additional MPlayer options:", nullptr));
        textLabel3->setText(tr2i18n("Loop playlist:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_spinLoop->setToolTip(tr2i18n("How many times should the playlist be looped", nullptr));
#endif // QT_NO_TOOLTIP
        m_spinLoop->setSpecialValueText(tr2i18n("infinity", nullptr));
        m_spinLoop->setSuffix(tr2i18n(" time(s)", nullptr));
        m_labelAudioBackground->setText(tr2i18n("Audio Player Background:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_comboAudioBackground->setToolTip(tr2i18n("Background video to show during audio playback", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_comboAudioBackground->setWhatsThis(tr2i18n("<p><b>Audio Player Background</b>\n"
"<p>During audio playback normally the screen would be black. However, if a background movie has been selected, eMovix will display it during playback.\n"
"<p>Additional background movies can be installed. However, this is not as simple as a few mouse clicks. The background movies are stored in the emovix shared data folder (mostly <i>/usr/share/emovix</i> or <i>/usr/local/share/emovix</i>) under <em>backgrounds</em>. So to add a background one has to copy the file to that folder.", nullptr));
#endif // QT_NO_WHATSTHIS
        groupBox3->setTitle(tr2i18n("Startup Behavior", nullptr));
        m_labelKeyboardLayout->setText(tr2i18n("Keyboard Layout:", nullptr));
        textLabel1->setText(tr2i18n("eMovix boot message language:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_comboBootMessageLanguage->setToolTip(tr2i18n("Select the language of the eMovix help screens", nullptr));
#endif // QT_NO_TOOLTIP
        textLabel5->setText(tr2i18n("Default boot label:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_comboDefaultBootLabel->setToolTip(tr2i18n("Select the default Linux kernel configuration", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_comboDefaultBootLabel->setWhatsThis(tr2i18n("<p><b>eMovix Boot Labels</b>\n"
"<p>eMovix provides a variety of different boot configurations which can be selected at boot time via a boot label (comparable to Lilo or Grub). The many different boot configurations mainly influence the Video output.\n"
"<p>The <b>default</b>, <b>movix</b>, or <b>MoviX</b> labels start a general Vesa video driver.\n"
"<p>The <b>TV</b> labels can be used to direct video to the TV output of the graphic board. eMovix provides TVout drivers for different brands of graphic boards.\n"
"<p>The <b>FB</b> labels refer to configurations that start a Frame Buffer driver in different screen resolutions.\n"
"<p>The <b>AA</b> labels make eMovix output the video through the ASCII-Art library which displays the picture in text mode through the usage of simple ASCII characters.\n"
"<p>The <b>hd</b> label makes eMovix boot from the local harddisk instead of the medium. This can be used to prevent accidental starting of an eMovix medium.\n"
"<p>The <b>floppy</b> label makes eMovix boot from the "
                        "local floppy drive instead of the medium.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        m_comboKeyboardLayout->setToolTip(tr2i18n("Select the layout of the keyboard", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_comboKeyboardLayout->setWhatsThis(tr2i18n("<p>The keyboard layout selected here will be used for eMovix commands such as controlling the media player.", nullptr));
#endif // QT_NO_WHATSTHIS
        groupBox1->setTitle(tr2i18n("Behavior After Playing", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkEject->setToolTip(tr2i18n("Eject the disk after playing has finished", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkEject->setWhatsThis(tr2i18n("<p>If this option is checked the disk will be ejected after MPlayer has finished.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkEject->setText(tr2i18n("E&ject disk", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkShutdown->setToolTip(tr2i18n("Shutdown after playing has finished", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkShutdown->setWhatsThis(tr2i18n("<p>If this option is checked the PC will be shut down after MPlayer has finished playing.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkShutdown->setText(tr2i18n("Sh&utdown", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkReboot->setToolTip(tr2i18n("Reboot after playing has finished", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkReboot->setWhatsThis(tr2i18n("<p>If this option is checked the PC will be rebooted after MPlayer has finished playing.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkReboot->setText(tr2i18n("Re&boot", nullptr));
        Q_UNUSED(base_K3bMovixOptionsWidget);
    } // retranslateUi

};

namespace Ui {
    class base_K3bMovixOptionsWidget: public Ui_base_K3bMovixOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BASE_K3BMOVIXOPTIONSWIDGET_H

