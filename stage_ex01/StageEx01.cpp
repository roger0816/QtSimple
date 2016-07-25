#include "StageEx01.h"
#include "ui_StageEx01.h"

StageEx01::StageEx01(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageEx01)
{
    ui->setupUi(this);

    //singls / slot 連接 ，  連接的主體(發送信號的類別，信號槽，接收信號的類別，接收信號的slot function);
    connect(ui->btnSend,SIGNAL(clicked()),this,SLOT(btnClicked()));

}

StageEx01::~StageEx01()
{
    delete ui;
}

//slot
void StageEx01::btnClicked()
{
    ui->txtShow->append(ui->txtInput->text());
    ui->txtInput->clear();
}
