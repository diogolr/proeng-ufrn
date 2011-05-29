/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created: Thu May 19 15:10:56 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>
#include "../src/janela_interna.h"

QT_BEGIN_NAMESPACE

class Ui_JanelaPrincipal
{
public:
    QAction *acao_cfg_falhas;
    QAction *acao_cfg_modulos;
    QAction *acao_sair;
    QAction *acao_ajuda;
    QAction *acao_qt;
    QAction *acao_simddef;
    QWidget *widget_central;
    QGridLayout *gridLayout_2;
    JanelaInterna *janela_interna;
    QMenuBar *barra_menu;
    QMenu *menu_Arquivo;
    QMenu *menu_Configurar;
    QMenu *menu_Sobre;
    QStatusBar *barra_status;
    QToolBar *barra_ferramentas;
    QDockWidget *dock_falhas;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *end_arq_falhas;
    QToolButton *botao_carregar_falhas;
    QToolButton *botao_recarregar_falhas;
    QTreeWidget *falhas;
    QDockWidget *dock_modulos;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout_3;
    QTableWidget *modulos;
    QHBoxLayout *horizontalLayout;
    QLineEdit *end_arq_modulos;
    QToolButton *botao_carregar_modulos;
    QToolButton *botao_recarregar_modulos;

    void setupUi(QMainWindow *JanelaPrincipal)
    {
        if (JanelaPrincipal->objectName().isEmpty())
            JanelaPrincipal->setObjectName(QString::fromUtf8("JanelaPrincipal"));
        JanelaPrincipal->resize(813, 589);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/falhas.png"), QSize(), QIcon::Normal, QIcon::Off);
        JanelaPrincipal->setWindowIcon(icon);
        acao_cfg_falhas = new QAction(JanelaPrincipal);
        acao_cfg_falhas->setObjectName(QString::fromUtf8("acao_cfg_falhas"));
        acao_cfg_falhas->setEnabled(false);
        acao_cfg_falhas->setIcon(icon);
        acao_cfg_modulos = new QAction(JanelaPrincipal);
        acao_cfg_modulos->setObjectName(QString::fromUtf8("acao_cfg_modulos"));
        acao_cfg_modulos->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/modulos_blocos.png"), QSize(), QIcon::Normal, QIcon::Off);
        acao_cfg_modulos->setIcon(icon1);
        acao_sair = new QAction(JanelaPrincipal);
        acao_sair->setObjectName(QString::fromUtf8("acao_sair"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imgs/sair.png"), QSize(), QIcon::Normal, QIcon::Off);
        acao_sair->setIcon(icon2);
        acao_ajuda = new QAction(JanelaPrincipal);
        acao_ajuda->setObjectName(QString::fromUtf8("acao_ajuda"));
        acao_ajuda->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imgs/ajuda.png"), QSize(), QIcon::Normal, QIcon::Off);
        acao_ajuda->setIcon(icon3);
        acao_qt = new QAction(JanelaPrincipal);
        acao_qt->setObjectName(QString::fromUtf8("acao_qt"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imgs/qt.png"), QSize(), QIcon::Normal, QIcon::Off);
        acao_qt->setIcon(icon4);
        acao_simddef = new QAction(JanelaPrincipal);
        acao_simddef->setObjectName(QString::fromUtf8("acao_simddef"));
        acao_simddef->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/imgs/modulos.png"), QSize(), QIcon::Normal, QIcon::Off);
        acao_simddef->setIcon(icon5);
        widget_central = new QWidget(JanelaPrincipal);
        widget_central->setObjectName(QString::fromUtf8("widget_central"));
        gridLayout_2 = new QGridLayout(widget_central);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        janela_interna = new JanelaInterna(widget_central);
        janela_interna->setObjectName(QString::fromUtf8("janela_interna"));

        gridLayout_2->addWidget(janela_interna, 0, 0, 1, 1);

        JanelaPrincipal->setCentralWidget(widget_central);
        barra_menu = new QMenuBar(JanelaPrincipal);
        barra_menu->setObjectName(QString::fromUtf8("barra_menu"));
        barra_menu->setGeometry(QRect(0, 0, 813, 21));
        menu_Arquivo = new QMenu(barra_menu);
        menu_Arquivo->setObjectName(QString::fromUtf8("menu_Arquivo"));
        menu_Configurar = new QMenu(barra_menu);
        menu_Configurar->setObjectName(QString::fromUtf8("menu_Configurar"));
        menu_Sobre = new QMenu(barra_menu);
        menu_Sobre->setObjectName(QString::fromUtf8("menu_Sobre"));
        JanelaPrincipal->setMenuBar(barra_menu);
        barra_status = new QStatusBar(JanelaPrincipal);
        barra_status->setObjectName(QString::fromUtf8("barra_status"));
        JanelaPrincipal->setStatusBar(barra_status);
        barra_ferramentas = new QToolBar(JanelaPrincipal);
        barra_ferramentas->setObjectName(QString::fromUtf8("barra_ferramentas"));
        barra_ferramentas->setIconSize(QSize(20, 20));
        JanelaPrincipal->addToolBar(Qt::TopToolBarArea, barra_ferramentas);
        dock_falhas = new QDockWidget(JanelaPrincipal);
        dock_falhas->setObjectName(QString::fromUtf8("dock_falhas"));
        dock_falhas->setMinimumSize(QSize(250, 183));
        dock_falhas->setFeatures(QDockWidget::DockWidgetMovable);
        dock_falhas->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        end_arq_falhas = new QLineEdit(dockWidgetContents);
        end_arq_falhas->setObjectName(QString::fromUtf8("end_arq_falhas"));
        end_arq_falhas->setEnabled(false);

        horizontalLayout_2->addWidget(end_arq_falhas);

        botao_carregar_falhas = new QToolButton(dockWidgetContents);
        botao_carregar_falhas->setObjectName(QString::fromUtf8("botao_carregar_falhas"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/imgs/abrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        botao_carregar_falhas->setIcon(icon6);
        botao_carregar_falhas->setIconSize(QSize(20, 20));
        botao_carregar_falhas->setAutoRaise(true);

        horizontalLayout_2->addWidget(botao_carregar_falhas);

        botao_recarregar_falhas = new QToolButton(dockWidgetContents);
        botao_recarregar_falhas->setObjectName(QString::fromUtf8("botao_recarregar_falhas"));
        botao_recarregar_falhas->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/imgs/recarregar.png"), QSize(), QIcon::Normal, QIcon::Off);
        botao_recarregar_falhas->setIcon(icon7);
        botao_recarregar_falhas->setIconSize(QSize(20, 20));
        botao_recarregar_falhas->setAutoRaise(true);

        horizontalLayout_2->addWidget(botao_recarregar_falhas);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        falhas = new QTreeWidget(dockWidgetContents);
        new QTreeWidgetItem(falhas);
        new QTreeWidgetItem(falhas);
        new QTreeWidgetItem(falhas);
        falhas->setObjectName(QString::fromUtf8("falhas"));

        gridLayout->addWidget(falhas, 2, 0, 1, 1);

        dock_falhas->setWidget(dockWidgetContents);
        JanelaPrincipal->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dock_falhas);
        dock_modulos = new QDockWidget(JanelaPrincipal);
        dock_modulos->setObjectName(QString::fromUtf8("dock_modulos"));
        dock_modulos->setMinimumSize(QSize(250, 163));
        dock_modulos->setFeatures(QDockWidget::DockWidgetMovable);
        dock_modulos->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        gridLayout_3 = new QGridLayout(dockWidgetContents_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        modulos = new QTableWidget(dockWidgetContents_2);
        if (modulos->columnCount() < 3)
            modulos->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        modulos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        modulos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        modulos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        modulos->setObjectName(QString::fromUtf8("modulos"));
        modulos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        modulos->setTabKeyNavigation(false);
        modulos->setSelectionMode(QAbstractItemView::SingleSelection);
        modulos->setGridStyle(Qt::DotLine);
        modulos->setSortingEnabled(true);
        modulos->verticalHeader()->setVisible(false);

        gridLayout_3->addWidget(modulos, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        end_arq_modulos = new QLineEdit(dockWidgetContents_2);
        end_arq_modulos->setObjectName(QString::fromUtf8("end_arq_modulos"));
        end_arq_modulos->setEnabled(false);

        horizontalLayout->addWidget(end_arq_modulos);

        botao_carregar_modulos = new QToolButton(dockWidgetContents_2);
        botao_carregar_modulos->setObjectName(QString::fromUtf8("botao_carregar_modulos"));
        botao_carregar_modulos->setEnabled(false);
        botao_carregar_modulos->setIcon(icon6);
        botao_carregar_modulos->setIconSize(QSize(20, 20));
        botao_carregar_modulos->setAutoRaise(true);

        horizontalLayout->addWidget(botao_carregar_modulos);

        botao_recarregar_modulos = new QToolButton(dockWidgetContents_2);
        botao_recarregar_modulos->setObjectName(QString::fromUtf8("botao_recarregar_modulos"));
        botao_recarregar_modulos->setEnabled(false);
        botao_recarregar_modulos->setIcon(icon7);
        botao_recarregar_modulos->setIconSize(QSize(20, 20));
        botao_recarregar_modulos->setAutoRaise(true);

        horizontalLayout->addWidget(botao_recarregar_modulos);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        dock_modulos->setWidget(dockWidgetContents_2);
        JanelaPrincipal->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dock_modulos);
        QWidget::setTabOrder(botao_carregar_falhas, botao_carregar_modulos);
        QWidget::setTabOrder(botao_carregar_modulos, botao_recarregar_falhas);
        QWidget::setTabOrder(botao_recarregar_falhas, botao_recarregar_modulos);
        QWidget::setTabOrder(botao_recarregar_modulos, end_arq_falhas);
        QWidget::setTabOrder(end_arq_falhas, falhas);
        QWidget::setTabOrder(falhas, end_arq_modulos);
        QWidget::setTabOrder(end_arq_modulos, modulos);

        barra_menu->addAction(menu_Arquivo->menuAction());
        barra_menu->addAction(menu_Configurar->menuAction());
        barra_menu->addAction(menu_Sobre->menuAction());
        menu_Arquivo->addAction(acao_sair);
        menu_Configurar->addAction(acao_cfg_falhas);
        menu_Configurar->addAction(acao_cfg_modulos);
        menu_Sobre->addAction(acao_ajuda);
        menu_Sobre->addSeparator();
        menu_Sobre->addAction(acao_simddef);
        menu_Sobre->addAction(acao_qt);
        barra_ferramentas->addAction(acao_cfg_falhas);
        barra_ferramentas->addAction(acao_cfg_modulos);

        retranslateUi(JanelaPrincipal);

        QMetaObject::connectSlotsByName(JanelaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *JanelaPrincipal)
    {
        JanelaPrincipal->setWindowTitle(QApplication::translate("JanelaPrincipal", "Simddef - Sistema de detec\303\247\303\243o e diagn\303\263stico de falhas", 0, QApplication::UnicodeUTF8));
        acao_cfg_falhas->setText(QApplication::translate("JanelaPrincipal", "Falhas", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        acao_cfg_falhas->setToolTip(QApplication::translate("JanelaPrincipal", "Configurar falhas", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        acao_cfg_falhas->setShortcut(QApplication::translate("JanelaPrincipal", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        acao_cfg_modulos->setText(QApplication::translate("JanelaPrincipal", "M\303\263dulos", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        acao_cfg_modulos->setToolTip(QApplication::translate("JanelaPrincipal", "Configurar m\303\263dulos", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        acao_cfg_modulos->setShortcut(QApplication::translate("JanelaPrincipal", "Ctrl+M", 0, QApplication::UnicodeUTF8));
        acao_sair->setText(QApplication::translate("JanelaPrincipal", "Sair", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        acao_sair->setToolTip(QApplication::translate("JanelaPrincipal", "Encerrar a aplica\303\247\303\243o", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        acao_sair->setShortcut(QApplication::translate("JanelaPrincipal", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        acao_ajuda->setText(QApplication::translate("JanelaPrincipal", "&Ajuda", 0, QApplication::UnicodeUTF8));
        acao_qt->setText(QApplication::translate("JanelaPrincipal", "&Qt", 0, QApplication::UnicodeUTF8));
        acao_simddef->setText(QApplication::translate("JanelaPrincipal", "&Simddef", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        acao_simddef->setToolTip(QApplication::translate("JanelaPrincipal", "Simddef", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        menu_Arquivo->setTitle(QApplication::translate("JanelaPrincipal", "&Arquivo", 0, QApplication::UnicodeUTF8));
        menu_Configurar->setTitle(QApplication::translate("JanelaPrincipal", "&Configurar", 0, QApplication::UnicodeUTF8));
        menu_Sobre->setTitle(QApplication::translate("JanelaPrincipal", "&Sobre", 0, QApplication::UnicodeUTF8));
        barra_ferramentas->setWindowTitle(QApplication::translate("JanelaPrincipal", "Barra de ferramentas", 0, QApplication::UnicodeUTF8));
        dock_falhas->setWindowTitle(QApplication::translate("JanelaPrincipal", "Configura\303\247\303\243o das falhas", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("JanelaPrincipal", "Arquivo de configuracao de falhas", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        end_arq_falhas->setToolTip(QApplication::translate("JanelaPrincipal", "Endere\303\247o do arquivo de configura\303\247\303\243o de falhas", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        end_arq_falhas->setText(QString());
#ifndef QT_NO_TOOLTIP
        botao_carregar_falhas->setToolTip(QApplication::translate("JanelaPrincipal", "Abrir arquivo de configura\303\247\303\243o de falhas", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        botao_recarregar_falhas->setToolTip(QApplication::translate("JanelaPrincipal", "Recarregar arquivo de configura\303\247\303\243o de falhas", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        botao_recarregar_falhas->setShortcut(QApplication::translate("JanelaPrincipal", "Ctrl+S, Ctrl+R", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = falhas->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("JanelaPrincipal", "Lista de falhas", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = falhas->isSortingEnabled();
        falhas->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = falhas->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("JanelaPrincipal", "Falhas dos atuadores", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = falhas->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("JanelaPrincipal", "Falhas dos sensores", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = falhas->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("JanelaPrincipal", "Falhas do sistema", 0, QApplication::UnicodeUTF8));
        falhas->setSortingEnabled(__sortingEnabled);

#ifndef QT_NO_TOOLTIP
        falhas->setToolTip(QApplication::translate("JanelaPrincipal", "Lista de falhas cadastradas", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        dock_modulos->setWindowTitle(QApplication::translate("JanelaPrincipal", "Configura\303\247\303\243o dos m\303\263dulos de detec\303\247\303\243o", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = modulos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("JanelaPrincipal", "Tipo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = modulos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("JanelaPrincipal", "Falha", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = modulos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("JanelaPrincipal", "Status", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        modulos->setToolTip(QApplication::translate("JanelaPrincipal", "Lista de m\303\263dulos cadastrados. Para ativar um m\303\263dulo, clique duas vezes.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        end_arq_modulos->setToolTip(QApplication::translate("JanelaPrincipal", "Endere\303\247o do arquivo de configura\303\247\303\243o de m\303\263dulos", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        end_arq_modulos->setText(QString());
#ifndef QT_NO_TOOLTIP
        botao_carregar_modulos->setToolTip(QApplication::translate("JanelaPrincipal", "Abrir arquivo de configura\303\247\303\243o de m\303\263dulos", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        botao_recarregar_modulos->setToolTip(QApplication::translate("JanelaPrincipal", "Recarregar arquivo de configura\303\247\303\243o de m\303\263dulos", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        botao_recarregar_modulos->setShortcut(QApplication::translate("JanelaPrincipal", "Ctrl+S, Ctrl+R", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class JanelaPrincipal: public Ui_JanelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
