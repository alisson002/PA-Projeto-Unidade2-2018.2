#include "point.h"
#include <iostream>
#include <math.h>

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
//para o método add e sub também é possível usar o setXY
void Point::add(Point pt){           //Adiciona as coordenadas (x,y) do ponto com as coordenadas
                                    //de um ponto P1(x1,y1) fornecido, armazenando o resultado
  /*float somaX;                    //(x+x1,y+y1)  nas coordenadas de um novo ponto, que
    float somaY;                    //deverá ser retornado para o cliente da classe.

    somaX = pt.getX()+getX();
    somaY = pt.getY()+getY();

    setX(somaX);
    setY(somaY);*/

    setX(pt.getX()+getX());
    setY(pt.getY()+getY());

}
void Point::sub(Point pt){           //Adiciona as coordenadas (x,y) do ponto com as coordenadas
                                    //de um ponto P1(x1,y1) fornecido, armazenando o resultado
  /*float subX;                     //(x-x1,y-y1)  nas coordenadas de um novo ponto, que
    float subY;                    //deverá ser retornado para o cliente da classe.

    subX = -pt.getX()+getX();
    subY = -pt.getY()+getY();

    setX(subX);
    setY(subY);*/

    setX(-pt.getX()+getX());
    setY(-pt.getY()+getY());
}
float Point::norma(void){         //retorna a distância do ponto para a origen

   return sqrt(x*x+y*y);

}



