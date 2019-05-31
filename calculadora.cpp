#include "calculadora.h"
#include "ui_calculadora.h"
#include <QMessageBox>

calculadora::calculadora(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calculadora)
{
    ui->setupUi(this);
}

calculadora::~calculadora()
{
    delete ui;
}

void calculadora::on_punto_clicked()
{
 punto=1;


 }

void calculadora::on_n0_clicked()
{
    if(suma==1 || resta==1 || multiplicacion==1 || divicion==1)
    {
        if(punto==1)
            {

                decimaly=0/(multidiesy);
                multidiesy=multidiesy*10;
                y+=decimaly;
                ui->pantalla->display(y);
            }
        else
               {
                y=(y*10)+0;
                ui->pantalla->display(y);
               }
   }
    else if(punto==1)
       {

        decimalx=0/(multidiesx);
        multidiesx=multidiesx*10;
        x+=decimalx;
        ui->pantalla->display(x);
       }
    else
      {
          x=(x*10)+0;
          ui->pantalla->display(x);
      }


}

void calculadora::on_igual_clicked()
{
 if(suma==1)
 {
    resultado = x+y;
    ui->pantalla->display(resultado);
    x=0;
    y=0;
    decimalx=0;
    decimaly=0;
    multidiesx=10;
    multidiesy=10;
    suma=0;
    QMessageBox msgBox;
    msgBox.setText("La suma es igual a " +QString::number(resultado) );
    msgBox.exec();
 }
 if(resta==1)
 {
    resultado = x-y;
    ui->pantalla->display(resultado);
    x=0;
    y=0;
    decimalx=0;
    decimaly=0;
    multidiesx=10;
    multidiesy=10;
    resta=0;
    QMessageBox msgBox;
    msgBox.setText("La resta es igual a " +QString::number(resultado) );
    msgBox.exec();
 }
 if(multiplicacion==1)
 {
    resultado = x*y;
    ui->pantalla->display(resultado);
    x=0;
    y=0;
    decimalx=0;
    decimaly=0;
    multidiesx=10;
    multidiesy=10;
    multiplicacion=0;
    QMessageBox msgBox;
    msgBox.setText("La multiplicacion es igual a " +QString::number(resultado) );
    msgBox.exec();
 }
 if(divicion==1)
 {
    resultado = x/y;
    ui->pantalla->display(resultado);
    x=0;
    y=0;
    decimalx=0;
    decimaly=0;
    multidiesx=10;
    multidiesy=10;
    divicion=0;
    QMessageBox msgBox;
    msgBox.setText("La divicion es igual a " +QString::number(resultado) );
    msgBox.exec();
 }
}

void calculadora::on_CE_clicked()
{
 x=0;
 y=0;
 punto=0;
 suma=0;
 resta=0;
 multiplicacion=0;
 decimalx=0;
 decimaly=0;
 multidiesx=10;
 multidiesy=10;
 divicion=0;

 ui->pantalla->display(x);

}

void calculadora::on_mas_clicked()
{
  suma=1;
   punto=0;
}

void calculadora::on_n1_clicked()
{
    if(suma==1 || resta==1 || multiplicacion==1 || divicion==1)
    {
        if(punto==1)
            {

                decimaly=1/(multidiesy);
                multidiesy=multidiesy*10;
                y+=decimaly;
                ui->pantalla->display(y);
            }
        else
               {
                y=(y*10)+1;
                ui->pantalla->display(y);
               }
   }
   else if(punto==1)
       {

        decimalx=1/(multidiesx);
        multidiesx=multidiesx*10;
        x+=decimalx;
        ui->pantalla->display(x);
       }
    else
      {
          x=(x*10)+1;
          ui->pantalla->display(x);
      }


}

void calculadora::on_n2_clicked()
{
    if(suma==1 || resta==1 || multiplicacion==1 || divicion==1)
    {
        if(punto==1)
            {

                decimaly=2/(multidiesy);
                multidiesy=multidiesy*10;
                y+=decimaly;
                ui->pantalla->display(y);
            }
        else
               {
                y=(y*10)+2;
                ui->pantalla->display(y);
               }
   }
    else if(punto==1)
       {

        decimalx=2/(multidiesx);
        multidiesx=multidiesx*10;
        x+=decimalx;
        ui->pantalla->display(x);
       }
    else
      {
          x=(x*10)+2;
          ui->pantalla->display(x);
      }

}

void calculadora::on_menos_clicked()
{
 resta=1;
  punto=0;
}

