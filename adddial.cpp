#include "adddial.h"
#include "ui_adddial.h"

addDial::addDial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addDial)
{
    ui->setupUi(this);
}

addDial::~addDial()
{
    delete ui;
}
