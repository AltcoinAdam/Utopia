/********************************************************************************
** Form generated from reading UI file 'chatwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindowClass
{
public:
    QAction *actionQuit;
    QAction *actionCloseTab;
    QWidget *widget_2;
    QWidget *splitter;
    QTabWidget *tab;
    QWidget *widget_4;
    QWidget *tab_5;
    QLineEdit *lineEdit;
    QListView *userView;
    QPushButton *disconnect;
    QWidget *hide3;
    QWidget *layoutWidget;
    QHBoxLayout *hide1;
    QLabel *label_9;
    QLabel *hide2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *editPseudo;
    QLabel *label_5;
    QPushButton *buttonConnect;
    QLabel *label_10;

    void setupUi(QWidget *ChatWindowClass)
    {
        if (ChatWindowClass->objectName().isEmpty())
            ChatWindowClass->setObjectName(QStringLiteral("ChatWindowClass"));
        ChatWindowClass->resize(743, 514);
        actionQuit = new QAction(ChatWindowClass);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionCloseTab = new QAction(ChatWindowClass);
        actionCloseTab->setObjectName(QStringLiteral("actionCloseTab"));
        widget_2 = new QWidget(ChatWindowClass);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 741, 511));
        splitter = new QWidget(widget_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setEnabled(true);
        splitter->setGeometry(QRect(10, 10, 721, 501));
        splitter->setStyleSheet(QStringLiteral(""));
        tab = new QTabWidget(splitter);
        tab->setObjectName(QStringLiteral("tab"));
        tab->setGeometry(QRect(10, 0, 541, 451));
        tab->setStyleSheet(QStringLiteral(""));
        tab->setTabShape(QTabWidget::Rounded);
        tab->setTabsClosable(false);
        widget_4 = new QWidget();
        widget_4->setObjectName(QStringLiteral("widget_4"));
        tab->addTab(widget_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tab->addTab(tab_5, QString());
        lineEdit = new QLineEdit(splitter);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 460, 701, 30));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMaximumSize(QSize(16777215, 30));
        userView = new QListView(splitter);
        userView->setObjectName(QStringLiteral("userView"));
        userView->setGeometry(QRect(560, 20, 161, 391));
        userView->setMinimumSize(QSize(0, 300));
        userView->setStyleSheet(QStringLiteral("border-radius:10px;"));
        disconnect = new QPushButton(splitter);
        disconnect->setObjectName(QStringLiteral("disconnect"));
        disconnect->setGeometry(QRect(642, 420, 71, 28));
        hide3 = new QWidget(widget_2);
        hide3->setObjectName(QStringLiteral("hide3"));
        hide3->setGeometry(QRect(0, 0, 741, 511));
        hide3->setStyleSheet(QStringLiteral("font-family:Proxima Nova Rg;"));
        layoutWidget = new QWidget(hide3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 6, 731, 41));
        hide1 = new QHBoxLayout(layoutWidget);
        hide1->setSpacing(7);
        hide1->setContentsMargins(11, 11, 11, 11);
        hide1->setObjectName(QStringLiteral("hide1"));
        hide1->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Proxima Nova Rg"));
        label_9->setFont(font);

        hide1->addWidget(label_9);

        hide2 = new QLabel(hide3);
        hide2->setObjectName(QStringLiteral("hide2"));
        hide2->setGeometry(QRect(40, 60, 501, 41));
        hide2->setWordWrap(true);
        hide2->setOpenExternalLinks(true);
        label = new QLabel(hide3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 310, 141, 141));
        label->setMargin(5);
        label->setOpenExternalLinks(true);
        editPseudo = new QLineEdit(hide3);
        editPseudo->setObjectName(QStringLiteral("editPseudo"));
        editPseudo->setGeometry(QRect(140, 180, 151, 22));
        label_5 = new QLabel(hide3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 180, 61, 21));
        buttonConnect = new QPushButton(hide3);
        buttonConnect->setObjectName(QStringLiteral("buttonConnect"));
        buttonConnect->setGeometry(QRect(140, 220, 151, 41));
        buttonConnect->setStyleSheet(QStringLiteral("border-radius:40px;border:1px solid grey"));
        label_10 = new QLabel(hide3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(80, 140, 161, 21));

        retranslateUi(ChatWindowClass);

        tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ChatWindowClass);
    } // setupUi

    void retranslateUi(QWidget *ChatWindowClass)
    {
        actionQuit->setText(QApplication::translate("ChatWindowClass", "Quitter", 0));
        actionQuit->setShortcut(QApplication::translate("ChatWindowClass", "Ctrl+Q", 0));
        actionCloseTab->setText(QApplication::translate("ChatWindowClass", "Fermer l'onglet", 0));
        tab->setTabText(tab->indexOf(widget_4), QApplication::translate("ChatWindowClass", "Tab 1", 0));
        tab->setTabText(tab->indexOf(tab_5), QApplication::translate("ChatWindowClass", "Tab 2", 0));
        disconnect->setText(QApplication::translate("ChatWindowClass", "Exit", 0));
        label_9->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">eUtopium Social</span></p></body></html>", 0));
        hide2->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"justify\"><span style=\" font-size:9pt;\">Join the eUtopium community on Twitter or contact us in the chat!</span></p></body></html>", 0));
        label->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"center\"><a href=\"https://twitter.com/eUtopium\"><span style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/twitter\"/></span></a></p></body></html>", 0));
        editPseudo->setText(QString());
        label_5->setText(QApplication::translate("ChatWindowClass", "Nick", 0));
        buttonConnect->setText(QApplication::translate("ChatWindowClass", "Enter", 0));
        label_10->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p><span style=\" font-size:12pt;\">Chat now:</span></p></body></html>", 0));
        Q_UNUSED(ChatWindowClass);
    } // retranslateUi

};

namespace Ui {
    class ChatWindowClass: public Ui_ChatWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