void calculadora::on_n3_clicked()
{
    if(suma==1 || resta==1 || multiplicacion==1 || divicion==1)
    {
        if(punto==1)
            {

                decimaly=3/(multidiesy);
                multidiesy=multidiesy*10;
                y+=decimaly;
                ui->pantalla->display(y);
            }
        else
               {
                y=(y*10)+3;
                ui->pantalla->display(y);
               }
   }
   else if(punto==1)
       {

        decimalx=3/(multidiesx);
        multidiesx=multidiesx*10;
        x+=decimalx;
        ui->pantalla->display(x);
       }
    else
      {
          x=(x*10)+3;
          ui->pantalla->display(x);
      }

}
void calculadora::on_n4_clicked()
{
    if(suma==1 || resta==1 || multiplicacion==1 || divicion==1)
    {
        if(punto==1)
            {

                decimaly=4/(multidiesy);
                multidiesy=multidiesy*10;
                y+=decimaly;
                ui->pantalla->display(y);
            }
        else
               {
                y=(y*10)+4;
                ui->pantalla->display(y);
               }
   }
   else if(punto==1)
       {

        decimalx=4/(multidiesx);
        multidiesx=multidiesx*10;
        x+=decimalx;
        ui->pantalla->display(x);
       }
    else
      {
          x=(x*10)+4;
          ui->pantalla->display(x);
      }

}

void calculadora::on_n5_clicked()
{
    if(suma==1 || resta==1 || multiplicacion==1 || divicion==1)
    {
        if(punto==1)
            {

                decimaly=5/(multidiesy);
                multidiesy=multidiesy*10;
                y+=decimaly;
                ui->pantalla->display(y);
            }
        else
               {
                y=(y*10)+5;
                ui->pantalla->display(y);
               }
   }
   else if(punto==1)
       {

        decimalx=5/(multidiesx);
        multidiesx=multidiesx*10;
        x+=decimalx;
        ui->pantalla->display(x);
       }
    else
      {
          x=(x*10)+5;
          ui->pantalla->display(x);
      }

}

void calculadora::on_n6_clicked()
{
    if(suma==1 || resta==1 || multiplicacion==1 || divicion==1)
    {
        if(punto==1)
            {

                decimaly=6/(multidiesy);
                multidiesy=multidiesy*10;
                y+=decimaly;
                ui->pantalla->display(y);
            }
        else
               {
                y=(y*10)+6;
                ui->pantalla->display(y);
               }
   }
   else if(punto==1)
       {

        decimalx=6/(multidiesx);
        multidiesx=multidiesx*10;
        x+=decimalx;
        ui->pantalla->display(x);
       }
    else
      {
          x=(x*10)+6;
          ui->pantalla->display(x);
      }

}

void calculadora::on_por_clicked()
{
 multiplicacion=1;
  punto=0;
}

void calculadora::on_n7_clicked()
{
    if(suma==1 || resta==1 || multiplicacion==1 || divicion==1)
    {
        if(punto==1)
            {

                decimaly=7/(multidiesy);
                multidiesy=multidiesy*10;
                y+=decimaly;
                ui->pantalla->display(y);
            }
        else
               {
                y=(y*10)+7;
                ui->pantalla->display(y);
               }
   }
   else if(punto==1)
       {

        decimalx=7/(multidiesx);
        multidiesx=multidiesx*10;
        x+=decimalx;
        ui->pantalla->display(x);
       }
    else
      {
          x=(x*10)+7;
          ui->pantalla->display(x);
      }

}

void calculadora::on_n8_clicked()
{
    if(suma==1 || resta==1 || multiplicacion==1 || divicion==1)
    {
        if(punto==1)
            {

                decimaly=8/(multidiesy);
                multidiesy=multidiesy*10;
                y+=decimaly;
                ui->pantalla->display(y);
            }
        else
               {
                y=(y*10)+8;
                ui->pantalla->display(y);
               }
   }
  else if(punto==1)
       {

        decimalx=8/(multidiesx);
        multidiesx=multidiesx*10;
        x+=decimalx;
        ui->pantalla->display(x);
       }
    else
      {
          x=(x*10)+8;
          ui->pantalla->display(x);
      }

}

void calculadora::on_n9_clicked()
{
    if(suma==1 || resta==1 || multiplicacion==1 || divicion==1)
    {
        if(punto==1)
            {

                decimaly=9/(multidiesy);
                multidiesy=multidiesy*10;
                y+=decimaly;
                ui->pantalla->display(y);
            }
        else
               {
                y=(y*10)+9;
                ui->pantalla->display(y);
               }
   }
   else if(punto==1)
       {

        decimalx=9/(multidiesx);
        multidiesx=multidiesx*10;
        x+=decimalx;
        ui->pantalla->display(x);
       }
    else
      {
          x=(x*10)+9;
          ui->pantalla->display(x);
      }

}

void calculadora::on_division_clicked()
{
 divicion=1;
  punto=0;
}
