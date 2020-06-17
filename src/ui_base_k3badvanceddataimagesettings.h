#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'base_k3badvanceddataimagesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_K3BADVANCEDDATAIMAGESETTINGS_H
#define UI_BASE_K3BADVANCEDDATAIMAGESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_base_K3bAdvancedDataImageSettings
{
public:
    QGridLayout *_2;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout;
    QCheckBox *m_checkRockRidge;
    QCheckBox *m_checkJoliet;
    QCheckBox *m_checkUdf;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *m_checkPreservePermissions;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QVBoxLayout *vboxLayout1;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *m_groupIsoSettings;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *m_checkAllowUntranslatedFilenames;
    QCheckBox *m_checkOmitTrailingPeriod;
    QCheckBox *m_checkOmitVersionNumbers;
    QCheckBox *m_checkAllowBeginningPeriod;
    QCheckBox *m_checkAllow31CharFilenames;
    QCheckBox *m_checkAllowMultiDot;
    QCheckBox *m_checkAllowLowercaseCharacters;
    QCheckBox *m_checkAllowOther;
    QCheckBox *m_checkAllowFullAscii;
    QCheckBox *m_checkAllowMaxLengthFilenames;
    QGroupBox *m_groupIsoLevel;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *m_radioIsoLevel1;
    QRadioButton *m_radioIsoLevel2;
    QRadioButton *m_radioIsoLevel3;
    QGroupBox *m_groupRockRidgeSettings;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *m_checkCreateTransTbl;
    QCheckBox *m_checkHideTransTbl;
    QGroupBox *m_groupJolietSettings;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *m_checkJolietLong;
    QGroupBox *m_groupMiscSettings;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *m_checkDoNotImportSession;
    QCheckBox *m_checkDoNotCacheInodes;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *base_K3bAdvancedDataImageSettings)
    {
        if (base_K3bAdvancedDataImageSettings->objectName().isEmpty())
            base_K3bAdvancedDataImageSettings->setObjectName(QString::fromUtf8("base_K3bAdvancedDataImageSettings"));
        base_K3bAdvancedDataImageSettings->resize(573, 404);
        _2 = new QGridLayout(base_K3bAdvancedDataImageSettings);
        _2->setObjectName(QString::fromUtf8("_2"));
        groupBox = new QGroupBox(base_K3bAdvancedDataImageSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout = new QVBoxLayout(groupBox);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_checkRockRidge = new QCheckBox(groupBox);
        m_checkRockRidge->setObjectName(QString::fromUtf8("m_checkRockRidge"));
        m_checkRockRidge->setChecked(true);

        vboxLayout->addWidget(m_checkRockRidge);

        m_checkJoliet = new QCheckBox(groupBox);
        m_checkJoliet->setObjectName(QString::fromUtf8("m_checkJoliet"));

        vboxLayout->addWidget(m_checkJoliet);

        m_checkUdf = new QCheckBox(groupBox);
        m_checkUdf->setObjectName(QString::fromUtf8("m_checkUdf"));

        vboxLayout->addWidget(m_checkUdf);


        _2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(base_K3bAdvancedDataImageSettings);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_7 = new QVBoxLayout(groupBox_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        m_checkPreservePermissions = new QCheckBox(groupBox_2);
        m_checkPreservePermissions->setObjectName(QString::fromUtf8("m_checkPreservePermissions"));

        verticalLayout_7->addWidget(m_checkPreservePermissions);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);


        _2->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(base_K3bAdvancedDataImageSettings);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        vboxLayout1 = new QVBoxLayout(groupBox_3);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        scrollArea = new QScrollArea(groupBox_3);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 514, 768));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_groupIsoSettings = new QGroupBox(scrollAreaWidgetContents);
        m_groupIsoSettings->setObjectName(QString::fromUtf8("m_groupIsoSettings"));
        m_groupIsoSettings->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(m_groupIsoSettings);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_checkAllowUntranslatedFilenames = new QCheckBox(m_groupIsoSettings);
        m_checkAllowUntranslatedFilenames->setObjectName(QString::fromUtf8("m_checkAllowUntranslatedFilenames"));

        verticalLayout_2->addWidget(m_checkAllowUntranslatedFilenames);

        m_checkOmitTrailingPeriod = new QCheckBox(m_groupIsoSettings);
        m_checkOmitTrailingPeriod->setObjectName(QString::fromUtf8("m_checkOmitTrailingPeriod"));

        verticalLayout_2->addWidget(m_checkOmitTrailingPeriod);

        m_checkOmitVersionNumbers = new QCheckBox(m_groupIsoSettings);
        m_checkOmitVersionNumbers->setObjectName(QString::fromUtf8("m_checkOmitVersionNumbers"));

        verticalLayout_2->addWidget(m_checkOmitVersionNumbers);

        m_checkAllowBeginningPeriod = new QCheckBox(m_groupIsoSettings);
        m_checkAllowBeginningPeriod->setObjectName(QString::fromUtf8("m_checkAllowBeginningPeriod"));

        verticalLayout_2->addWidget(m_checkAllowBeginningPeriod);

        m_checkAllow31CharFilenames = new QCheckBox(m_groupIsoSettings);
        m_checkAllow31CharFilenames->setObjectName(QString::fromUtf8("m_checkAllow31CharFilenames"));

        verticalLayout_2->addWidget(m_checkAllow31CharFilenames);

        m_checkAllowMultiDot = new QCheckBox(m_groupIsoSettings);
        m_checkAllowMultiDot->setObjectName(QString::fromUtf8("m_checkAllowMultiDot"));

        verticalLayout_2->addWidget(m_checkAllowMultiDot);

        m_checkAllowLowercaseCharacters = new QCheckBox(m_groupIsoSettings);
        m_checkAllowLowercaseCharacters->setObjectName(QString::fromUtf8("m_checkAllowLowercaseCharacters"));

        verticalLayout_2->addWidget(m_checkAllowLowercaseCharacters);

        m_checkAllowOther = new QCheckBox(m_groupIsoSettings);
        m_checkAllowOther->setObjectName(QString::fromUtf8("m_checkAllowOther"));

        verticalLayout_2->addWidget(m_checkAllowOther);

        m_checkAllowFullAscii = new QCheckBox(m_groupIsoSettings);
        m_checkAllowFullAscii->setObjectName(QString::fromUtf8("m_checkAllowFullAscii"));

        verticalLayout_2->addWidget(m_checkAllowFullAscii);

        m_checkAllowMaxLengthFilenames = new QCheckBox(m_groupIsoSettings);
        m_checkAllowMaxLengthFilenames->setObjectName(QString::fromUtf8("m_checkAllowMaxLengthFilenames"));

        verticalLayout_2->addWidget(m_checkAllowMaxLengthFilenames);


        verticalLayout->addWidget(m_groupIsoSettings);

        m_groupIsoLevel = new QGroupBox(scrollAreaWidgetContents);
        m_groupIsoLevel->setObjectName(QString::fromUtf8("m_groupIsoLevel"));
        verticalLayout_4 = new QVBoxLayout(m_groupIsoLevel);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        m_radioIsoLevel1 = new QRadioButton(m_groupIsoLevel);
        m_radioIsoLevel1->setObjectName(QString::fromUtf8("m_radioIsoLevel1"));

        verticalLayout_4->addWidget(m_radioIsoLevel1);

        m_radioIsoLevel2 = new QRadioButton(m_groupIsoLevel);
        m_radioIsoLevel2->setObjectName(QString::fromUtf8("m_radioIsoLevel2"));

        verticalLayout_4->addWidget(m_radioIsoLevel2);

        m_radioIsoLevel3 = new QRadioButton(m_groupIsoLevel);
        m_radioIsoLevel3->setObjectName(QString::fromUtf8("m_radioIsoLevel3"));

        verticalLayout_4->addWidget(m_radioIsoLevel3);


        verticalLayout->addWidget(m_groupIsoLevel);

        m_groupRockRidgeSettings = new QGroupBox(scrollAreaWidgetContents);
        m_groupRockRidgeSettings->setObjectName(QString::fromUtf8("m_groupRockRidgeSettings"));
        verticalLayout_3 = new QVBoxLayout(m_groupRockRidgeSettings);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        m_checkCreateTransTbl = new QCheckBox(m_groupRockRidgeSettings);
        m_checkCreateTransTbl->setObjectName(QString::fromUtf8("m_checkCreateTransTbl"));

        verticalLayout_3->addWidget(m_checkCreateTransTbl);

        m_checkHideTransTbl = new QCheckBox(m_groupRockRidgeSettings);
        m_checkHideTransTbl->setObjectName(QString::fromUtf8("m_checkHideTransTbl"));

        verticalLayout_3->addWidget(m_checkHideTransTbl);


        verticalLayout->addWidget(m_groupRockRidgeSettings);

        m_groupJolietSettings = new QGroupBox(scrollAreaWidgetContents);
        m_groupJolietSettings->setObjectName(QString::fromUtf8("m_groupJolietSettings"));
        verticalLayout_5 = new QVBoxLayout(m_groupJolietSettings);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        m_checkJolietLong = new QCheckBox(m_groupJolietSettings);
        m_checkJolietLong->setObjectName(QString::fromUtf8("m_checkJolietLong"));

        verticalLayout_5->addWidget(m_checkJolietLong);


        verticalLayout->addWidget(m_groupJolietSettings);

        m_groupMiscSettings = new QGroupBox(scrollAreaWidgetContents);
        m_groupMiscSettings->setObjectName(QString::fromUtf8("m_groupMiscSettings"));
        verticalLayout_6 = new QVBoxLayout(m_groupMiscSettings);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        m_checkDoNotImportSession = new QCheckBox(m_groupMiscSettings);
        m_checkDoNotImportSession->setObjectName(QString::fromUtf8("m_checkDoNotImportSession"));

        verticalLayout_6->addWidget(m_checkDoNotImportSession);

        m_checkDoNotCacheInodes = new QCheckBox(m_groupMiscSettings);
        m_checkDoNotCacheInodes->setObjectName(QString::fromUtf8("m_checkDoNotCacheInodes"));

        verticalLayout_6->addWidget(m_checkDoNotCacheInodes);


        verticalLayout->addWidget(m_groupMiscSettings);

        scrollArea->setWidget(scrollAreaWidgetContents);

        vboxLayout1->addWidget(scrollArea);


        _2->addWidget(groupBox_3, 1, 0, 1, 2);

        m_buttonBox = new QDialogButtonBox(base_K3bAdvancedDataImageSettings);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        _2->addWidget(m_buttonBox, 2, 0, 1, 2);

        QWidget::setTabOrder(m_checkRockRidge, m_checkJoliet);

        retranslateUi(base_K3bAdvancedDataImageSettings);
        QObject::connect(m_checkAllowUntranslatedFilenames, SIGNAL(toggled(bool)), m_checkOmitTrailingPeriod, SLOT(setDisabled(bool)));
        QObject::connect(m_checkAllowUntranslatedFilenames, SIGNAL(toggled(bool)), m_checkOmitVersionNumbers, SLOT(setDisabled(bool)));
        QObject::connect(m_checkAllowUntranslatedFilenames, SIGNAL(toggled(bool)), m_checkAllowBeginningPeriod, SLOT(setDisabled(bool)));
        QObject::connect(m_checkAllowUntranslatedFilenames, SIGNAL(toggled(bool)), m_checkAllow31CharFilenames, SLOT(setDisabled(bool)));
        QObject::connect(m_checkAllowUntranslatedFilenames, SIGNAL(toggled(bool)), m_checkAllowMultiDot, SLOT(setDisabled(bool)));
        QObject::connect(m_checkAllowUntranslatedFilenames, SIGNAL(toggled(bool)), m_checkAllowLowercaseCharacters, SLOT(setDisabled(bool)));
        QObject::connect(m_checkAllowUntranslatedFilenames, SIGNAL(toggled(bool)), m_checkAllowOther, SLOT(setDisabled(bool)));
        QObject::connect(m_checkAllowUntranslatedFilenames, SIGNAL(toggled(bool)), m_checkAllowFullAscii, SLOT(setDisabled(bool)));
        QObject::connect(m_checkAllowUntranslatedFilenames, SIGNAL(toggled(bool)), m_checkAllowMaxLengthFilenames, SLOT(setDisabled(bool)));
        QObject::connect(m_buttonBox, SIGNAL(accepted()), base_K3bAdvancedDataImageSettings, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), base_K3bAdvancedDataImageSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(base_K3bAdvancedDataImageSettings);
    } // setupUi

    void retranslateUi(QDialog *base_K3bAdvancedDataImageSettings)
    {
        groupBox->setTitle(tr2i18n("File Systems", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkRockRidge->setToolTip(tr2i18n("Add Rock Ridge extensions to the file system", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkRockRidge->setWhatsThis(tr2i18n("<p>If this option is checked, K3b will generate the System Use Sharing Protocol records (SUSP) specified by the Rock Ridge Interchange Protocol (IEEE-P1282).\n"
"<p>Rock Ridge extends the ISO 9660 filesystem by features equal to the UNIX filesystems (permissions, symbolic links, very long filenames, ...). It uses ISO-8859 or UTF-16 based characters and allows 255 octets.\n"
"<p>Rock Ridge extensions are located at the end of each ISO 9660 directory record. This makes the Rock Ridge tree closely coupled to the ISO 9660 tree.\n"
"<p><b>It is highly recommended to use Rock Ridge extensions on every data CD or DVD.</b>", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkRockRidge->setText(tr2i18n("&Generate Rock Ridge extensions", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkJoliet->setToolTip(tr2i18n("Add Joliet extensions to the file system", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkJoliet->setWhatsThis(tr2i18n("<p>If this option is checked, K3b will add additional Joliet extensions to the ISO 9660 file system.\n"
"<p>Joliet is not an accepted independent international standard like ISO 9660 or Rock Ridge. It is mainly used on Windows systems.\n"
"<p>Joliet does not allow all characters, so the Joliet filenames are not identical to the filenames on disk (as compared to Rock Ridge). Joliet has a filename length limitation of 64 chars (independent from the character coding and type e.g. European vs. Japanese). This is inconvenient, as modern file systems all allow 255 characters per path name component.\n"
"<p>Joliet uses UTF-16 coding.\n"
"<p><b>Caution:</b> With the exception of Linux and FreeBSD, there is no POSIX-like OS that supports Joliet. So <b>never create Joliet-only CDs or DVDs</b> for that reason.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkJoliet->setText(tr2i18n("Generate &Joliet extensions", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkUdf->setToolTip(tr2i18n("Add UDF structures to the file system", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkUdf->setWhatsThis(tr2i18n("<p>If this option is checked K3b will create UDF filesystem structures in addition to the ISO 9660 filesystem.\n"
"<p>The UDF (<em><b>U</b>niversal <b>D</b>isk <b>F</b>ormat</em>) is mainly used for DVDs.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkUdf->setText(tr2i18n("Generate &UDF structures", nullptr));
        groupBox_2->setTitle(tr2i18n("Other Settings", nullptr));
#ifndef UI_QT_NO_WHATSTHIS
        m_checkPreservePermissions->setWhatsThis(tr2i18n("<p>If this option is checked, all files in the resulting file system will have exactly the same permissions as the source files. (Otherwise, all files will have equal permissions and be owned by root).\n"
"<p>This is mainly useful for backups.<p><b>Caution:</b> The permissions may not make much sense on other file systems; for example, if a user that owns a file on the CD or DVD does not exist.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkPreservePermissions->setText(tr2i18n("Preserve file permissions (bac&kup)", nullptr));
#ifndef UI_QT_NO_WHATSTHIS
        groupBox_3->setWhatsThis(tr2i18n("Set special ISO 9660 Filesystem preferences.", nullptr));
#endif // QT_NO_WHATSTHIS
        groupBox_3->setTitle(tr2i18n("File System Settings", nullptr));
        m_groupIsoSettings->setTitle(tr2i18n("ISO 9660 Settings", nullptr));
#ifndef UI_QT_NO_WHATSTHIS
        m_checkAllowUntranslatedFilenames->setWhatsThis(tr2i18n("Force all options below", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkAllowUntranslatedFilenames->setText(tr2i18n("Allow untranslated ISO 9660 filenames", nullptr));
        m_checkOmitTrailingPeriod->setText(tr2i18n("Omit trailing period in ISO 9660 filenames", nullptr));
        m_checkOmitVersionNumbers->setText(tr2i18n("Omit version numbers in ISO 9660 filenames", nullptr));
        m_checkAllowBeginningPeriod->setText(tr2i18n("Allow leading period in ISO 9660 filenames", nullptr));
        m_checkAllow31CharFilenames->setText(tr2i18n("Allow 31 character ISO 9660 filenames", nullptr));
        m_checkAllowMultiDot->setText(tr2i18n("Allow multiple dots in ISO 9660 filenames", nullptr));
        m_checkAllowLowercaseCharacters->setText(tr2i18n("Allow lowercase characters in ISO 9660 filenames", nullptr));
        m_checkAllowOther->setText(tr2i18n("Allow ~ and # in ISO 9660 filenames", nullptr));
        m_checkAllowFullAscii->setText(tr2i18n("Allow full ASCII charset for ISO 9660 filenames", nullptr));
        m_checkAllowMaxLengthFilenames->setText(tr2i18n("Allow max length ISO 9660 filenames (37 characters)", nullptr));
#ifndef UI_QT_NO_WHATSTHIS
        m_groupIsoLevel->setWhatsThis(tr2i18n("<p>Set the ISO 9660 conformance level.\n"
"<ul>\n"
"<li>Level 1: Files may only consist of one section and filenames are restricted to 8.3 characters.</li>\n"
"<li>Level 2: Files may only consist of one section.</li>\n"
"<li>Level 3: No restrictions.</li>\n"
"</ul>\n"
"<p>With all ISO 9660 levels, all filenames are restricted to upper case letters, numbers and the underscore (_). The maximum filename length is 31 characters, the directory nesting level is restricted to 8 and the maximum path length is limited to 255 characters. (These restrictions may be violated with the additional ISO 9660 features K3b offers.)", nullptr));
#endif // QT_NO_WHATSTHIS
        m_groupIsoLevel->setTitle(tr2i18n("ISO 9660 Level", nullptr));
        m_radioIsoLevel1->setText(tr2i18n("&Level 1", nullptr));
        m_radioIsoLevel2->setText(tr2i18n("Level &2", nullptr));
        m_radioIsoLevel3->setText(tr2i18n("Level &3", nullptr));
        m_groupRockRidgeSettings->setTitle(tr2i18n("Rock Ridge Settings", nullptr));
        m_checkCreateTransTbl->setText(tr2i18n("Create TRANS.TBL files", nullptr));
        m_checkHideTransTbl->setText(tr2i18n("Hide TRANS.TBL files in Joliet", nullptr));
        m_groupJolietSettings->setTitle(tr2i18n("Joliet Settings", nullptr));
        m_checkJolietLong->setText(tr2i18n("Allow 103 character Joliet filenames", nullptr));
        m_groupMiscSettings->setTitle(tr2i18n("Misc Settings", nullptr));
        m_checkDoNotImportSession->setText(tr2i18n("Do not import previous session", nullptr));
        m_checkDoNotCacheInodes->setText(tr2i18n("Do not cache inodes", nullptr));
        Q_UNUSED(base_K3bAdvancedDataImageSettings);
    } // retranslateUi

};

namespace Ui {
    class base_K3bAdvancedDataImageSettings: public Ui_base_K3bAdvancedDataImageSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BASE_K3BADVANCEDDATAIMAGESETTINGS_H

