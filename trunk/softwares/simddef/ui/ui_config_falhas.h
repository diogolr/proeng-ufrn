/********************************************************************************
** Form generated from reading UI file 'config_falhas.ui'
**
** Created: Wed May 11 15:58:19 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_FALHAS_H
#define UI_CONFIG_FALHAS_H

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
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigFalhas
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QComboBox *local;
    QLineEdit *abrv;
    QLineEdit *descricao;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QToolButton *adicionar;
    QToolButton *remover;
    QTableWidget *falhas_cad;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *salvar;
    QPushButton *fechar;

    void setupUi(QDialog *ConfigFalhas)
    {
        if (ConfigFalhas->objectName().isEmpty())
            ConfigFalhas->setObjectName(QString::fromUtf8("ConfigFalhas"));
        ConfigFalhas->resize(521, 484);
        gridLayout = new QGridLayout(ConfigFalhas);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(ConfigFalhas);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_7 = new QLabel(ConfigFalhas);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_6 = new QLabel(ConfigFalhas);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_5 = new QLabel(ConfigFalhas);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        local = new QComboBox(ConfigFalhas);
        local->setObjectName(QString::fromUtf8("local"));

        verticalLayout->addWidget(local);

        abrv = new QLineEdit(ConfigFalhas);
        abrv->setObjectName(QString::fromUtf8("abrv"));
        abrv->setMaxLength(10);

        verticalLayout->addWidget(abrv);

        descricao = new QLineEdit(ConfigFalhas);
        descricao->setObjectName(QString::fromUtf8("descricao"));
        descricao->setMaxLength(80);

        verticalLayout->addWidget(descricao);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(ConfigFalhas);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(153, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        adicionar = new QToolButton(ConfigFalhas);
        adicionar->setObjectName(QString::fromUtf8("adicionar"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/adicionar.png"), QSize(), QIcon::Normal, QIcon::Off);
        adicionar->setIcon(icon);
        adicionar->setAutoRaise(true);

        horizontalLayout->addWidget(adicionar);

        remover = new QToolButton(ConfigFalhas);
        remover->setObjectName(QString::fromUtf8("remover"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/remover.png"), QSize(), QIcon::Normal, QIcon::Off);
        remover->setIcon(icon1);
        remover->setAutoRaise(true);

        horizontalLayout->addWidget(remover);


        horizontalLayout_4->addLayout(horizontalLayout);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        falhas_cad = new QTableWidget(ConfigFalhas);
        if (falhas_cad->columnCount() < 3)
            falhas_cad->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        falhas_cad->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        falhas_cad->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        falhas_cad->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        falhas_cad->setObjectName(QString::fromUtf8("falhas_cad"));
        falhas_cad->setEditTriggers(QAbstractItemView::NoEditTriggers);
        falhas_cad->setTabKeyNavigation(false);
        falhas_cad->setSelectionMode(QAbstractItemView::SingleSelection);
        falhas_cad->setGridStyle(Qt::DotLine);
        falhas_cad->setSortingEnabled(true);
        falhas_cad->verticalHeader()->setVisible(false);

        gridLayout->addWidget(falhas_cad, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(153, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        salvar = new QPushButton(ConfigFalhas);
        salvar->setObjectName(QString::fromUtf8("salvar"));
        salvar->setEnabled(false);

        horizontalLayout_3->addWidget(salvar);

        fechar = new QPushButton(ConfigFalhas);
        fechar->setObjectName(QString::fromUtf8("fechar"));

        horizontalLayout_3->addWidget(fechar);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 1);

        QWidget::setTabOrder(abrv, descricao);
        QWidget::setTabOrder(descricao, adicionar);
        QWidget::setTabOrder(adicionar, remover);
        QWidget::setTabOrder(remover, falhas_cad);
        QWidget::setTabOrder(falhas_cad, fechar);

        retranslateUi(ConfigFalhas);
        QObject::connect(fechar, SIGNAL(clicked()), ConfigFalhas, SLOT(accept()));

        QMetaObject::connectSlotsByName(ConfigFalhas);
    } // setupUi

    void retranslateUi(QDialog *ConfigFalhas)
    {
        ConfigFalhas->setWindowTitle(QApplication::translate("ConfigFalhas", "Configura\303\247\303\243o das falhas do sistema", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ConfigFalhas", "Cadastre uma nova falha escrevendo uma abreviatura, uma breve descri\303\247\303\243o e escolhendo o local da falha. Exemplo: FADG (Falha do atuador por descalibramento de ganho)", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ConfigFalhas", "Local", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ConfigFalhas", "Abreviatura", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ConfigFalhas", "Descri\303\247\303\243o", 0, QApplication::UnicodeUTF8));
        local->clear();
        local->insertItems(0, QStringList()
         << QApplication::translate("ConfigFalhas", "Falha do atuador", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigFalhas", "Falha do sensor", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigFalhas", "Falha do sistema", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        local->setToolTip(QApplication::translate("ConfigFalhas", "Local da falha", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        abrv->setToolTip(QApplication::translate("ConfigFalhas", "Abreviatura da falha (Limite de 10 caracteres)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        descricao->setToolTip(QApplication::translate("ConfigFalhas", "Descri\303\247\303\243o da falha (Limite de 50 caracteres)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        descricao->setText(QString());
        label_3->setText(QApplication::translate("ConfigFalhas", "Lista de falhas cadastradas", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        adicionar->setToolTip(QApplication::translate("ConfigFalhas", "Adicionar falha", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        remover->setToolTip(QApplication::translate("ConfigFalhas", "Remover falha", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem = falhas_cad->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ConfigFalhas", "Local", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = falhas_cad->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ConfigFalhas", "Abreviatura", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = falhas_cad->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ConfigFalhas", "Descri\303\247\303\243o", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        falhas_cad->setToolTip(QApplication::translate("ConfigFalhas", "Falhas cadastradas", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        salvar->setToolTip(QApplication::translate("ConfigFalhas", "Salvar altera\303\247\303\265es", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        salvar->setText(QApplication::translate("ConfigFalhas", "Salvar", 0, QApplication::UnicodeUTF8));
        fechar->setText(QApplication::translate("ConfigFalhas", "Fechar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConfigFalhas: public Ui_ConfigFalhas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_FALHAS_H
