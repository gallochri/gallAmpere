#include "gallampere.h"
#include "ui_gallampere.h"

GallAmpere::GallAmpere(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GallAmpere)
{
    ui->setupUi(this);
}

GallAmpere::~GallAmpere()
{
    delete ui;
}

void GallAmpere::on_pushButtonCalcola_clicked()
{
    int tensioneSelected = ui->comboTensione->currentIndex();
    double tensione;
    switch( tensioneSelected )
    {
    case 0:
        tensione = 12;
        break ;
    case 1:
        tensione = 50;
        break ;
    case 2 :
        tensione = 110;
        break ;
    case 3:
        tensione = 220;
        break ;
    case 4:
        tensione = 230;
        break ;
    case 5:
        tensione = 380;
        break ;
    case 6:
        tensione = 400;
        break ;
    }
    double assorbimento = ui->spinBoxAssorbimento->value();
    double corrente = assorbimento/tensione;
    QString correnteString = QString("%1").arg(corrente);
    ui->valueCorrente->setText(correnteString);

}
