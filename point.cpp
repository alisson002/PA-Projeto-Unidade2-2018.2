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
void Point::add(Point p){           //Adiciona as coordenadas (x,y) do ponto com as coordenadas
                                    //de um ponto P1(x1,y1) fornecido, armazenando o resultado
    x = x+p.x;                      //(x+x1,y+y1)  nas coordenadas de um novo ponto, que
    y = y+p.y;                      //deverá ser retornado para o cliente da classe.

}
void Point::sub(Point p){
                                    //Adiciona as coordenadas (x,y) do ponto com as coordenadas
    x = x-p.y;                     //de um ponto P1(x1,y1) fornecido, armazenando o resultado
    y = y-p.y;                     //(x-x1,y-y1)  nas coordenadas de um novo ponto, que
                                   //deverá ser retornado para o cliente da classe.
}
float Point::norma(void){         //retorna a distância do ponto para a origen

    return sqrt(x*x+y*y);//**corrigir**

}
void Point::translada(float a, float b){//Translada o ponto (x,y) de (+a,+b), de modo que, após a
                                         //execução do método, as coordenadas do ponto serão (x+a,y+b)
    x = x+a;
    y = y+b;

}
void Point::imprime(void){//Imprime o ponto na forma (xpos, ypos).

    cout<<"Forma (xpos, ypos): ("<<x<<" , "<<y<<")"<<endl;

}



