#include <iostream>
#include "poligono.h"
#include <math.h>
#include "point.h"
#define PI 3.141592

using namespace std;

Poligono::Poligono(){


}

Poligono::~Poligono(){



}

void Poligono::setVertices(float mx, float my){

    vertices[pontos].setXY(mx,my);
    pontos++;

}

float Poligono::getVertices(){

    return pontos;

}

float Poligono::area(){//Utilizando o método de Gauss

    float A=0.0,s1=0.0,s2=0.0;//Área, seguimento de reta 1 e 2

    for(int cont=1;cont<=pontos;cont++){
        s1=s1+vertices[cont].getX()*vertices[cont+1].getY();
        s2=s2+vertices[cont].getY()*vertices[cont+1].getX();
    }

    A=(s1-s2)/2;

    if(A<0){
        A = A*(-1);
    }

return A;
}

void Poligono::translada(float a, float b){

    for(int cont=1;cont<=pontos;cont++){
        vertices[cont].translada(a,b);//utiliza de um método da classe Point
    }                                 //para transladar o polígono

}

void Poligono::rotaciona(float theta){
    //usando theta*PI/180 para converter para radianos
    //para um uso correto das funções cos e sin de acordo
    //com o exemplo do c plus plus
    for(int cont=1;cont<=pontos;cont++){
            vertices[cont].setX((vertices[cont].getX()*cos((theta*PI)/180.0))-(vertices[cont].getY()*sin((theta*PI)/180.0)));
            vertices[cont].setY((vertices[cont].getX()*sin((theta*PI)/180.0))+(vertices[cont].getY()*cos((theta*PI)/180.0)));
        }

}

void Poligono::imprima(){

    cout<<"Pontos do poligono:\n";
    for(int cont=1;cont<=pontos;cont++){

        vertices[cont].imprime();//utiliza de um método da classe Point
        cout<<" -> ";            //para imprimir os pontos do polígono

    }
}
