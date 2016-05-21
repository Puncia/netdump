/********************************************************************************
** Form generated from reading UI file 'netdump.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETDUMP_H
#define UI_NETDUMP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_netdumpClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QScrollArea *area_dec;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *layout_dec;
    QSpacerItem *verticalSpacer_2;
    QScrollArea *area_bin;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *layout_bin;
    QSpacerItem *verticalSpacer_5;
    QScrollArea *area_hex;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *layout_hex;
    QSpacerItem *verticalSpacer;
    QLabel *add_label;
    QScrollArea *area_ascii;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *layout_ascii;
    QSpacerItem *verticalSpacer_6;
    QScrollArea *area_mix;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *layout_mix;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QMainWindow *netdumpClass)
    {
        if (netdumpClass->objectName().isEmpty())
            netdumpClass->setObjectName(QStringLiteral("netdumpClass"));
        netdumpClass->resize(800, 464);
        netdumpClass->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"	background: #3A3A3A;\n"
"}\n"
"QLabel\n"
"{\n"
"	padding-left: 1px;\n"
"	padding-bottom: 1px;\n"
"	padding-top: 1px;\n"
"	padding_right: 1px;\n"
"\n"
"	color: #EEEEEE;\n"
"	font-family: Lucida Console;\n"
"	font-size: 12px;\n"
"}"));
        centralWidget = new QWidget(netdumpClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 5, 2, 2);
        area_dec = new QScrollArea(centralWidget);
        area_dec->setObjectName(QStringLiteral("area_dec"));
        area_dec->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        area_dec->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        area_dec->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 557, 107));
        layout_dec = new QVBoxLayout(scrollAreaWidgetContents_3);
        layout_dec->setSpacing(0);
        layout_dec->setContentsMargins(11, 11, 11, 11);
        layout_dec->setObjectName(QStringLiteral("layout_dec"));
        layout_dec->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_dec->addItem(verticalSpacer_2);

        area_dec->setWidget(scrollAreaWidgetContents_3);

        gridLayout->addWidget(area_dec, 3, 2, 1, 1);

        area_bin = new QScrollArea(centralWidget);
        area_bin->setObjectName(QStringLiteral("area_bin"));
        area_bin->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        area_bin->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        area_bin->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 557, 106));
        layout_bin = new QVBoxLayout(scrollAreaWidgetContents_4);
        layout_bin->setSpacing(0);
        layout_bin->setContentsMargins(11, 11, 11, 11);
        layout_bin->setObjectName(QStringLiteral("layout_bin"));
        layout_bin->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_bin->addItem(verticalSpacer_5);

        area_bin->setWidget(scrollAreaWidgetContents_4);

        gridLayout->addWidget(area_bin, 5, 2, 1, 1);

        area_hex = new QScrollArea(centralWidget);
        area_hex->setObjectName(QStringLiteral("area_hex"));
        area_hex->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        area_hex->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        area_hex->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 557, 106));
        layout_hex = new QVBoxLayout(scrollAreaWidgetContents_5);
        layout_hex->setSpacing(0);
        layout_hex->setContentsMargins(11, 11, 11, 11);
        layout_hex->setObjectName(QStringLiteral("layout_hex"));
        layout_hex->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_hex->addItem(verticalSpacer);

        area_hex->setWidget(scrollAreaWidgetContents_5);

        gridLayout->addWidget(area_hex, 4, 2, 1, 1);

        add_label = new QLabel(centralWidget);
        add_label->setObjectName(QStringLiteral("add_label"));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Console"));
        add_label->setFont(font);
        add_label->setStyleSheet(QStringLiteral("color: #D03B3B;"));

        gridLayout->addWidget(add_label, 0, 0, 1, 3);

        area_ascii = new QScrollArea(centralWidget);
        area_ascii->setObjectName(QStringLiteral("area_ascii"));
        area_ascii->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        area_ascii->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        area_ascii->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 557, 106));
        layout_ascii = new QVBoxLayout(scrollAreaWidgetContents_2);
        layout_ascii->setSpacing(0);
        layout_ascii->setContentsMargins(11, 11, 11, 11);
        layout_ascii->setObjectName(QStringLiteral("layout_ascii"));
        layout_ascii->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_ascii->addItem(verticalSpacer_6);

        area_ascii->setWidget(scrollAreaWidgetContents_2);

        gridLayout->addWidget(area_ascii, 1, 2, 1, 1);

        area_mix = new QScrollArea(centralWidget);
        area_mix->setObjectName(QStringLiteral("area_mix"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(area_mix->sizePolicy().hasHeightForWidth());
        area_mix->setSizePolicy(sizePolicy);
        area_mix->setMinimumSize(QSize(235, 0));
        area_mix->setMaximumSize(QSize(235, 16777215));
        area_mix->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        area_mix->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        area_mix->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 233, 439));
        layout_mix = new QVBoxLayout(scrollAreaWidgetContents);
        layout_mix->setSpacing(0);
        layout_mix->setContentsMargins(11, 11, 11, 11);
        layout_mix->setObjectName(QStringLiteral("layout_mix"));
        layout_mix->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout_mix->addItem(verticalSpacer_3);

        area_mix->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(area_mix, 1, 1, 5, 1);

        netdumpClass->setCentralWidget(centralWidget);

        retranslateUi(netdumpClass);

        QMetaObject::connectSlotsByName(netdumpClass);
    } // setupUi

    void retranslateUi(QMainWindow *netdumpClass)
    {
        netdumpClass->setWindowTitle(QApplication::translate("netdumpClass", "netdump", 0));
        add_label->setText(QApplication::translate("netdumpClass", "disconnected", 0));
    } // retranslateUi

};

namespace Ui {
    class netdumpClass: public Ui_netdumpClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETDUMP_H
