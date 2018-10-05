#include "retangulo.h"
#include <iostream>


using namespace std;

Retangulo::Retangulo(float x,float y,float largura,float altura){

    float distX,distY;
    distX = x+largura;
    distY = y+altura;
    //métodos da classe poligono
    setVertices(x,y);
    setVertices(distX,y);
    setVertices(distX,distY);
    setVertices(x,distY);

}

Retangulo::~Retangulo(){
}
