#include <iostream>
#include "point.h"
#include <math.h>
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main(){

    Point p;

    double x,y;

    //pontos definidos pelo usuario
    x = 0;
    y = 0;
    Retangulo r(x,y,4,3);//x,y,largura,altura

    //com os pontos originais
    cout<<"Pontos originais: "<<endl;
    r.imprime();
    cout<<"Area do ratangulo: "<<r.area()<<"\n"<<endl;

    //com os pontos transladados
    double a,b;
    a = -3;
    b = 4;
    r.translada(a,b);
    cout<<"Pontos transladados: "<<endl;
    r.imprime();
    cout<<"Area do ratangulo transladado: "<<r.area()<<"\n"<<endl;

    //com os pontos rotacionados
    p.setXY(x,y);//ponto definido pelo usuário para a rotação
    r.rotaciona(30,p,a,b);//recebe também os pontos usados para transladar para que retorne ao
                          //ponto original e seja rotacionado a partir do ponto p fornecido
    cout<<"Pontos rotacionados: "<<endl;
    r.imprime();
    cout<<"Area do ratangulo rotacionado: "<<r.area()<<"\n"<<endl;

return 0;
}
