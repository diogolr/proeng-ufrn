/********************************************************************************
** Form generated from reading UI file 'janela_interna.ui'
**
** Created: Tue May 17 11:33:27 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELA_INTERNA_H
#define UI_JANELA_INTERNA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "../src/grafico.h"
#include "../src/legenda.h"

QT_BEGIN_NAMESPACE

class Ui_JanelaInterna
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    Grafico *grafico;
    Legenda *legenda;
    QSpacerItem *horizontalSpacer;
    QToolButton *imprimir;
    QToolButton *salvar;
    QToolButton *zoom;

    void setupUi(QWidget *JanelaInterna)
    {
        if (JanelaInterna->objectName().isEmpty())
            JanelaInterna->setObjectName(QString::fromUtf8("JanelaInterna"));
        JanelaInterna->resize(793, 506);
        gridLayout = new QGridLayout(JanelaInterna);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        grafico = new Grafico(JanelaInterna);
        grafico->setObjectName(QString::fromUtf8("grafico"));

        horizontalLayout->addWidget(grafico);

        legenda = new Legenda(JanelaInterna);
        legenda->setObjectName(QString::fromUtf8("legenda"));
        legenda->setMaximumSize(QSize(230, 16777215));

        horizontalLayout->addWidget(legenda);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(670, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        imprimir = new QToolButton(JanelaInterna);
        imprimir->setObjectName(QString::fromUtf8("imprimir"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/imprimir.png"), QSize(), QIcon::Normal, QIcon::Off);
        imprimir->setIcon(icon);
        imprimir->setIconSize(QSize(22, 22));
        imprimir->setAutoRaise(true);

        gridLayout->addWidget(imprimir, 1, 2, 1, 1);

        salvar = new QToolButton(JanelaInterna);
        salvar->setObjectName(QString::fromUtf8("salvar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/salvar.png"), QSize(), QIcon::Normal, QIcon::Off);
        salvar->setIcon(icon1);
        salvar->setIconSize(QSize(22, 22));
        salvar->setAutoRaise(true);

        gridLayout->addWidget(salvar, 1, 3, 1, 1);

        zoom = new QToolButton(JanelaInterna);
        zoom->setObjectName(QString::fromUtf8("zoom"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imgs/zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoom->setIcon(icon2);
        zoom->setIconSize(QSize(22, 22));
        zoom->setCheckable(true);
        zoom->setAutoRaise(true);

        gridLayout->addWidget(zoom, 1, 1, 1, 1);

        QWidget::setTabOrder(zoom, imprimir);
        QWidget::setTabOrder(imprimir, salvar);

        retranslateUi(JanelaInterna);

        QMetaObject::connectSlotsByName(JanelaInterna);
    } // setupUi

    void retranslateUi(QWidget *JanelaInterna)
    {
        JanelaInterna->setWindowTitle(QApplication::translate("JanelaInterna", "T\303\255tulo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        imprimir->setToolTip(QApplication::translate("JanelaInterna", "Imprimir imagem", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        salvar->setToolTip(QApplication::translate("JanelaInterna", "Salvar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        zoom->setToolTip(QApplication::translate("JanelaInterna", "Zoom -", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class JanelaInterna: public Ui_JanelaInterna {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELA_INTERNA_H
