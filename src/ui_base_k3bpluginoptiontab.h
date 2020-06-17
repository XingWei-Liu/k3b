#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'base_k3bpluginoptiontab.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_K3BPLUGINOPTIONTAB_H
#define UI_BASE_K3BPLUGINOPTIONTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_base_K3bPluginOptionTab
{
public:
    QGridLayout *gridLayout;
    QPushButton *m_buttonConfigure;
    QSpacerItem *spacerItem;
    QListView *m_viewPlugins;
    QLabel *textLabel1;

    void setupUi(QWidget *Form1)
    {
        if (Form1->objectName().isEmpty())
            Form1->setObjectName(QString::fromUtf8("Form1"));
        gridLayout = new QGridLayout(Form1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_buttonConfigure = new QPushButton(Form1);
        m_buttonConfigure->setObjectName(QString::fromUtf8("m_buttonConfigure"));

        gridLayout->addWidget(m_buttonConfigure, 2, 1, 1, 1);

        spacerItem = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 2, 0, 1, 1);

        m_viewPlugins = new QListView(Form1);
        m_viewPlugins->setObjectName(QString::fromUtf8("m_viewPlugins"));

        gridLayout->addWidget(m_viewPlugins, 1, 0, 1, 2);

        textLabel1 = new QLabel(Form1);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(true);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 2);


        retranslateUi(Form1);

        QMetaObject::connectSlotsByName(Form1);
    } // setupUi

    void retranslateUi(QWidget *Form1)
    {
        m_buttonConfigure->setText(tr2i18n("Configure...", nullptr));
        textLabel1->setText(tr2i18n("<p>Here all <em>K3b Plugins</em> may be configured. Be aware that this does not include the <em>KPart Plugins</em> which embed themselves in the K3b menu structure.</p>", nullptr));
        Q_UNUSED(Form1);
    } // retranslateUi

};

namespace Ui {
    class base_K3bPluginOptionTab: public Ui_base_K3bPluginOptionTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BASE_K3BPLUGINOPTIONTAB_H

