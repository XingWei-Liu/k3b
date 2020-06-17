#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'base_k3bcddbpatternwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_K3BCDDBPATTERNWIDGET_H
#define UI_BASE_K3BCDDBPATTERNWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "kcombobox.h"
#include "klineedit.h"
#include "kurllabel.h"

QT_BEGIN_NAMESPACE

class Ui_base_K3bCddbPatternWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QCheckBox *m_checkBlankReplace;
    KLineEdit *m_editBlankReplace;
    QLabel *textLabel2;
    KComboBox *m_comboPlaylistPattern;
    QLabel *textLabel1;
    KComboBox *m_comboFilenamePattern;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacer1;
    KUrlLabel *m_specialStringsLabel;
    KUrlLabel *m_conditionalInclusionLabel;

    void setupUi(QWidget *base_K3bCddbPatternWidget)
    {
        if (base_K3bCddbPatternWidget->objectName().isEmpty())
            base_K3bCddbPatternWidget->setObjectName(QString::fromUtf8("base_K3bCddbPatternWidget"));
        base_K3bCddbPatternWidget->resize(344, 139);
        gridLayout = new QGridLayout(base_K3bCddbPatternWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_checkBlankReplace = new QCheckBox(base_K3bCddbPatternWidget);
        m_checkBlankReplace->setObjectName(QString::fromUtf8("m_checkBlankReplace"));

        hboxLayout->addWidget(m_checkBlankReplace);

        m_editBlankReplace = new KLineEdit(base_K3bCddbPatternWidget);
        m_editBlankReplace->setObjectName(QString::fromUtf8("m_editBlankReplace"));
        m_editBlankReplace->setEnabled(false);

        hboxLayout->addWidget(m_editBlankReplace);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 2);

        textLabel2 = new QLabel(base_K3bCddbPatternWidget);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        gridLayout->addWidget(textLabel2, 1, 0, 1, 1);

        m_comboPlaylistPattern = new KComboBox(base_K3bCddbPatternWidget);
        m_comboPlaylistPattern->setObjectName(QString::fromUtf8("m_comboPlaylistPattern"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_comboPlaylistPattern->sizePolicy().hasHeightForWidth());
        m_comboPlaylistPattern->setSizePolicy(sizePolicy);
        m_comboPlaylistPattern->setEditable(true);

        gridLayout->addWidget(m_comboPlaylistPattern, 1, 1, 1, 1);

        textLabel1 = new QLabel(base_K3bCddbPatternWidget);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        m_comboFilenamePattern = new KComboBox(base_K3bCddbPatternWidget);
        m_comboFilenamePattern->setObjectName(QString::fromUtf8("m_comboFilenamePattern"));
        sizePolicy.setHeightForWidth(m_comboFilenamePattern->sizePolicy().hasHeightForWidth());
        m_comboFilenamePattern->setSizePolicy(sizePolicy);
        m_comboFilenamePattern->setEditable(true);

        gridLayout->addWidget(m_comboFilenamePattern, 0, 1, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacer1 = new QSpacerItem(31, 2, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacer1);

        m_specialStringsLabel = new KUrlLabel(base_K3bCddbPatternWidget);
        m_specialStringsLabel->setObjectName(QString::fromUtf8("m_specialStringsLabel"));
        m_specialStringsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout1->addWidget(m_specialStringsLabel);

        m_conditionalInclusionLabel = new KUrlLabel(base_K3bCddbPatternWidget);
        m_conditionalInclusionLabel->setObjectName(QString::fromUtf8("m_conditionalInclusionLabel"));
        m_conditionalInclusionLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout1->addWidget(m_conditionalInclusionLabel);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 2);

        QWidget::setTabOrder(m_comboFilenamePattern, m_comboPlaylistPattern);
        QWidget::setTabOrder(m_comboPlaylistPattern, m_checkBlankReplace);
        QWidget::setTabOrder(m_checkBlankReplace, m_editBlankReplace);

        retranslateUi(base_K3bCddbPatternWidget);
        QObject::connect(m_checkBlankReplace, SIGNAL(toggled(bool)), m_editBlankReplace, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(base_K3bCddbPatternWidget);
    } // setupUi

    void retranslateUi(QWidget *base_K3bCddbPatternWidget)
    {
        base_K3bCddbPatternWidget->setWindowTitle(tr2i18n("Ripping Pattern", nullptr));
        m_checkBlankReplace->setText(tr2i18n("Replace all blan&ks with:", nullptr));
        m_editBlankReplace->setText(tr2i18n("_", nullptr));
        textLabel2->setText(tr2i18n("Playlist pattern:", nullptr));
        textLabel1->setText(tr2i18n("Ripped files pattern:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_comboFilenamePattern->setToolTip(tr2i18n("Insert your custom pattern here", nullptr));
#endif // QT_NO_TOOLTIP
        m_specialStringsLabel->setText(tr2i18n("See special strings", nullptr));
        m_conditionalInclusionLabel->setText(tr2i18n("About conditional inclusion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class base_K3bCddbPatternWidget: public Ui_base_K3bCddbPatternWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BASE_K3BCDDBPATTERNWIDGET_H

