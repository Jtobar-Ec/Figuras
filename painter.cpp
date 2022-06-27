#include "painter.h"
#include "ui_painter.h"

Painter::Painter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Painter)
{
    ui->setupUi(this);
}

Painter::~Painter()
{
    delete ui;
}

void Painter::paintEvent(QPaintEvent *event)
{
    // Crear el objeto painter. Estrablecer el formulario como su lienzo
    QPainter pintor(this);

    // Establecer un color al pincel
    pintor.setPen(Qt::blue);

    // Dibujar una linea
    pintor.drawLine(100, 100, 200, 200);

    // Cambiar el color del pincel
    pintor.setPen(Qt::red);

    // Establecer un tipo y tamanno de letra
    pintor.setFont(QFont("Time New Roman",30));

    //Dibujar un texto
    pintor.drawText(250,150,"Hola Mundo");

    //Crear un nuevo Pincel
    QPen pincel;
    pincel.setColor(Qt::blue);
    pincel.setWidth(10);
    pincel.setCapStyle(Qt::RoundCap);

    // Utilizar el nuevo pincel
    pintor.setPen(pincel);

    // Establecer una brocha
    pintor.setBrush(Qt::white);

    // Dibujar un rectangulo
    pintor.drawRect(400, 100, 100, 100);



    // Nuevos Figuras
    //Cuerpo
    pintor.drawRect(100, 50, 100, 100);

    // Cabeza
    pintor.drawEllipse(100, 10, 100, 100);

    // Brazo der
    pintor.drawRect(50, 100, 50, 100);

    // Brazo izq
    pintor.drawRect(200, 100, 50, 100);

    // Ojo
    pintor.drawEllipse(140, 30, 20, 50);


    // Crear un nuevo color
    QColor miColor(255, 221, 129);

    // Crear un nuevo pincel
    QPen pincel2;
    pincel2.setColor(Qt::yellow);
    pincel2.setWidth(5);
    pincel2.setStyle(Qt::DotLine);

    // Utilizar el nuevo pincel
    pintor.setPen(pincel2);

    // Cambiar la brocha
    pintor.setBrush(miColor);

    // Dibujar un circulo
    pintor.drawEllipse(400, 100, 100, 100);



}
