#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <QMainWindow>

namespace Ui {
class calculadora;
}

class calculadora : public QMainWindow
{
    Q_OBJECT

public:
    explicit calculadora(QWidget *parent = nullptr);
    ~calculadora();

private slots:

    void on_punto_clicked();

    void on_n0_clicked();

    void on_igual_clicked();

    void on_CE_clicked();

    void on_mas_clicked();

    void on_n1_clicked();

    void on_n2_clicked();

    void on_n3_clicked();

    void on_menos_clicked();

    void on_n4_clicked();

    void on_n5_clicked();

    void on_n6_clicked();

    void on_por_clicked();

    void on_n7_clicked();

    void on_n8_clicked();

    void on_n9_clicked();

    void on_division_clicked();

private:
    Ui::calculadora *ui;
    double x = 0;
    double y = 0;
    double resultado = 0;
    bool suma=0;
    bool resta=0;
    bool multiplicacion=0;
    bool divicion=0;
    bool punto=0;
    double decimalx=0;
    double decimaly=0;
    double multidiesx=10;
    double multidiesy=10;
};

#endif // CALCULADORA_H
