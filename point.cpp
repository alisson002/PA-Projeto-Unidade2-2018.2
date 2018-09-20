#include "point.h"
#include <iostream>

using namespace std;

Point::Point(){

    cout << "Construtor defalt\n";

}
Point::~Point(){

    cout << "Destrutor defalt\n";
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
void Point::add(Point p){          //Adiciona as coordenadas (x,y) do ponto com as coordenadas
                                    //de um ponto P1(x1,y1) fornecido, armazenando o resultado
    float somaX;                    //(x+x1,y+y1)  nas coordenadas de um novo ponto, que
    float somaY;                    //deverá ser retornado para o cliente da classe.

    somaX = p.getX()+getX();
    somaY = p.getY()+getY();

    setX(somaX);
    setY(somaY);

}
void Point::sub(Point p){           //Adiciona as coordenadas (x,y) do ponto com as coordenadas
                                    //de um ponto P1(x1,y1) fornecido, armazenando o resultado
    float subX;                    //(x-x1,y-y1)  nas coordenadas de um novo ponto, que
    float subY;                    //deverá ser retornado para o cliente da classe.

    subX = getX()-p.getX();
    subY = getY()-p.getY();

    setX(subX);
    setY(subY);

}
