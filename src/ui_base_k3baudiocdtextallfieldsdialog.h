#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'base_k3baudiocdtextallfieldsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_K3BAUDIOCDTEXTALLFIELDSDIALOG_H
#define UI_BASE_K3BAUDIOCDTEXTALLFIELDSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include "klineedit.h"

QT_BEGIN_NAMESPACE

class Ui_base_K3bAudioCdTextAllFieldsDialog
{
public:
    QFormLayout *formLayout;
    QLabel *textLabel1;
    QHBoxLayout *hboxLayout;
    KLineEdit *m_editTitle;
    QToolButton *m_buttonCopyTitle;
    QLabel *textLabel2;
    QHBoxLayout *hboxLayout1;
    KLineEdit *m_editPerformer;
    QToolButton *m_buttonCopyPerformer;
    QFrame *line4;
    QLabel *textLabel3;
    QHBoxLayout *hboxLayout2;
    KLineEdit *m_editArranger;
    QToolButton *m_buttonCopyArranger;
    QLabel *textLabel4;
    QHBoxLayout *hboxLayout3;
    KLineEdit *m_editSongwriter;
    QToolButton *m_buttonCopySongwriter;
    QLabel *textLabel5;
    QHBoxLayout *hboxLayout4;
    KLineEdit *m_editComposer;
    QToolButton *m_buttonCopyComposer;
    QLabel *textLabel6;
    KLineEdit *m_editUpc_ean;
    QLabel *textLabel7;
    KLineEdit *m_editDisc_id;
    QLabel *textLabel8;
    KLineEdit *m_editMessage;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *base_K3bAudioCdTextAllFieldsDialog)
    {
        if (base_K3bAudioCdTextAllFieldsDialog->objectName().isEmpty())
            base_K3bAudioCdTextAllFieldsDialog->setObjectName(QString::fromUtf8("base_K3bAudioCdTextAllFieldsDialog"));
        base_K3bAudioCdTextAllFieldsDialog->resize(253, 325);
        formLayout = new QFormLayout(base_K3bAudioCdTextAllFieldsDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        textLabel1 = new QLabel(base_K3bAudioCdTextAllFieldsDialog);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, textLabel1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_editTitle = new KLineEdit(base_K3bAudioCdTextAllFieldsDialog);
        m_editTitle->setObjectName(QString::fromUtf8("m_editTitle"));

        hboxLayout->addWidget(m_editTitle);

        m_buttonCopyTitle = new QToolButton(base_K3bAudioCdTextAllFieldsDialog);
        m_buttonCopyTitle->setObjectName(QString::fromUtf8("m_buttonCopyTitle"));

        hboxLayout->addWidget(m_buttonCopyTitle);


        formLayout->setLayout(0, QFormLayout::FieldRole, hboxLayout);

        textLabel2 = new QLabel(base_K3bAudioCdTextAllFieldsDialog);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, textLabel2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        m_editPerformer = new KLineEdit(base_K3bAudioCdTextAllFieldsDialog);
        m_editPerformer->setObjectName(QString::fromUtf8("m_editPerformer"));

        hboxLayout1->addWidget(m_editPerformer);

        m_buttonCopyPerformer = new QToolButton(base_K3bAudioCdTextAllFieldsDialog);
        m_buttonCopyPerformer->setObjectName(QString::fromUtf8("m_buttonCopyPerformer"));

        hboxLayout1->addWidget(m_buttonCopyPerformer);


        formLayout->setLayout(1, QFormLayout::FieldRole, hboxLayout1);

        line4 = new QFrame(base_K3bAudioCdTextAllFieldsDialog);
        line4->setObjectName(QString::fromUtf8("line4"));
        line4->setFrameShape(QFrame::HLine);
        line4->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(2, QFormLayout::SpanningRole, line4);

        textLabel3 = new QLabel(base_K3bAudioCdTextAllFieldsDialog);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(false);

        formLayout->setWidget(3, QFormLayout::LabelRole, textLabel3);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        m_editArranger = new KLineEdit(base_K3bAudioCdTextAllFieldsDialog);
        m_editArranger->setObjectName(QString::fromUtf8("m_editArranger"));

        hboxLayout2->addWidget(m_editArranger);

        m_buttonCopyArranger = new QToolButton(base_K3bAudioCdTextAllFieldsDialog);
        m_buttonCopyArranger->setObjectName(QString::fromUtf8("m_buttonCopyArranger"));

        hboxLayout2->addWidget(m_buttonCopyArranger);


        formLayout->setLayout(3, QFormLayout::FieldRole, hboxLayout2);

        textLabel4 = new QLabel(base_K3bAudioCdTextAllFieldsDialog);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
        textLabel4->setWordWrap(false);

        formLayout->setWidget(4, QFormLayout::LabelRole, textLabel4);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        m_editSongwriter = new KLineEdit(base_K3bAudioCdTextAllFieldsDialog);
        m_editSongwriter->setObjectName(QString::fromUtf8("m_editSongwriter"));

        hboxLayout3->addWidget(m_editSongwriter);

        m_buttonCopySongwriter = new QToolButton(base_K3bAudioCdTextAllFieldsDialog);
        m_buttonCopySongwriter->setObjectName(QString::fromUtf8("m_buttonCopySongwriter"));

        hboxLayout3->addWidget(m_buttonCopySongwriter);


        formLayout->setLayout(4, QFormLayout::FieldRole, hboxLayout3);

        textLabel5 = new QLabel(base_K3bAudioCdTextAllFieldsDialog);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
        textLabel5->setWordWrap(false);

        formLayout->setWidget(5, QFormLayout::LabelRole, textLabel5);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        m_editComposer = new KLineEdit(base_K3bAudioCdTextAllFieldsDialog);
        m_editComposer->setObjectName(QString::fromUtf8("m_editComposer"));

        hboxLayout4->addWidget(m_editComposer);

        m_buttonCopyComposer = new QToolButton(base_K3bAudioCdTextAllFieldsDialog);
        m_buttonCopyComposer->setObjectName(QString::fromUtf8("m_buttonCopyComposer"));

        hboxLayout4->addWidget(m_buttonCopyComposer);


        formLayout->setLayout(5, QFormLayout::FieldRole, hboxLayout4);

        textLabel6 = new QLabel(base_K3bAudioCdTextAllFieldsDialog);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        textLabel6->setWordWrap(false);

        formLayout->setWidget(6, QFormLayout::LabelRole, textLabel6);

        m_editUpc_ean = new KLineEdit(base_K3bAudioCdTextAllFieldsDialog);
        m_editUpc_ean->setObjectName(QString::fromUtf8("m_editUpc_ean"));

        formLayout->setWidget(6, QFormLayout::FieldRole, m_editUpc_ean);

        textLabel7 = new QLabel(base_K3bAudioCdTextAllFieldsDialog);
        textLabel7->setObjectName(QString::fromUtf8("textLabel7"));
        textLabel7->setWordWrap(false);

        formLayout->setWidget(7, QFormLayout::LabelRole, textLabel7);

        m_editDisc_id = new KLineEdit(base_K3bAudioCdTextAllFieldsDialog);
        m_editDisc_id->setObjectName(QString::fromUtf8("m_editDisc_id"));

        formLayout->setWidget(7, QFormLayout::FieldRole, m_editDisc_id);

        textLabel8 = new QLabel(base_K3bAudioCdTextAllFieldsDialog);
        textLabel8->setObjectName(QString::fromUtf8("textLabel8"));
        textLabel8->setWordWrap(false);

        formLayout->setWidget(8, QFormLayout::LabelRole, textLabel8);

        m_editMessage = new KLineEdit(base_K3bAudioCdTextAllFieldsDialog);
        m_editMessage->setObjectName(QString::fromUtf8("m_editMessage"));

        formLayout->setWidget(8, QFormLayout::FieldRole, m_editMessage);

        m_buttonBox = new QDialogButtonBox(base_K3bAudioCdTextAllFieldsDialog);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(9, QFormLayout::SpanningRole, m_buttonBox);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1->setBuddy(m_editTitle);
        textLabel2->setBuddy(m_editPerformer);
        textLabel3->setBuddy(m_editArranger);
        textLabel4->setBuddy(m_editSongwriter);
        textLabel5->setBuddy(m_editComposer);
        textLabel6->setBuddy(m_editUpc_ean);
        textLabel7->setBuddy(m_editDisc_id);
        textLabel8->setBuddy(m_editMessage);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(m_editTitle, m_buttonCopyTitle);
        QWidget::setTabOrder(m_buttonCopyTitle, m_editPerformer);
        QWidget::setTabOrder(m_editPerformer, m_buttonCopyPerformer);
        QWidget::setTabOrder(m_buttonCopyPerformer, m_editArranger);
        QWidget::setTabOrder(m_editArranger, m_buttonCopyArranger);
        QWidget::setTabOrder(m_buttonCopyArranger, m_editSongwriter);
        QWidget::setTabOrder(m_editSongwriter, m_buttonCopySongwriter);
        QWidget::setTabOrder(m_buttonCopySongwriter, m_editComposer);
        QWidget::setTabOrder(m_editComposer, m_buttonCopyComposer);
        QWidget::setTabOrder(m_buttonCopyComposer, m_editUpc_ean);
        QWidget::setTabOrder(m_editUpc_ean, m_editDisc_id);
        QWidget::setTabOrder(m_editDisc_id, m_editMessage);

        retranslateUi(base_K3bAudioCdTextAllFieldsDialog);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), base_K3bAudioCdTextAllFieldsDialog, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), base_K3bAudioCdTextAllFieldsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(base_K3bAudioCdTextAllFieldsDialog);
    } // setupUi

    void retranslateUi(QDialog *base_K3bAudioCdTextAllFieldsDialog)
    {
        textLabel1->setText(tr2i18n("&Title:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_buttonCopyTitle->setToolTip(tr2i18n("Copy to all tracks", nullptr));
#endif // QT_NO_TOOLTIP
        m_buttonCopyTitle->setText(tr2i18n("...", nullptr));
        textLabel2->setText(tr2i18n("Per&former:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_buttonCopyPerformer->setToolTip(tr2i18n("Copy to all tracks", nullptr));
#endif // QT_NO_TOOLTIP
        m_buttonCopyPerformer->setText(tr2i18n("...", nullptr));
        textLabel3->setText(tr2i18n("&Arranger:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_buttonCopyArranger->setToolTip(tr2i18n("Copy to all tracks", nullptr));
#endif // QT_NO_TOOLTIP
        m_buttonCopyArranger->setText(tr2i18n("...", nullptr));
        textLabel4->setText(tr2i18n("So&ngwriter:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_buttonCopySongwriter->setToolTip(tr2i18n("Copy to all tracks", nullptr));
#endif // QT_NO_TOOLTIP
        m_buttonCopySongwriter->setText(tr2i18n("...", nullptr));
        textLabel5->setText(tr2i18n("&Composer:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_buttonCopyComposer->setToolTip(tr2i18n("Copy to all tracks", nullptr));
#endif // QT_NO_TOOLTIP
        m_buttonCopyComposer->setText(tr2i18n("...", nullptr));
        textLabel6->setText(tr2i18n("&UPC EAN:", nullptr));
        textLabel7->setText(tr2i18n("&Disk id:", nullptr));
        textLabel8->setText(tr2i18n("Messa&ge:", nullptr));
        Q_UNUSED(base_K3bAudioCdTextAllFieldsDialog);
    } // retranslateUi

};

namespace Ui {
    class base_K3bAudioCdTextAllFieldsDialog: public Ui_base_K3bAudioCdTextAllFieldsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BASE_K3BAUDIOCDTEXTALLFIELDSDIALOG_H

