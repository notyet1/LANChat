#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QtNetwork/QUdpSocket>
#include<QColorDialog>
#include <QFileDialog>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextStream>
#include <QDateTime>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWidget;
}
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();
    void SendMessage();


private slots:
    void ReadMessage();



    void on_pushButton_FontBold_clicked(bool checked);

    void on_pushButton_FontItalic_clicked(bool checked);

    void on_pushButton_FontUnderline_clicked(bool checked);

    void on_pushButton_FontColor_clicked();

    void on_pushButton_SendFlie_clicked();

    void on_pushButton_SaveRecord_clicked();

    void on_pushButton_CleanMsg_clicked();

    void on_pushButton_SendMsg_clicked();

    void on_fontComboBox_Font_currentFontChanged(const QFont &f);

    void on_comboBox_FontSize_activated(int index);

private:
    Ui::MainWidget *ui;
    //text
    QString text1;
    QString text2;
    //socket
    QUdpSocket *sender;
    QUdpSocket *receiver;
    //color
    QColor FontColor;






};
#endif // MAINWIDGET_H
