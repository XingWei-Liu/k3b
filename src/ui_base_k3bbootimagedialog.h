#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'base_k3bbootimagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_K3BBOOTIMAGEDIALOG_H
#define UI_BASE_K3BBOOTIMAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_base_K3bBootImageDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QPushButton *m_buttonNew;
    QPushButton *m_buttonDelete;
    QTreeView *m_viewImages;
    QGroupBox *m_groupImageType;
    QHBoxLayout *horizontalLayout;
    QRadioButton *m_radioFloppy;
    QRadioButton *m_radioHarddisk;
    QRadioButton *m_radioNoEmulation;
    QGroupBox *m_groupOptions;
    QVBoxLayout *vboxLayout1;
    QCheckBox *m_checkNoBoot;
    QCheckBox *m_checkInfoTable;
    QGridLayout *gridLayout;
    QLineEdit *m_editLoadSegment;
    QLineEdit *m_editLoadSize;
    QLabel *textLabel2_2;
    QLabel *textLabel3;
    QHBoxLayout *hboxLayout1;
    QPushButton *m_buttonToggleOptions;
    QSpacerItem *spacer16;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel2;
    QLineEdit *m_editBootCataloge;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *base_K3bBootImageDialog)
    {
        if (base_K3bBootImageDialog->objectName().isEmpty())
            base_K3bBootImageDialog->setObjectName(QString::fromUtf8("base_K3bBootImageDialog"));
        base_K3bBootImageDialog->resize(443, 495);
        vboxLayout = new QVBoxLayout(base_K3bBootImageDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(base_K3bBootImageDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(false);

        hboxLayout->addWidget(label);

        m_buttonNew = new QPushButton(base_K3bBootImageDialog);
        m_buttonNew->setObjectName(QString::fromUtf8("m_buttonNew"));

        hboxLayout->addWidget(m_buttonNew);

        m_buttonDelete = new QPushButton(base_K3bBootImageDialog);
        m_buttonDelete->setObjectName(QString::fromUtf8("m_buttonDelete"));

        hboxLayout->addWidget(m_buttonDelete);


        vboxLayout->addLayout(hboxLayout);

        m_viewImages = new QTreeView(base_K3bBootImageDialog);
        m_viewImages->setObjectName(QString::fromUtf8("m_viewImages"));
        m_viewImages->setRootIsDecorated(false);

        vboxLayout->addWidget(m_viewImages);

        m_groupImageType = new QGroupBox(base_K3bBootImageDialog);
        m_groupImageType->setObjectName(QString::fromUtf8("m_groupImageType"));
        horizontalLayout = new QHBoxLayout(m_groupImageType);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_radioFloppy = new QRadioButton(m_groupImageType);
        m_radioFloppy->setObjectName(QString::fromUtf8("m_radioFloppy"));

        horizontalLayout->addWidget(m_radioFloppy);

        m_radioHarddisk = new QRadioButton(m_groupImageType);
        m_radioHarddisk->setObjectName(QString::fromUtf8("m_radioHarddisk"));

        horizontalLayout->addWidget(m_radioHarddisk);

        m_radioNoEmulation = new QRadioButton(m_groupImageType);
        m_radioNoEmulation->setObjectName(QString::fromUtf8("m_radioNoEmulation"));

        horizontalLayout->addWidget(m_radioNoEmulation);


        vboxLayout->addWidget(m_groupImageType);

        m_groupOptions = new QGroupBox(base_K3bBootImageDialog);
        m_groupOptions->setObjectName(QString::fromUtf8("m_groupOptions"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_groupOptions->sizePolicy().hasHeightForWidth());
        m_groupOptions->setSizePolicy(sizePolicy1);
        vboxLayout1 = new QVBoxLayout(m_groupOptions);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        m_checkNoBoot = new QCheckBox(m_groupOptions);
        m_checkNoBoot->setObjectName(QString::fromUtf8("m_checkNoBoot"));

        vboxLayout1->addWidget(m_checkNoBoot);

        m_checkInfoTable = new QCheckBox(m_groupOptions);
        m_checkInfoTable->setObjectName(QString::fromUtf8("m_checkInfoTable"));

        vboxLayout1->addWidget(m_checkInfoTable);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_editLoadSegment = new QLineEdit(m_groupOptions);
        m_editLoadSegment->setObjectName(QString::fromUtf8("m_editLoadSegment"));
        m_editLoadSegment->setEnabled(false);

        gridLayout->addWidget(m_editLoadSegment, 0, 1, 1, 1);

        m_editLoadSize = new QLineEdit(m_groupOptions);
        m_editLoadSize->setObjectName(QString::fromUtf8("m_editLoadSize"));
        m_editLoadSize->setEnabled(false);

        gridLayout->addWidget(m_editLoadSize, 1, 1, 1, 1);

        textLabel2_2 = new QLabel(m_groupOptions);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));
        textLabel2_2->setEnabled(false);
        textLabel2_2->setWordWrap(false);

        gridLayout->addWidget(textLabel2_2, 0, 0, 1, 1);

        textLabel3 = new QLabel(m_groupOptions);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setEnabled(false);
        textLabel3->setWordWrap(false);

        gridLayout->addWidget(textLabel3, 1, 0, 1, 1);


        vboxLayout1->addLayout(gridLayout);


        vboxLayout->addWidget(m_groupOptions);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        m_buttonToggleOptions = new QPushButton(base_K3bBootImageDialog);
        m_buttonToggleOptions->setObjectName(QString::fromUtf8("m_buttonToggleOptions"));

        hboxLayout1->addWidget(m_buttonToggleOptions);

        spacer16 = new QSpacerItem(261, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacer16);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        textLabel2 = new QLabel(base_K3bBootImageDialog);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        hboxLayout2->addWidget(textLabel2);

        m_editBootCataloge = new QLineEdit(base_K3bBootImageDialog);
        m_editBootCataloge->setObjectName(QString::fromUtf8("m_editBootCataloge"));
        m_editBootCataloge->setReadOnly(true);

        hboxLayout2->addWidget(m_editBootCataloge);


        vboxLayout->addLayout(hboxLayout2);

        m_buttonBox = new QDialogButtonBox(base_K3bBootImageDialog);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        vboxLayout->addWidget(m_buttonBox);


        retranslateUi(base_K3bBootImageDialog);
        QObject::connect(m_radioNoEmulation, SIGNAL(toggled(bool)), textLabel2_2, SLOT(setEnabled(bool)));
        QObject::connect(m_radioNoEmulation, SIGNAL(toggled(bool)), textLabel3, SLOT(setEnabled(bool)));
        QObject::connect(m_radioNoEmulation, SIGNAL(toggled(bool)), m_editLoadSegment, SLOT(setEnabled(bool)));
        QObject::connect(m_radioNoEmulation, SIGNAL(toggled(bool)), m_editLoadSize, SLOT(setEnabled(bool)));
        QObject::connect(m_radioNoEmulation, SIGNAL(toggled(bool)), m_checkNoBoot, SLOT(setDisabled(bool)));
        QObject::connect(m_buttonBox, SIGNAL(accepted()), base_K3bBootImageDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(base_K3bBootImageDialog);
    } // setupUi

    void retranslateUi(QDialog *base_K3bBootImageDialog)
    {
        label->setText(tr2i18n("Boot images:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_buttonNew->setToolTip(tr2i18n("Add new boot image", nullptr));
#endif // QT_NO_TOOLTIP
        m_buttonNew->setText(tr2i18n("&New...", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_buttonDelete->setToolTip(tr2i18n("Remove selected boot image", nullptr));
#endif // QT_NO_TOOLTIP
        m_buttonDelete->setText(tr2i18n("&Delete", nullptr));
        m_groupImageType->setTitle(tr2i18n("Emulation Type", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_radioFloppy->setToolTip(tr2i18n("Emulate a 1440/2880 kb floppy", nullptr));
#endif // QT_NO_TOOLTIP
        m_radioFloppy->setText(tr2i18n("&Floppy", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_radioHarddisk->setToolTip(tr2i18n("Emulate a harddisk", nullptr));
#endif // QT_NO_TOOLTIP
        m_radioHarddisk->setText(tr2i18n("Hardd&isk", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_radioNoEmulation->setToolTip(tr2i18n("No emulation at all", nullptr));
#endif // QT_NO_TOOLTIP
        m_radioNoEmulation->setText(tr2i18n("None", nullptr));
        m_groupOptions->setTitle(tr2i18n("Settings", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_checkNoBoot->setToolTip(tr2i18n("Do not boot from the emulated floppy/harddisk", nullptr));
#endif // QT_NO_TOOLTIP
        m_checkNoBoot->setText(tr2i18n("No boot image", nullptr));
        m_checkInfoTable->setText(tr2i18n("Boot-info-table", nullptr));
        m_editLoadSegment->setText(tr2i18n("0", nullptr));
        m_editLoadSize->setText(tr2i18n("0", nullptr));
        textLabel2_2->setText(tr2i18n("Boot load segment:", nullptr));
        textLabel3->setText(tr2i18n("Boot load size:", nullptr));
        m_buttonToggleOptions->setText(tr2i18n("Show Advanced Op&tions", nullptr));
        textLabel2->setText(tr2i18n("Boot catalog:", nullptr));
        m_editBootCataloge->setText(tr2i18n("boot/boot.catalog", nullptr));
        Q_UNUSED(base_K3bBootImageDialog);
    } // retranslateUi

};

namespace Ui {
    class base_K3bBootImageDialog: public Ui_base_K3bBootImageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BASE_K3BBOOTIMAGEDIALOG_H

