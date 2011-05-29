/********************************************************************************
** Form generated from reading UI file 'legenda.ui'
**
** Created: Fri May 13 16:21:15 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEGENDA_H
#define UI_LEGENDA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Legenda
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QScrollArea *scroll;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QToolBox *paginas;
    QWidget *page_2;

    void setupUi(QWidget *Legenda)
    {
        if (Legenda->objectName().isEmpty())
            Legenda->setObjectName(QString::fromUtf8("Legenda"));
        Legenda->resize(230, 366);
        Legenda->setStyleSheet(QString::fromUtf8("QToolBox::tab{\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                             stop: 0    #E1E1E1, \n"
"                                             stop: 0.4 #DDDDDD,\n"
"                                             stop: 0.5 #D8D8D8,\n"
"                                             stop: 1.0 #D3D3D3);\n"
"    border-radius: 5px;\n"
"    color: black;\n"
"    font-weight: normal;\n"
"}\n"
"\n"
"QToolBox::tab:selected{\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                             stop: 0    #D8D8D8, \n"
"                                             stop: 0.4 #D3D3D3,\n"
"                                             stop: 0.5 #CECECE,\n"
"                                             stop: 1.0 #CACACA);\n"
"    font-weight: bold;\n"
"    color: black;\n"
"}"));
        gridLayout = new QGridLayout(Legenda);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(Legenda);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        scroll = new QScrollArea(Legenda);
        scroll->setObjectName(QString::fromUtf8("scroll"));
        scroll->setFrameShape(QFrame::NoFrame);
        scroll->setWidgetResizable(true);
        scroll->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 212, 320));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        paginas = new QToolBox(scrollAreaWidgetContents);
        paginas->setObjectName(QString::fromUtf8("paginas"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 194, 274));
        paginas->addItem(page_2, QString::fromUtf8("Page"));

        gridLayout_2->addWidget(paginas, 0, 0, 1, 1);

        scroll->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scroll, 1, 0, 1, 1);


        retranslateUi(Legenda);

        paginas->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Legenda);
    } // setupUi

    void retranslateUi(QWidget *Legenda)
    {
        Legenda->setWindowTitle(QApplication::translate("Legenda", "Legenda", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Legenda", "<b>Legenda</b>", 0, QApplication::UnicodeUTF8));
        paginas->setItemText(paginas->indexOf(page_2), QApplication::translate("Legenda", "Page", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Legenda: public Ui_Legenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEGENDA_H
