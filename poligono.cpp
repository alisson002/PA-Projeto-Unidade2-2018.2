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

    if(pontos<100){
        vertices[pontos].setXY(mx,my);
        pontos++;
    }
    else{
        cout<<"Maximo de vertices atingido."<<endl;
    }

}

int Poligono::getVertices(){

    return pontos;

}

float Poligono::area(){//Utilizando o método de Gauss

    float A=0.0,s1=0.0,s2=0.0;//Área, seguimento de reta 1 e 2

    for(int cont=0;cont<pontos;cont++){

        s1=s1+vertices[cont].getX()*vertices[cont+1].getY();

        s2=s2+vertices[cont].getY()*vertices[cont+1].getX();

    }

    A=(s1-s2)/2;

    if(A<0){
        A = A*(-1);
    }

return A;
}

//No for do método translada tive que usar <= para obter o resultado esperado
//diferente do for dos métodos area e imprime que funcionaram normalmente somente com <
//não sei o motivo, **pesquisar dps**
void Poligono::translada(float a, float b){

    for(int cont=0;cont<=pontos;cont++){

        vertices[cont].translada(a,b);//utiliza de um método da classe Point
                                      //para transladar o polígono
    }

}

//No for do método rotaciona tive que usar <= para obter o resultado esperado
//diferente do for dos métodos area e imprime que funcionaram normalmente somente com <
//não sei o motivo, **pesquisar dps**
void Poligono::rotaciona(float theta, Point p, float a, float b){
    //usando theta*PI/180 para converter para radianos
    //para um uso correto das funções cos e sin de acordo
    //com o exemplo do c plus plus

    float pX,pY;

    for(int cont=0;cont<=pontos;cont++){

        vertices[cont].sub(a,b);//para retornar a posição original

        pX = p.getX()+(vertices[cont].getX()*cos((theta*PI)/180.0))-(vertices[cont].getY()*sin((theta*PI)/180.0));

        pY = p.getY()+(vertices[cont].getX()*sin((theta*PI)/180.0))+(vertices[cont].getY()*cos((theta*PI)/180.0));

        vertices[cont].setXY(pX,pY);
    }

}

void Poligono::imprime(){

    for(int cont=0;cont<pontos;cont++){

        vertices[cont].imprime();//utiliza de um método da classe Point
        cout<<" -> ";            //para imprimir os pontos do polígono

    }
    cout<<endl;
}
