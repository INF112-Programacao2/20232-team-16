#include "janelaconta.h"
#include "ui_janelaconta.h"

JanelaConta::JanelaConta(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::JanelaConta)
{
    ui->setupUi(this);
}

JanelaConta::~JanelaConta()
{
    delete ui;
}
