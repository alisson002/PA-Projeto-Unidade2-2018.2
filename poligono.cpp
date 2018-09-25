#include <iostream>
#include "poligono.h"
#include <math.h>
#include "point.h"

using namespace std;

Poligono::Poligono(){

    vertices[0].setXY(0,0);    //inicializa o primeiro vertice no ponto (0,0)
    cout<<"Construtor Poligono\n";

}

Poligono::~Poligono(){

    cout<<"Destrutor Poligono\n";

}

void Poligono::setVertices(float mx, float my){

    vertices[pontos].setXY(mx,my);
    pontos++;

}

float Poligono::getVertices(){

    return pontos;

}

float Poligono::area(){



}

void Poligono::translada(float a, float b){



}

void Poligono::rotaciona(float k, Point p){



}

void Poligono::imprime(){



}
