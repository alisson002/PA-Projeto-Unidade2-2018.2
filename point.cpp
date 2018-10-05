#include "point.h"
#include <iostream>
#include <math.h>

using namespace std;

Point::Point(){
}
Point::~Point(){
}
void Point::setX(float mx){           //Define o valor da coordenada x do ponto.

    x = mx;

}
void Point::setY(float my){          //Define o valor da coordenada y do ponto.

    y = my;

}
void Point::setXY(float mx,float my){//Define, em uma mesma função, os valores da coordenadas x e y do ponto.

    x = mx;
    y = my;

}
float Point::getX(void){             //Recupera o valor da coordenada x do ponto.

    return x;

}
float Point::getY(void){            //Recupera o valor da coordenada y do ponto.

    return y;

}
//para o método add e sub também é possível usar o setXY
void Point::add(Point p){

    x = x+p.x;
    y = y+p.y;

}
void Point::sub(Point p){

    x = x-p.y;
    y = y-p.y;

}

void Point::sub(float a, float b)
{
    x = x-a;
    y = y-b;
}
float Point::norma(void){         //retorna a distância do ponto para a origen

    return sqrt(x*x+y*y);

}
void Point::translada(float a, float b){

    x = x+a;
    y = y+b;

}
void Point::imprime(void){

    cout<<"("<<x<<" , "<<y<<")";

}



