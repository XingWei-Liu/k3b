#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'base_k3bmiscoptiontab.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_K3BMISCOPTIONTAB_H
#define UI_BASE_K3BMISCOPTIONTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <k3bintmapcombobox.h>
#include "k3bintmapcombobox.h"
#include "kurlrequester.h"

QT_BEGIN_NAMESPACE

class Ui_base_K3bMiscOptionTab
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox1;
    QVBoxLayout *vboxLayout1;
    QCheckBox *m_checkSaveOnExit;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1_2;
    KUrlRequester *m_editTempDir;
    QGroupBox *groupBox3;
    QVBoxLayout *vboxLayout2;
    QCheckBox *m_checkSystemConfig;
    QGroupBox *groupBox2;
    QVBoxLayout *vboxLayout3;
    QCheckBox *m_checkShowProgressOSD;
    QCheckBox *m_checkHideMainWindowWhileWriting;
    QCheckBox *m_checkShowSplash;
    QCheckBox *m_checkKeepDialogsOpen;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel1_3;
    K3b::IntMapComboBox *m_comboActionDialogSettings;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *base_K3bMiscOptionTab)
    {
        if (base_K3bMiscOptionTab->objectName().isEmpty())
            base_K3bMiscOptionTab->setObjectName(QString::fromUtf8("base_K3bMiscOptionTab"));
        base_K3bMiscOptionTab->resize(346, 322);
        vboxLayout = new QVBoxLayout(base_K3bMiscOptionTab);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox1 = new QGroupBox(base_K3bMiscOptionTab);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        vboxLayout1 = new QVBoxLayout(groupBox1);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        m_checkSaveOnExit = new QCheckBox(groupBox1);
        m_checkSaveOnExit->setObjectName(QString::fromUtf8("m_checkSaveOnExit"));

        vboxLayout1->addWidget(m_checkSaveOnExit);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel1_2 = new QLabel(groupBox1);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setWordWrap(false);

        hboxLayout->addWidget(textLabel1_2);

        m_editTempDir = new KUrlRequester(groupBox1);
        m_editTempDir->setObjectName(QString::fromUtf8("m_editTempDir"));

        hboxLayout->addWidget(m_editTempDir);


        vboxLayout1->addLayout(hboxLayout);


        vboxLayout->addWidget(groupBox1);

        groupBox3 = new QGroupBox(base_K3bMiscOptionTab);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        vboxLayout2 = new QVBoxLayout(groupBox3);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        m_checkSystemConfig = new QCheckBox(groupBox3);
        m_checkSystemConfig->setObjectName(QString::fromUtf8("m_checkSystemConfig"));

        vboxLayout2->addWidget(m_checkSystemConfig);


        vboxLayout->addWidget(groupBox3);

        groupBox2 = new QGroupBox(base_K3bMiscOptionTab);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        vboxLayout3 = new QVBoxLayout(groupBox2);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        m_checkShowProgressOSD = new QCheckBox(groupBox2);
        m_checkShowProgressOSD->setObjectName(QString::fromUtf8("m_checkShowProgressOSD"));

        vboxLayout3->addWidget(m_checkShowProgressOSD);

        m_checkHideMainWindowWhileWriting = new QCheckBox(groupBox2);
        m_checkHideMainWindowWhileWriting->setObjectName(QString::fromUtf8("m_checkHideMainWindowWhileWriting"));

        vboxLayout3->addWidget(m_checkHideMainWindowWhileWriting);

        m_checkShowSplash = new QCheckBox(groupBox2);
        m_checkShowSplash->setObjectName(QString::fromUtf8("m_checkShowSplash"));

        vboxLayout3->addWidget(m_checkShowSplash);

        m_checkKeepDialogsOpen = new QCheckBox(groupBox2);
        m_checkKeepDialogsOpen->setObjectName(QString::fromUtf8("m_checkKeepDialogsOpen"));

        vboxLayout3->addWidget(m_checkKeepDialogsOpen);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabel1_3 = new QLabel(groupBox2);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        textLabel1_3->setWordWrap(false);

        hboxLayout1->addWidget(textLabel1_3);

        m_comboActionDialogSettings = new K3b::IntMapComboBox(groupBox2);
        m_comboActionDialogSettings->setObjectName(QString::fromUtf8("m_comboActionDialogSettings"));

        hboxLayout1->addWidget(m_comboActionDialogSettings);


        vboxLayout3->addLayout(hboxLayout1);


        vboxLayout->addWidget(groupBox2);

        spacerItem = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1_3->setBuddy(m_comboActionDialogSettings);
#endif // QT_NO_SHORTCUT

        retranslateUi(base_K3bMiscOptionTab);

        QMetaObject::connectSlotsByName(base_K3bMiscOptionTab);
    } // setupUi

    void retranslateUi(QWidget *base_K3bMiscOptionTab)
    {
        groupBox1->setTitle(tr2i18n("Misc", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkSaveOnExit->setToolTip(tr2i18n("Ask to save modified projects on exit", nullptr));
#endif // QT_NO_TOOLTIP
        m_checkSaveOnExit->setText(tr2i18n("&Ask to save projects on exit", nullptr));
        textLabel1_2->setText(tr2i18n("Default Temporary Directory:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_editTempDir->setToolTip(tr2i18n("The directory where K3b stores temporary files", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_editTempDir->setWhatsThis(tr2i18n("<p>This is the default temporary directory. This is where K3b will store temporary files such as iso images or decoded audio files.<p>Be aware that the temporary directory may also be changed in every project burn dialog.", nullptr));
#endif // QT_NO_WHATSTHIS
        groupBox3->setTitle(tr2i18n("System", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkSystemConfig->setToolTip(tr2i18n("Check system Configuration", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkSystemConfig->setWhatsThis(tr2i18n("<p>If this option is checked K3b will check the system configuration for any problems on startup and when the user changes the settings.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkSystemConfig->setText(tr2i18n("&Check system configuration", nullptr));
        groupBox2->setTitle(tr2i18n("GUI Settings", nullptr));
#ifndef UI_QT_NO_WHATSTHIS
        m_checkShowProgressOSD->setWhatsThis(tr2i18n("<p>If this option is checked K3b will display the progress in KDE notification area. If K3b is run outside KDE environment a separate progress window may be shown instead.</p>", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkShowProgressOSD->setText(tr2i18n("Show &progress in notification area", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkHideMainWindowWhileWriting->setToolTip(tr2i18n("Hide the main window while displaying the progress window", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkHideMainWindowWhileWriting->setWhatsThis(tr2i18n("<p>If this option is checked K3b will hide the main window while displaying the progress dialog.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkHideMainWindowWhileWriting->setText(tr2i18n("Hide &main window while writing", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkShowSplash->setToolTip(tr2i18n("Show the splash screen when K3b starts", nullptr));
#endif // QT_NO_TOOLTIP
        m_checkShowSplash->setText(tr2i18n("Show splash screen", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkKeepDialogsOpen->setToolTip(tr2i18n("Do not close action dialogs after finishing the process", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_checkKeepDialogsOpen->setWhatsThis(tr2i18n("<p>If this option is checked K3b will not close action dialogs such as the CD Copy dialog after the process has been finished. It will be kept open to start a new process, for instance, copying another CD.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_checkKeepDialogsOpen->setText(tr2i18n("&Keep action dialogs open", nullptr));
        textLabel1_3->setText(tr2i18n("&Default action dialog settings:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_comboActionDialogSettings->setToolTip(tr2i18n("Settings to load when opening an action dialog", nullptr));
#endif // QT_NO_TOOLTIP
        Q_UNUSED(base_K3bMiscOptionTab);
    } // retranslateUi

};

namespace Ui {
    class base_K3bMiscOptionTab: public Ui_base_K3bMiscOptionTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BASE_K3BMISCOPTIONTAB_H

