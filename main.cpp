#include <iostream>
#include "point.h"
#include <math.h>
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{
   /*//se for com ponteiro...por exemplo: *p0
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

    p1.translada(5,3);
    p1.imprime();*/

    Retangulo r(0,0,4,3);

    r.imprima();
    cout<<"Area do ratangulo: "<<r.area()<<endl;
    r.translada(-3,4);
    cout<<"Area do ratangulo transladado: "<<r.area()<<endl;
    r.rotaciona(30);
    cout<<"Area do ratangulo rotacionado: "<<r.area()<<endl;

return 0;
}
