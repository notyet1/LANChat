#include "mainwidget.h"
#include "ui_mainwidget.h"
#include<QByteArray>

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    sender=new QUdpSocket(this);

    receiver=new QUdpSocket(this);
    receiver->bind(45455,QUdpSocket::ShareAddress| QUdpSocket::ReuseAddressHint);
    connect(receiver,SIGNAL(readyRead()),this,SLOT(ReadMessage()));

    ui->pushButton_FontBold->setCheckable(true);
    ui->pushButton_FontItalic->setCheckable(true);
    ui->pushButton_FontUnderline->setCheckable(true);

    setFixedSize(this->width(),this->height());
}

MainWidget::~MainWidget()
{
    delete ui;
}
//send message
void MainWidget::SendMessage()
{
    text1=ui->textEdit_InputMsg->toHtml();
    QByteArray datagram=text1.toUtf8();
    //LAN Broadcast 255.255.255.255
    sender->writeDatagram(datagram.data(),datagram.size(),
                          QHostAddress::Broadcast,45455);
}

void MainWidget::ReadMessage()
{
    while(receiver->hasPendingDatagrams()){
        QByteArray datagram;
        datagram.resize(receiver->pendingDatagramSize());
        receiver->readDatagram(datagram.data(),datagram.size());

        text2=QString::fromUtf8(datagram);

        ui->textBrowser_PrintMsg->append(text2);
    }
}


void MainWidget::on_pushButton_FontBold_clicked(bool checked)
{
    QTextCharFormat fmt;
    fmt.setFontWeight(checked ? QFont::Bold : QFont::Normal);
    ui->textEdit_InputMsg->mergeCurrentCharFormat(fmt);
    ui->textEdit_InputMsg->setFocus();
}

void MainWidget::on_pushButton_FontItalic_clicked(bool checked)
{
    QTextCharFormat fmt;
    fmt.setFontItalic(checked);
    ui->textEdit_InputMsg->mergeCurrentCharFormat(fmt);
}


void MainWidget::on_pushButton_FontUnderline_clicked(bool checked)
{
    QTextCharFormat fmt;
    fmt.setFontUnderline(checked);
    ui->textEdit_InputMsg->mergeCurrentCharFormat(fmt);
}


void MainWidget::on_pushButton_FontColor_clicked()
{
    FontColor =QColorDialog::getColor(FontColor,this);
    if(FontColor.isValid()){
        ui->textEdit_InputMsg->setTextColor(FontColor);
        ui->textEdit_InputMsg->setFocus();
    }
}


void MainWidget::on_pushButton_SendFlie_clicked()
{

}


void MainWidget::on_pushButton_SaveRecord_clicked()
{
    QString filename = QFileDialog::getSaveFileName(this, "保存聊天记录", "", "Text Files (*.txt)");
    if (!filename.isEmpty()) {
        QFile file(filename);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream stream(&file);
            stream << ui->textBrowser_PrintMsg->toPlainText();
            file.close();
        }
    }
}


void MainWidget::on_pushButton_CleanMsg_clicked()
{
    ui->textEdit_InputMsg->clear();
}


void MainWidget::on_pushButton_SendMsg_clicked()
{
    SendMessage();
}


void MainWidget::on_fontComboBox_Font_currentFontChanged(const QFont &f)
{
    QTextCharFormat fmt;
    fmt.setFont(f);
    ui->textEdit_InputMsg->mergeCurrentCharFormat(fmt);
    ui->textEdit_InputMsg->setFocus();
}


void MainWidget::on_comboBox_FontSize_activated(int index)
{
    QString sizeStr = ui->comboBox_FontSize->itemText(index);
    int size = sizeStr.toInt();
    QTextCharFormat fmt;
    fmt.setFontPointSize(size);
    ui->textEdit_InputMsg->mergeCurrentCharFormat(fmt);
    ui->textEdit_InputMsg->setFocus();
}

