#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'base_k3bdataimagesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_K3BDATAIMAGESETTINGS_H
#define UI_BASE_K3BDATAIMAGESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_base_K3bDataImageSettings
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *m_groupVolumeName;
    QHBoxLayout *hboxLayout;
    QLineEdit *m_editVolumeName;
    QPushButton *m_buttonMoreVolDescFields;
    QGroupBox *m_groupFileSystem;
    QHBoxLayout *hboxLayout1;
    QComboBox *m_comboFilesystems;
    QPushButton *m_buttonCustomFilesystems;
    QHBoxLayout *hboxLayout2;
    QGroupBox *m_groupSymlinks;
    QVBoxLayout *vboxLayout1;
    QComboBox *m_comboSymlinkHandling;
    QGroupBox *m_groupWhitespace;
    QHBoxLayout *hboxLayout3;
    QComboBox *m_comboSpaceHandling;
    QLineEdit *m_editReplace;
    QSpacerItem *spacer1;

    void setupUi(QWidget *base_K3bDataImageSettings)
    {
        if (base_K3bDataImageSettings->objectName().isEmpty())
            base_K3bDataImageSettings->setObjectName(QString::fromUtf8("base_K3bDataImageSettings"));
        base_K3bDataImageSettings->resize(496, 240);
        vboxLayout = new QVBoxLayout(base_K3bDataImageSettings);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_groupVolumeName = new QGroupBox(base_K3bDataImageSettings);
        m_groupVolumeName->setObjectName(QString::fromUtf8("m_groupVolumeName"));
        hboxLayout = new QHBoxLayout(m_groupVolumeName);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_editVolumeName = new QLineEdit(m_groupVolumeName);
        m_editVolumeName->setObjectName(QString::fromUtf8("m_editVolumeName"));
        m_editVolumeName->setMaxLength(32);

        hboxLayout->addWidget(m_editVolumeName);

        m_buttonMoreVolDescFields = new QPushButton(m_groupVolumeName);
        m_buttonMoreVolDescFields->setObjectName(QString::fromUtf8("m_buttonMoreVolDescFields"));

        hboxLayout->addWidget(m_buttonMoreVolDescFields);


        vboxLayout->addWidget(m_groupVolumeName);

        m_groupFileSystem = new QGroupBox(base_K3bDataImageSettings);
        m_groupFileSystem->setObjectName(QString::fromUtf8("m_groupFileSystem"));
        hboxLayout1 = new QHBoxLayout(m_groupFileSystem);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        m_comboFilesystems = new QComboBox(m_groupFileSystem);
        m_comboFilesystems->setObjectName(QString::fromUtf8("m_comboFilesystems"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_comboFilesystems->sizePolicy().hasHeightForWidth());
        m_comboFilesystems->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(m_comboFilesystems);

        m_buttonCustomFilesystems = new QPushButton(m_groupFileSystem);
        m_buttonCustomFilesystems->setObjectName(QString::fromUtf8("m_buttonCustomFilesystems"));

        hboxLayout1->addWidget(m_buttonCustomFilesystems);


        vboxLayout->addWidget(m_groupFileSystem);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        m_groupSymlinks = new QGroupBox(base_K3bDataImageSettings);
        m_groupSymlinks->setObjectName(QString::fromUtf8("m_groupSymlinks"));
        vboxLayout1 = new QVBoxLayout(m_groupSymlinks);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        m_comboSymlinkHandling = new QComboBox(m_groupSymlinks);
        m_comboSymlinkHandling->addItem(QString());
        m_comboSymlinkHandling->addItem(QString());
        m_comboSymlinkHandling->addItem(QString());
        m_comboSymlinkHandling->addItem(QString());
        m_comboSymlinkHandling->setObjectName(QString::fromUtf8("m_comboSymlinkHandling"));
        sizePolicy.setHeightForWidth(m_comboSymlinkHandling->sizePolicy().hasHeightForWidth());
        m_comboSymlinkHandling->setSizePolicy(sizePolicy);

        vboxLayout1->addWidget(m_comboSymlinkHandling);


        hboxLayout2->addWidget(m_groupSymlinks);

        m_groupWhitespace = new QGroupBox(base_K3bDataImageSettings);
        m_groupWhitespace->setObjectName(QString::fromUtf8("m_groupWhitespace"));
        hboxLayout3 = new QHBoxLayout(m_groupWhitespace);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        m_comboSpaceHandling = new QComboBox(m_groupWhitespace);
        m_comboSpaceHandling->addItem(QString());
        m_comboSpaceHandling->addItem(QString());
        m_comboSpaceHandling->addItem(QString());
        m_comboSpaceHandling->addItem(QString());
        m_comboSpaceHandling->setObjectName(QString::fromUtf8("m_comboSpaceHandling"));
        sizePolicy.setHeightForWidth(m_comboSpaceHandling->sizePolicy().hasHeightForWidth());
        m_comboSpaceHandling->setSizePolicy(sizePolicy);

        hboxLayout3->addWidget(m_comboSpaceHandling);

        m_editReplace = new QLineEdit(m_groupWhitespace);
        m_editReplace->setObjectName(QString::fromUtf8("m_editReplace"));
        m_editReplace->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_editReplace->sizePolicy().hasHeightForWidth());
        m_editReplace->setSizePolicy(sizePolicy1);

        hboxLayout3->addWidget(m_editReplace);


        hboxLayout2->addWidget(m_groupWhitespace);


        vboxLayout->addLayout(hboxLayout2);

        spacer1 = new QSpacerItem(21, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacer1);


        retranslateUi(base_K3bDataImageSettings);

        QMetaObject::connectSlotsByName(base_K3bDataImageSettings);
    } // setupUi

    void retranslateUi(QWidget *base_K3bDataImageSettings)
    {
        base_K3bDataImageSettings->setWindowTitle(tr2i18n("Data Image Settings", nullptr));
        m_groupVolumeName->setTitle(tr2i18n("Volume Name", nullptr));
        m_buttonMoreVolDescFields->setText(tr2i18n("&More fields...", nullptr));
        m_groupFileSystem->setTitle(tr2i18n("File System", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_comboFilesystems->setToolTip(tr2i18n("File system presets", nullptr));
#endif // QT_NO_TOOLTIP
        m_buttonCustomFilesystems->setText(tr2i18n("&Custom...", nullptr));
        m_groupSymlinks->setTitle(tr2i18n("Symbolic Links", nullptr));
        m_comboSymlinkHandling->setItemText(0, tr2i18n("No Change", nullptr));
        m_comboSymlinkHandling->setItemText(1, tr2i18n("Discard broken symlinks", nullptr));
        m_comboSymlinkHandling->setItemText(2, tr2i18n("Discard all symlinks", nullptr));
        m_comboSymlinkHandling->setItemText(3, tr2i18n("Follow symlinks", nullptr));

#ifndef UI_QT_NO_TOOLTIP
        m_comboSymlinkHandling->setToolTip(tr2i18n("Symbolic link handling in the project", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_comboSymlinkHandling->setWhatsThis(tr2i18n("<p>K3b can create ISO 9660 filesystems that contain symlinks if the Rock Ridge extensions are enabled (they are by default). You can change the way symlinks are handled in a K3b project.\n"
"\n"
"<p><b>No Change</b><br>\n"
"Symlinks are used as they have been added to the project. \n"
"\n"
"<p><b>Discard broken symlinks</b><br>\n"
"K3b will discard all symbolic links that do not point to a file inside the project. That includes all links to absolute paths like '/home/myhome/testfile'.\n"
"\n"
"<p><b>Discard all symlinks</b><br>\n"
"K3b will discard all symbolic links that have been added to the project; meaning that the resulting file system will have no links at all.\n"
"\n"
"<p><b>Follow symlinks</b><br>\n"
"Each symbolic link in the project will be replaced with the contents of the file it is pointing to. Thus, the resulting filesystem will not contain any symbolic links.<br>\n"
"Be aware that in case Rock Ridge extensions are disabled (which is not recommended) symbolic links are always followed because IS"
                        "O 9660 does not support symbolic links.\n"
"\n"
"<p><b>Caution:</b> Symbolic links require Rock Ridge extensions.", nullptr));
#endif // QT_NO_WHATSTHIS
        m_groupWhitespace->setTitle(tr2i18n("White space handling", nullptr));
        m_comboSpaceHandling->setItemText(0, tr2i18n("No Change", nullptr));
        m_comboSpaceHandling->setItemText(1, tr2i18n("Strip", nullptr));
        m_comboSpaceHandling->setItemText(2, tr2i18n("Extended Strip", nullptr));
        m_comboSpaceHandling->setItemText(3, tr2i18n("Replace", nullptr));

#ifndef UI_QT_NO_TOOLTIP
        m_comboSpaceHandling->setToolTip(tr2i18n("Handling of spaces in filenames", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_comboSpaceHandling->setWhatsThis(tr2i18n("<p><b>No Change</b><br>\n"
"If this option is checked, K3b will leave all spaces in filenames as they are.\n"
"<p><b>Strip</b><br>\n"
"If this option is checked, K3b will remove all spaces from all filenames.<br>\n"
"Example: 'my good file.ext' becomes 'mygoodfile.ext'\n"
"<p><b>Extended Strip</b><br>\n"
"If this option is checked K3b will remove all spaces in all filenames and capitalize all letters following a space.<br>\n"
"Example: 'my good file.ext' becomes 'myGoodFile.ext'\n"
"<p><b>Replace</b><br>\n"
"If this option is checked, K3b will replace all spaces in all filenames with the specified characters.<br>\n"
"Example: 'my good file.ext' becomes 'my_good_file.ext'", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        m_editReplace->setToolTip(tr2i18n("The string to replace spaces with", nullptr));
#endif // QT_NO_TOOLTIP
        m_editReplace->setText(tr2i18n("_", nullptr));
    } // retranslateUi

};

namespace Ui {
    class base_K3bDataImageSettings: public Ui_base_K3bDataImageSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BASE_K3BDATAIMAGESETTINGS_H

