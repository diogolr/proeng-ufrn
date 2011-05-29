/********************************************************************************
** Form generated from reading UI file 'caixa_marcacao.ui'
**
** Created: Fri May 13 17:44:18 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAIXA_MARCACAO_H
#define UI_CAIXA_MARCACAO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CaixaMarcacao
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *cb;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QGraphicsView *imagem;

    void setupUi(QWidget *CaixaMarcacao)
    {
        if (CaixaMarcacao->objectName().isEmpty())
            CaixaMarcacao->setObjectName(QString::fromUtf8("CaixaMarcacao"));
        CaixaMarcacao->resize(158, 22);
        CaixaMarcacao->setStyleSheet(QString::fromUtf8("spacing:0;"));
        gridLayout = new QGridLayout(CaixaMarcacao);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 2, 0, 2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cb = new QCheckBox(CaixaMarcacao);
        cb->setObjectName(QString::fromUtf8("cb"));
        cb->setMaximumSize(QSize(16777215, 16));
        cb->setChecked(true);

        horizontalLayout->addWidget(cb);

        label = new QLabel(CaixaMarcacao);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 16));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        imagem = new QGraphicsView(CaixaMarcacao);
        imagem->setObjectName(QString::fromUtf8("imagem"));
        imagem->setMaximumSize(QSize(40, 16));
        imagem->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        imagem->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(imagem);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(CaixaMarcacao);

        QMetaObject::connectSlotsByName(CaixaMarcacao);
    } // setupUi

    void retranslateUi(QWidget *CaixaMarcacao)
    {
        label->setText(QApplication::translate("CaixaMarcacao", "TextLabel", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(CaixaMarcacao);
    } // retranslateUi

};

namespace Ui {
    class CaixaMarcacao: public Ui_CaixaMarcacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAIXA_MARCACAO_H
