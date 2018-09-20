#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    //se for com ponteiro...por exemplo: *p0
    //tem que usar Point *p0 = new Point;
    //e dai pra chamar o método usa -> ao invez de .
    //mas vai ser alterado altomaticamente
    //ex:p0.setX() vai para p0->setX()

    Point p0;
    p0.setX(10);
    p0.setY(5);
    cout<<"valor de p0: "<<p0.getX()<<";"<<p0.getY()<<endl;

    Point p1;
    p1.setX(1);
    p1.setY(1);
    cout<<"valor de p1: "<<p1.getX()<<";"<<p1.getY()<<endl;

    //p0 chamou add passou o objeto p1 como paramatro
    //p1 funciona como se eu passace um vetor p1[qualquer]
    //na forma p1, assim passando tudo que há nele
    p0.add(p1);
    cout<<"Novo valor de p0: "<<p0.getX()<<";"<<p0.getY()<<endl;
}
