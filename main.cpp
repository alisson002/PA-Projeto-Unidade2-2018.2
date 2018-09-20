#include <iostream>
#include "point.h"
#include <math.h>

using namespace std;

int main()
{
    //se for com ponteiro...por exemplo: *p0
    //tem que usar Point *p0 = new Point;
    //e dai pra chamar o método usa -> ao invez de .
    //mas vai ser alterado altomaticamente
    //ex:p0.setX() vai para p0->setX()
    Point p0,p;
    p0.setX(10);
    p0.setY(5);
    p=p0;//Valores do ponto original sem alteração estão guardados em p
    cout<<"Ponto original p0: ("<<p0.getX()<<" , "<<p0.getY()<<")"<<endl;

    Point p1;
    p1.setX(1);
    p1.setY(1);
    cout<<"Ponto p1: ("<<p1.getX()<<" , "<<p1.getY()<<")"<<endl;

    //p0 chamou add e passou o objeto p1 como paramatro
    //p1 funciona como se eu passasse um vetor p1[qualquer]
    //na forma p1, assim passando tudo que há nele
    p0.add(p1);
    cout<<"Novo ponto, soma de p0+p1: ("<<p0.getX()<<" , "<<p0.getY()<<")"<<endl;

    p.sub(p1);
    cout<<"Novo ponto, subtracao de p0-p1: ("<<p.getX()<<" , "<<p.getY()<<")"<<endl;

    cout<<"Norma do ponto p1: "<<p1.norma()<<endl;

    p1.trasnlada(5,3);
    p1.imprime();

return 0;
}
