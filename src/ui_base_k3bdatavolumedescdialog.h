#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'base_k3bdatavolumedescdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_K3BDATAVOLUMEDESCDIALOG_H
#define UI_BASE_K3BDATAVOLUMEDESCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_base_K3bDataVolumeDescDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel3;
    QLabel *TextLabel6;
    QLineEdit *m_editVolumeName;
    QLabel *textLabel1;
    QFrame *line1;
    QFrame *line1_2;
    QLabel *TextLabel3;
    QLabel *textLabel2_2;
    QLineEdit *m_editApplication;
    QLineEdit *m_editPreparer;
    QLabel *TextLabel1;
    QLabel *TextLabel2;
    QHBoxLayout *hboxLayout;
    QLineEdit *m_editBiblio;
    QToolButton *m_buttonFindBiblio;
    QLabel *TextLabel4;
    QHBoxLayout *hboxLayout1;
    QLineEdit *m_editAbstract;
    QToolButton *m_buttonFindAbstract;
    QLabel *textLabel1_2;
    QDialogButtonBox *m_buttonBox;
    QHBoxLayout *hboxLayout2;
    QLineEdit *m_editCopyright;
    QToolButton *m_buttonFindCopyright;
    QHBoxLayout *hboxLayout3;
    QSpinBox *m_spinVolumeSetSize;
    QLabel *textLabel2;
    QSpinBox *m_spinVolumeSetNumber;
    QLineEdit *m_editVolumeSetName;
    QLineEdit *m_editPublisher;
    QLabel *TextLabel5;
    QLineEdit *m_editSystem;

    void setupUi(QDialog *base_K3bDataVolumeDescDialog)
    {
        if (base_K3bDataVolumeDescDialog->objectName().isEmpty())
            base_K3bDataVolumeDescDialog->setObjectName(QString::fromUtf8("base_K3bDataVolumeDescDialog"));
        base_K3bDataVolumeDescDialog->resize(391, 463);
        gridLayout = new QGridLayout(base_K3bDataVolumeDescDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel3 = new QLabel(base_K3bDataVolumeDescDialog);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(false);

        gridLayout->addWidget(textLabel3, 11, 0, 1, 1);

        TextLabel6 = new QLabel(base_K3bDataVolumeDescDialog);
        TextLabel6->setObjectName(QString::fromUtf8("TextLabel6"));
        TextLabel6->setWordWrap(false);

        gridLayout->addWidget(TextLabel6, 7, 0, 1, 1);

        m_editVolumeName = new QLineEdit(base_K3bDataVolumeDescDialog);
        m_editVolumeName->setObjectName(QString::fromUtf8("m_editVolumeName"));
        m_editVolumeName->setMaxLength(32);

        gridLayout->addWidget(m_editVolumeName, 0, 1, 1, 1);

        textLabel1 = new QLabel(base_K3bDataVolumeDescDialog);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 2, 0, 1, 1);

        line1 = new QFrame(base_K3bDataVolumeDescDialog);
        line1->setObjectName(QString::fromUtf8("line1"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line1, 5, 0, 1, 2);

        line1_2 = new QFrame(base_K3bDataVolumeDescDialog);
        line1_2->setObjectName(QString::fromUtf8("line1_2"));
        line1_2->setFrameShape(QFrame::HLine);
        line1_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line1_2, 8, 0, 1, 2);

        TextLabel3 = new QLabel(base_K3bDataVolumeDescDialog);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
        TextLabel3->setWordWrap(false);

        gridLayout->addWidget(TextLabel3, 3, 0, 1, 1);

        textLabel2_2 = new QLabel(base_K3bDataVolumeDescDialog);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));
        textLabel2_2->setWordWrap(false);

        gridLayout->addWidget(textLabel2_2, 10, 0, 1, 1);

        m_editApplication = new QLineEdit(base_K3bDataVolumeDescDialog);
        m_editApplication->setObjectName(QString::fromUtf8("m_editApplication"));
        m_editApplication->setMaxLength(128);

        gridLayout->addWidget(m_editApplication, 7, 1, 1, 1);

        m_editPreparer = new QLineEdit(base_K3bDataVolumeDescDialog);
        m_editPreparer->setObjectName(QString::fromUtf8("m_editPreparer"));
        m_editPreparer->setMaxLength(128);

        gridLayout->addWidget(m_editPreparer, 4, 1, 1, 1);

        TextLabel1 = new QLabel(base_K3bDataVolumeDescDialog);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setWordWrap(false);

        gridLayout->addWidget(TextLabel1, 0, 0, 1, 1);

        TextLabel2 = new QLabel(base_K3bDataVolumeDescDialog);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
        TextLabel2->setWordWrap(false);

        gridLayout->addWidget(TextLabel2, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_editBiblio = new QLineEdit(base_K3bDataVolumeDescDialog);
        m_editBiblio->setObjectName(QString::fromUtf8("m_editBiblio"));
        m_editBiblio->setMaxLength(37);

        hboxLayout->addWidget(m_editBiblio);

        m_buttonFindBiblio = new QToolButton(base_K3bDataVolumeDescDialog);
        m_buttonFindBiblio->setObjectName(QString::fromUtf8("m_buttonFindBiblio"));

        hboxLayout->addWidget(m_buttonFindBiblio);


        gridLayout->addLayout(hboxLayout, 11, 1, 1, 1);

        TextLabel4 = new QLabel(base_K3bDataVolumeDescDialog);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
        TextLabel4->setWordWrap(false);

        gridLayout->addWidget(TextLabel4, 4, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        m_editAbstract = new QLineEdit(base_K3bDataVolumeDescDialog);
        m_editAbstract->setObjectName(QString::fromUtf8("m_editAbstract"));
        m_editAbstract->setMaxLength(37);

        hboxLayout1->addWidget(m_editAbstract);

        m_buttonFindAbstract = new QToolButton(base_K3bDataVolumeDescDialog);
        m_buttonFindAbstract->setObjectName(QString::fromUtf8("m_buttonFindAbstract"));

        hboxLayout1->addWidget(m_buttonFindAbstract);


        gridLayout->addLayout(hboxLayout1, 9, 1, 1, 1);

        textLabel1_2 = new QLabel(base_K3bDataVolumeDescDialog);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setWordWrap(false);

        gridLayout->addWidget(textLabel1_2, 9, 0, 1, 1);

        m_buttonBox = new QDialogButtonBox(base_K3bDataVolumeDescDialog);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(m_buttonBox, 12, 0, 1, 2);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        m_editCopyright = new QLineEdit(base_K3bDataVolumeDescDialog);
        m_editCopyright->setObjectName(QString::fromUtf8("m_editCopyright"));
        m_editCopyright->setMaxLength(37);

        hboxLayout2->addWidget(m_editCopyright);

        m_buttonFindCopyright = new QToolButton(base_K3bDataVolumeDescDialog);
        m_buttonFindCopyright->setObjectName(QString::fromUtf8("m_buttonFindCopyright"));

        hboxLayout2->addWidget(m_buttonFindCopyright);


        gridLayout->addLayout(hboxLayout2, 10, 1, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        m_spinVolumeSetSize = new QSpinBox(base_K3bDataVolumeDescDialog);
        m_spinVolumeSetSize->setObjectName(QString::fromUtf8("m_spinVolumeSetSize"));
        m_spinVolumeSetSize->setMinimum(1);
        m_spinVolumeSetSize->setValue(1);

        hboxLayout3->addWidget(m_spinVolumeSetSize);

        textLabel2 = new QLabel(base_K3bDataVolumeDescDialog);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel2->setWordWrap(false);

        hboxLayout3->addWidget(textLabel2);

        m_spinVolumeSetNumber = new QSpinBox(base_K3bDataVolumeDescDialog);
        m_spinVolumeSetNumber->setObjectName(QString::fromUtf8("m_spinVolumeSetNumber"));
        m_spinVolumeSetNumber->setMinimum(1);
        m_spinVolumeSetNumber->setMaximum(2);
        m_spinVolumeSetNumber->setValue(1);

        hboxLayout3->addWidget(m_spinVolumeSetNumber);


        gridLayout->addLayout(hboxLayout3, 2, 1, 1, 1);

        m_editVolumeSetName = new QLineEdit(base_K3bDataVolumeDescDialog);
        m_editVolumeSetName->setObjectName(QString::fromUtf8("m_editVolumeSetName"));
        m_editVolumeSetName->setMaxLength(128);

        gridLayout->addWidget(m_editVolumeSetName, 1, 1, 1, 1);

        m_editPublisher = new QLineEdit(base_K3bDataVolumeDescDialog);
        m_editPublisher->setObjectName(QString::fromUtf8("m_editPublisher"));
        m_editPublisher->setMaxLength(128);

        gridLayout->addWidget(m_editPublisher, 3, 1, 1, 1);

        TextLabel5 = new QLabel(base_K3bDataVolumeDescDialog);
        TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));
        TextLabel5->setWordWrap(false);

        gridLayout->addWidget(TextLabel5, 6, 0, 1, 1);

        m_editSystem = new QLineEdit(base_K3bDataVolumeDescDialog);
        m_editSystem->setObjectName(QString::fromUtf8("m_editSystem"));
        m_editSystem->setMaxLength(32);

        gridLayout->addWidget(m_editSystem, 6, 1, 1, 1);

#ifndef UI_QT_NO_SHORTCUT
        TextLabel6->setBuddy(m_editApplication);
        textLabel1->setBuddy(m_spinVolumeSetSize);
        TextLabel3->setBuddy(m_editPublisher);
        TextLabel1->setBuddy(m_editVolumeName);
        TextLabel2->setBuddy(m_editVolumeSetName);
        TextLabel4->setBuddy(m_editPreparer);
        textLabel2->setBuddy(m_spinVolumeSetNumber);
        TextLabel5->setBuddy(m_editSystem);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(m_editVolumeName, m_editVolumeSetName);
        QWidget::setTabOrder(m_editVolumeSetName, m_spinVolumeSetSize);
        QWidget::setTabOrder(m_spinVolumeSetSize, m_spinVolumeSetNumber);
        QWidget::setTabOrder(m_spinVolumeSetNumber, m_editPublisher);
        QWidget::setTabOrder(m_editPublisher, m_editPreparer);
        QWidget::setTabOrder(m_editPreparer, m_editSystem);
        QWidget::setTabOrder(m_editSystem, m_editApplication);
        QWidget::setTabOrder(m_editApplication, m_editAbstract);
        QWidget::setTabOrder(m_editAbstract, m_buttonFindAbstract);
        QWidget::setTabOrder(m_buttonFindAbstract, m_editCopyright);
        QWidget::setTabOrder(m_editCopyright, m_buttonFindCopyright);
        QWidget::setTabOrder(m_buttonFindCopyright, m_editBiblio);
        QWidget::setTabOrder(m_editBiblio, m_buttonFindBiblio);

        retranslateUi(base_K3bDataVolumeDescDialog);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), base_K3bDataVolumeDescDialog, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), base_K3bDataVolumeDescDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(base_K3bDataVolumeDescDialog);
    } // setupUi

    void retranslateUi(QDialog *base_K3bDataVolumeDescDialog)
    {
        base_K3bDataVolumeDescDialog->setWindowTitle(tr2i18n("Volume Descriptor", nullptr));
        textLabel3->setText(tr2i18n("Bibliographic file:", nullptr));
        TextLabel6->setText(tr2i18n("Appli&cation:", nullptr));
        textLabel1->setText(tr2i18n("Volu&me set size:", nullptr));
        TextLabel3->setText(tr2i18n("Publ&isher:", nullptr));
        textLabel2_2->setText(tr2i18n("Copyright file:", nullptr));
        TextLabel1->setText(tr2i18n("&Volume name:", nullptr));
        TextLabel2->setText(tr2i18n("Vo&lume set name:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_buttonFindBiblio->setToolTip(tr2i18n("Select a bibliographic file from the project", nullptr));
#endif // QT_NO_TOOLTIP
        m_buttonFindBiblio->setText(tr2i18n("...", nullptr));
        TextLabel4->setText(tr2i18n("P&reparer:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_buttonFindAbstract->setToolTip(tr2i18n("Select an abstract file from the project", nullptr));
#endif // QT_NO_TOOLTIP
        m_buttonFindAbstract->setText(tr2i18n("...", nullptr));
        textLabel1_2->setText(tr2i18n("Abstract file:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        m_buttonFindCopyright->setToolTip(tr2i18n("Select a copyright file from the project", nullptr));
#endif // QT_NO_TOOLTIP
        m_buttonFindCopyright->setText(tr2i18n("...", nullptr));
        m_spinVolumeSetSize->setSpecialValueText(QString());
        textLabel2->setText(tr2i18n("Volume set &number:", nullptr));
        m_spinVolumeSetNumber->setSpecialValueText(QString());
        TextLabel5->setText(tr2i18n("Sys&tem:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class base_K3bDataVolumeDescDialog: public Ui_base_K3bDataVolumeDescDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BASE_K3BDATAVOLUMEDESCDIALOG_H

