/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QTextBrowser *textBrowser_PrintMsg;
    QFontComboBox *fontComboBox_Font;
    QComboBox *comboBox_FontSize;
    QPushButton *pushButton_FontBold;
    QPushButton *pushButton_FontItalic;
    QPushButton *pushButton_FontUnderline;
    QPushButton *pushButton_FontColor;
    QPushButton *pushButton_SaveRecord;
    QPushButton *pushButton_SendFlie;
    QPushButton *pushButton_CleanMsg;
    QTextEdit *textEdit_InputMsg;
    QPushButton *pushButton_Quit;
    QPushButton *pushButton_SendMsg;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName("MainWidget");
        MainWidget->resize(437, 285);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/image/ChatIcon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWidget->setWindowIcon(icon);
        textBrowser_PrintMsg = new QTextBrowser(MainWidget);
        textBrowser_PrintMsg->setObjectName("textBrowser_PrintMsg");
        textBrowser_PrintMsg->setGeometry(QRect(10, 10, 421, 141));
        textBrowser_PrintMsg->setBaseSize(QSize(1, 1));
        QFont font;
        font.setPointSize(10);
        textBrowser_PrintMsg->setFont(font);
        fontComboBox_Font = new QFontComboBox(MainWidget);
        fontComboBox_Font->setObjectName("fontComboBox_Font");
        fontComboBox_Font->setGeometry(QRect(10, 160, 121, 25));
        fontComboBox_Font->setBaseSize(QSize(1, 1));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font1.setPointSize(12);
        fontComboBox_Font->setFont(font1);
        fontComboBox_Font->setIconSize(QSize(20, 20));
        comboBox_FontSize = new QComboBox(MainWidget);
        comboBox_FontSize->addItem(QString());
        comboBox_FontSize->addItem(QString());
        comboBox_FontSize->addItem(QString());
        comboBox_FontSize->addItem(QString());
        comboBox_FontSize->addItem(QString());
        comboBox_FontSize->addItem(QString());
        comboBox_FontSize->addItem(QString());
        comboBox_FontSize->addItem(QString());
        comboBox_FontSize->addItem(QString());
        comboBox_FontSize->addItem(QString());
        comboBox_FontSize->addItem(QString());
        comboBox_FontSize->addItem(QString());
        comboBox_FontSize->addItem(QString());
        comboBox_FontSize->addItem(QString());
        comboBox_FontSize->setObjectName("comboBox_FontSize");
        comboBox_FontSize->setGeometry(QRect(140, 160, 71, 25));
        comboBox_FontSize->setBaseSize(QSize(1, 1));
        comboBox_FontSize->setFont(font);
        comboBox_FontSize->setIconSize(QSize(20, 20));
        pushButton_FontBold = new QPushButton(MainWidget);
        pushButton_FontBold->setObjectName("pushButton_FontBold");
        pushButton_FontBold->setGeometry(QRect(220, 160, 25, 25));
        pushButton_FontBold->setBaseSize(QSize(1, 1));
        pushButton_FontBold->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/image/bold.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_FontBold->setIcon(icon1);
        pushButton_FontBold->setIconSize(QSize(16, 16));
        pushButton_FontItalic = new QPushButton(MainWidget);
        pushButton_FontItalic->setObjectName("pushButton_FontItalic");
        pushButton_FontItalic->setGeometry(QRect(250, 160, 25, 25));
        pushButton_FontItalic->setBaseSize(QSize(1, 1));
        pushButton_FontItalic->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/image/italic.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_FontItalic->setIcon(icon2);
        pushButton_FontItalic->setIconSize(QSize(16, 16));
        pushButton_FontUnderline = new QPushButton(MainWidget);
        pushButton_FontUnderline->setObjectName("pushButton_FontUnderline");
        pushButton_FontUnderline->setGeometry(QRect(280, 160, 25, 25));
        pushButton_FontUnderline->setBaseSize(QSize(1, 1));
        pushButton_FontUnderline->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/image/underline.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_FontUnderline->setIcon(icon3);
        pushButton_FontUnderline->setIconSize(QSize(16, 16));
        pushButton_FontColor = new QPushButton(MainWidget);
        pushButton_FontColor->setObjectName("pushButton_FontColor");
        pushButton_FontColor->setGeometry(QRect(310, 160, 25, 25));
        pushButton_FontColor->setBaseSize(QSize(1, 1));
        pushButton_FontColor->setFont(font);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/image/color.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_FontColor->setIcon(icon4);
        pushButton_FontColor->setIconSize(QSize(16, 16));
        pushButton_SaveRecord = new QPushButton(MainWidget);
        pushButton_SaveRecord->setObjectName("pushButton_SaveRecord");
        pushButton_SaveRecord->setGeometry(QRect(370, 160, 25, 25));
        pushButton_SaveRecord->setBaseSize(QSize(1, 1));
        pushButton_SaveRecord->setFont(font);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/image/save.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_SaveRecord->setIcon(icon5);
        pushButton_SaveRecord->setIconSize(QSize(16, 16));
        pushButton_SendFlie = new QPushButton(MainWidget);
        pushButton_SendFlie->setObjectName("pushButton_SendFlie");
        pushButton_SendFlie->setGeometry(QRect(340, 160, 25, 25));
        pushButton_SendFlie->setBaseSize(QSize(1, 1));
        pushButton_SendFlie->setFont(font);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/image/file.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_SendFlie->setIcon(icon6);
        pushButton_SendFlie->setIconSize(QSize(16, 16));
        pushButton_CleanMsg = new QPushButton(MainWidget);
        pushButton_CleanMsg->setObjectName("pushButton_CleanMsg");
        pushButton_CleanMsg->setGeometry(QRect(400, 160, 25, 25));
        pushButton_CleanMsg->setBaseSize(QSize(1, 1));
        pushButton_CleanMsg->setFont(font);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/image/clear.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_CleanMsg->setIcon(icon7);
        pushButton_CleanMsg->setIconSize(QSize(16, 16));
        textEdit_InputMsg = new QTextEdit(MainWidget);
        textEdit_InputMsg->setObjectName("textEdit_InputMsg");
        textEdit_InputMsg->setGeometry(QRect(10, 190, 361, 71));
        textEdit_InputMsg->setBaseSize(QSize(1, 1));
        textEdit_InputMsg->setFont(font);
        pushButton_Quit = new QPushButton(MainWidget);
        pushButton_Quit->setObjectName("pushButton_Quit");
        pushButton_Quit->setGeometry(QRect(380, 230, 51, 31));
        pushButton_Quit->setBaseSize(QSize(1, 1));
        pushButton_Quit->setFont(font);
        pushButton_Quit->setIconSize(QSize(16, 16));
        pushButton_SendMsg = new QPushButton(MainWidget);
        pushButton_SendMsg->setObjectName("pushButton_SendMsg");
        pushButton_SendMsg->setGeometry(QRect(380, 190, 51, 31));
        pushButton_SendMsg->setBaseSize(QSize(1, 1));
        pushButton_SendMsg->setFont(font);
        pushButton_SendMsg->setIconSize(QSize(16, 16));

        retranslateUi(MainWidget);
        QObject::connect(pushButton_Quit, &QPushButton::clicked, MainWidget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "LANChat", nullptr));
        comboBox_FontSize->setItemText(0, QCoreApplication::translate("MainWidget", "9", nullptr));
        comboBox_FontSize->setItemText(1, QCoreApplication::translate("MainWidget", "10", nullptr));
        comboBox_FontSize->setItemText(2, QCoreApplication::translate("MainWidget", "11", nullptr));
        comboBox_FontSize->setItemText(3, QCoreApplication::translate("MainWidget", "12", nullptr));
        comboBox_FontSize->setItemText(4, QCoreApplication::translate("MainWidget", "13", nullptr));
        comboBox_FontSize->setItemText(5, QCoreApplication::translate("MainWidget", "14", nullptr));
        comboBox_FontSize->setItemText(6, QCoreApplication::translate("MainWidget", "15", nullptr));
        comboBox_FontSize->setItemText(7, QCoreApplication::translate("MainWidget", "16", nullptr));
        comboBox_FontSize->setItemText(8, QCoreApplication::translate("MainWidget", "17", nullptr));
        comboBox_FontSize->setItemText(9, QCoreApplication::translate("MainWidget", "18", nullptr));
        comboBox_FontSize->setItemText(10, QCoreApplication::translate("MainWidget", "19", nullptr));
        comboBox_FontSize->setItemText(11, QCoreApplication::translate("MainWidget", "20", nullptr));
        comboBox_FontSize->setItemText(12, QCoreApplication::translate("MainWidget", "21", nullptr));
        comboBox_FontSize->setItemText(13, QCoreApplication::translate("MainWidget", "22", nullptr));

        pushButton_FontBold->setText(QString());
        pushButton_FontItalic->setText(QString());
        pushButton_FontUnderline->setText(QString());
        pushButton_FontColor->setText(QString());
        pushButton_SaveRecord->setText(QString());
        pushButton_SendFlie->setText(QString());
        pushButton_CleanMsg->setText(QString());
        pushButton_Quit->setText(QCoreApplication::translate("MainWidget", "\351\200\200\345\207\272", nullptr));
        pushButton_SendMsg->setText(QCoreApplication::translate("MainWidget", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
