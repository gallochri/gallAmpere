#ifndef GALLAMPERE_H
#define GALLAMPERE_H

#include <QMainWindow>

namespace Ui {
class GallAmpere;
}

class GallAmpere : public QMainWindow
{
    Q_OBJECT

public:
    explicit GallAmpere(QWidget *parent = 0);
    ~GallAmpere();

private slots:
    void on_pushButtonCalcola_clicked();

private:
    Ui::GallAmpere *ui;
};

#endif // GALLAMPERE_H
