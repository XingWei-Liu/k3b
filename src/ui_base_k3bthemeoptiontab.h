#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'base_k3bthemeoptiontab.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_K3BTHEMEOPTIONTAB_H
#define UI_BASE_K3BTHEMEOPTIONTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_base_K3bThemeOptionTab
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox4;
    QVBoxLayout *vboxLayout1;
    QTreeView *m_viewTheme;
    QGroupBox *groupBox5;
    QHBoxLayout *hboxLayout;
    QHBoxLayout *hboxLayout1;
    QLabel *m_leftPreviewLabel;
    QLabel *m_centerPreviewLabel;
    QLabel *m_rightPreviewLabel;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacer3;
    QPushButton *m_buttonGetNewThemes;
    QPushButton *m_buttonInstallTheme;
    QPushButton *m_buttonRemoveTheme;

    void setupUi(QWidget *base_K3bThemeOptionTab)
    {
        if (base_K3bThemeOptionTab->objectName().isEmpty())
            base_K3bThemeOptionTab->setObjectName(QString::fromUtf8("base_K3bThemeOptionTab"));
        base_K3bThemeOptionTab->resize(283, 310);
        vboxLayout = new QVBoxLayout(base_K3bThemeOptionTab);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox4 = new QGroupBox(base_K3bThemeOptionTab);
        groupBox4->setObjectName(QString::fromUtf8("groupBox4"));
        vboxLayout1 = new QVBoxLayout(groupBox4);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        m_viewTheme = new QTreeView(groupBox4);
        m_viewTheme->setObjectName(QString::fromUtf8("m_viewTheme"));
        m_viewTheme->setRootIsDecorated(false);

        vboxLayout1->addWidget(m_viewTheme);


        vboxLayout->addWidget(groupBox4);

        groupBox5 = new QGroupBox(base_K3bThemeOptionTab);
        groupBox5->setObjectName(QString::fromUtf8("groupBox5"));
        hboxLayout = new QHBoxLayout(groupBox5);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        m_leftPreviewLabel = new QLabel(groupBox5);
        m_leftPreviewLabel->setObjectName(QString::fromUtf8("m_leftPreviewLabel"));
        m_leftPreviewLabel->setWordWrap(false);

        hboxLayout1->addWidget(m_leftPreviewLabel);

        m_centerPreviewLabel = new QLabel(groupBox5);
        m_centerPreviewLabel->setObjectName(QString::fromUtf8("m_centerPreviewLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_centerPreviewLabel->sizePolicy().hasHeightForWidth());
        m_centerPreviewLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        m_centerPreviewLabel->setFont(font);
        m_centerPreviewLabel->setAlignment(Qt::AlignCenter);
        m_centerPreviewLabel->setWordWrap(false);

        hboxLayout1->addWidget(m_centerPreviewLabel);

        m_rightPreviewLabel = new QLabel(groupBox5);
        m_rightPreviewLabel->setObjectName(QString::fromUtf8("m_rightPreviewLabel"));
        m_rightPreviewLabel->setWordWrap(false);

        hboxLayout1->addWidget(m_rightPreviewLabel);


        hboxLayout->addLayout(hboxLayout1);


        vboxLayout->addWidget(groupBox5);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacer3 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacer3);

        m_buttonGetNewThemes = new QPushButton(base_K3bThemeOptionTab);
        m_buttonGetNewThemes->setObjectName(QString::fromUtf8("m_buttonGetNewThemes"));

        hboxLayout2->addWidget(m_buttonGetNewThemes);

        m_buttonInstallTheme = new QPushButton(base_K3bThemeOptionTab);
        m_buttonInstallTheme->setObjectName(QString::fromUtf8("m_buttonInstallTheme"));

        hboxLayout2->addWidget(m_buttonInstallTheme);

        m_buttonRemoveTheme = new QPushButton(base_K3bThemeOptionTab);
        m_buttonRemoveTheme->setObjectName(QString::fromUtf8("m_buttonRemoveTheme"));

        hboxLayout2->addWidget(m_buttonRemoveTheme);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(base_K3bThemeOptionTab);

        QMetaObject::connectSlotsByName(base_K3bThemeOptionTab);
    } // setupUi

    void retranslateUi(QWidget *base_K3bThemeOptionTab)
    {
        groupBox4->setTitle(tr2i18n("Theme Selection", nullptr));
        groupBox5->setTitle(tr2i18n("Preview", nullptr));
        m_leftPreviewLabel->setText(QString());
        m_centerPreviewLabel->setText(tr2i18n("No theme selected", nullptr));
        m_rightPreviewLabel->setText(QString());
        m_buttonGetNewThemes->setText(tr2i18n("Get New Themes...", nullptr));
        m_buttonInstallTheme->setText(tr2i18n("Install New Theme...", nullptr));
        m_buttonRemoveTheme->setText(tr2i18n("Remove Theme", nullptr));
        Q_UNUSED(base_K3bThemeOptionTab);
    } // retranslateUi

};

namespace Ui {
    class base_K3bThemeOptionTab: public Ui_base_K3bThemeOptionTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BASE_K3BTHEMEOPTIONTAB_H

