#include "retangulo.h"
#include <iostream>
#include "poligono.h"

using namespace std;

Retangulo::Retangulo(float x,float y,float largura,float altura){

    cout<<"Construtor Retangulo\n";

    float dist,dist2;
    dist = x+largura;
    dist2 = y+altura;

    Poligono ret;//retângulo do tipo poligono
    //métodos da classe poligono
    ret.setVertices(x,y);
    ret.setVertices(dist,y);
    ret.setVertices(dist,dist2);
    ret.setVertices(x,dist2);

}

Retangulo::~Retangulo(){

     cout<<"Destrutor Retangulo\n";

}
