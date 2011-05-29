/********************************************************************************
** Form generated from reading UI file 'config_modulos.ui'
**
** Created: Wed May 11 15:58:19 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_MODULOS_H
#define UI_CONFIG_MODULOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigModulos
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QComboBox *falhas;
    QComboBox *tipos;
    QLineEdit *ordem;
    QLabel *label_6;
    QLabel *label_ordem;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *adicionar_arq;
    QToolButton *remover_arq;
    QToolButton *subir_arq;
    QToolButton *descer_arq;
    QListWidget *lista_arquivos;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QToolButton *adicionar;
    QToolButton *remover;
    QTableWidget *modulos_cad;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *salvar;
    QPushButton *fechar;

    void setupUi(QDialog *ConfigModulos)
    {
        if (ConfigModulos->objectName().isEmpty())
            ConfigModulos->setObjectName(QString::fromUtf8("ConfigModulos"));
        ConfigModulos->resize(414, 588);
        gridLayout = new QGridLayout(ConfigModulos);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(ConfigModulos);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 0, 0, 1, 2);

        label_7 = new QLabel(ConfigModulos);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        falhas = new QComboBox(ConfigModulos);
        falhas->setObjectName(QString::fromUtf8("falhas"));

        verticalLayout_2->addWidget(falhas);

        tipos = new QComboBox(ConfigModulos);
        tipos->setObjectName(QString::fromUtf8("tipos"));

        verticalLayout_2->addWidget(tipos);

        ordem = new QLineEdit(ConfigModulos);
        ordem->setObjectName(QString::fromUtf8("ordem"));

        verticalLayout_2->addWidget(ordem);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 3, 1);

        label_6 = new QLabel(ConfigModulos);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_ordem = new QLabel(ConfigModulos);
        label_ordem->setObjectName(QString::fromUtf8("label_ordem"));
        sizePolicy.setHeightForWidth(label_ordem->sizePolicy().hasHeightForWidth());
        label_ordem->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_ordem, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(ConfigModulos);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        horizontalSpacer_4 = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        adicionar_arq = new QToolButton(ConfigModulos);
        adicionar_arq->setObjectName(QString::fromUtf8("adicionar_arq"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/abrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        adicionar_arq->setIcon(icon);
        adicionar_arq->setAutoRaise(true);

        horizontalLayout_2->addWidget(adicionar_arq);

        remover_arq = new QToolButton(ConfigModulos);
        remover_arq->setObjectName(QString::fromUtf8("remover_arq"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/cancelar.png"), QSize(), QIcon::Normal, QIcon::Off);
        remover_arq->setIcon(icon1);
        remover_arq->setAutoRaise(true);

        horizontalLayout_2->addWidget(remover_arq);

        subir_arq = new QToolButton(ConfigModulos);
        subir_arq->setObjectName(QString::fromUtf8("subir_arq"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imgs/mover_para_cima.png"), QSize(), QIcon::Normal, QIcon::Off);
        subir_arq->setIcon(icon2);
        subir_arq->setAutoRaise(true);

        horizontalLayout_2->addWidget(subir_arq);

        descer_arq = new QToolButton(ConfigModulos);
        descer_arq->setObjectName(QString::fromUtf8("descer_arq"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imgs/mover_para_baixo.png"), QSize(), QIcon::Normal, QIcon::Off);
        descer_arq->setIcon(icon3);
        descer_arq->setAutoRaise(true);

        horizontalLayout_2->addWidget(descer_arq);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 2);

        lista_arquivos = new QListWidget(ConfigModulos);
        lista_arquivos->setObjectName(QString::fromUtf8("lista_arquivos"));
        lista_arquivos->setMaximumSize(QSize(16777215, 120));

        gridLayout->addWidget(lista_arquivos, 6, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(ConfigModulos);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(153, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        adicionar = new QToolButton(ConfigModulos);
        adicionar->setObjectName(QString::fromUtf8("adicionar"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imgs/adicionar.png"), QSize(), QIcon::Normal, QIcon::Off);
        adicionar->setIcon(icon4);
        adicionar->setAutoRaise(true);

        horizontalLayout->addWidget(adicionar);

        remover = new QToolButton(ConfigModulos);
        remover->setObjectName(QString::fromUtf8("remover"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/imgs/remover.png"), QSize(), QIcon::Normal, QIcon::Off);
        remover->setIcon(icon5);
        remover->setAutoRaise(true);

        horizontalLayout->addWidget(remover);


        horizontalLayout_4->addLayout(horizontalLayout);


        gridLayout->addLayout(horizontalLayout_4, 7, 0, 1, 2);

        modulos_cad = new QTableWidget(ConfigModulos);
        if (modulos_cad->columnCount() < 3)
            modulos_cad->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        modulos_cad->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        modulos_cad->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        modulos_cad->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        modulos_cad->setObjectName(QString::fromUtf8("modulos_cad"));
        modulos_cad->setEditTriggers(QAbstractItemView::NoEditTriggers);
        modulos_cad->setTabKeyNavigation(false);
        modulos_cad->setSelectionMode(QAbstractItemView::SingleSelection);
        modulos_cad->setGridStyle(Qt::DotLine);
        modulos_cad->setSortingEnabled(true);
        modulos_cad->verticalHeader()->setVisible(false);

        gridLayout->addWidget(modulos_cad, 8, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(153, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalSpacer_5 = new QSpacerItem(153, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        salvar = new QPushButton(ConfigModulos);
        salvar->setObjectName(QString::fromUtf8("salvar"));
        salvar->setEnabled(false);

        horizontalLayout_3->addWidget(salvar);

        fechar = new QPushButton(ConfigModulos);
        fechar->setObjectName(QString::fromUtf8("fechar"));

        horizontalLayout_3->addWidget(fechar);


        gridLayout->addLayout(horizontalLayout_3, 9, 0, 1, 2);

        QWidget::setTabOrder(adicionar, remover);
        QWidget::setTabOrder(remover, modulos_cad);
        QWidget::setTabOrder(modulos_cad, fechar);

        retranslateUi(ConfigModulos);
        QObject::connect(fechar, SIGNAL(clicked()), ConfigModulos, SLOT(accept()));

        QMetaObject::connectSlotsByName(ConfigModulos);
    } // setupUi

    void retranslateUi(QDialog *ConfigModulos)
    {
        ConfigModulos->setWindowTitle(QApplication::translate("ConfigModulos", "Configura\303\247\303\243o das falhas do sistema", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ConfigModulos", "Selecione a falha a ser detecteada, o tipo do m\303\263dulo detec\303\247\303\243o e em seguida inclua os arquivos que dever\303\243o ser carregados para configur\303\241-lo. Ap\303\263s isto, clique no bot\303\243o adicionar m\303\263dulo.", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ConfigModulos", "Falha", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        falhas->setToolTip(QApplication::translate("ConfigModulos", "Local da falha", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tipos->clear();
        tipos->insertItems(0, QStringList()
         << QApplication::translate("ConfigModulos", "RNA", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigModulos", "Fuzzy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigModulos", "Estat\303\255stico", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigModulos", "Personalizado", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        tipos->setToolTip(QApplication::translate("ConfigModulos", "Local da falha", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("ConfigModulos", "Tipo de m\303\263dulo", 0, QApplication::UnicodeUTF8));
        label_ordem->setText(QApplication::translate("ConfigModulos", "Ordem", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ConfigModulos", "Lista de arquivos de configura\303\247\303\243o", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        adicionar_arq->setToolTip(QApplication::translate("ConfigModulos", "Adicionar arquivo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        remover_arq->setToolTip(QApplication::translate("ConfigModulos", "Remover arquivo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        subir_arq->setToolTip(QApplication::translate("ConfigModulos", "Subir arquivo na lista", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        descer_arq->setToolTip(QApplication::translate("ConfigModulos", "Descer arquivo na lista", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lista_arquivos->setToolTip(QApplication::translate("ConfigModulos", "Lista de arquivos a serem carregados", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("ConfigModulos", "Lista de m\303\263dulos cadastrados", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        adicionar->setToolTip(QApplication::translate("ConfigModulos", "Adicionar m\303\263dulo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        remover->setToolTip(QApplication::translate("ConfigModulos", "Remover m\303\263dulo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem = modulos_cad->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ConfigModulos", "Tipo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = modulos_cad->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ConfigModulos", "Falha", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = modulos_cad->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ConfigModulos", "Qtde. Arquivos", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        modulos_cad->setToolTip(QApplication::translate("ConfigModulos", "M\303\263dulos cadastrados", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        salvar->setToolTip(QApplication::translate("ConfigModulos", "Salvar altera\303\247\303\265es", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        salvar->setText(QApplication::translate("ConfigModulos", "Salvar", 0, QApplication::UnicodeUTF8));
        fechar->setText(QApplication::translate("ConfigModulos", "Fechar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConfigModulos: public Ui_ConfigModulos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_MODULOS_H
