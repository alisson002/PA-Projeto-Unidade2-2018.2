#include <iostream>
#include "point.h"
#include <math.h>
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{

    Retangulo r(0,0,3,4);

    //com os pontos originais
    cout<<"Pontos originais: "<<endl;
    r.imprime();
    cout<<"Area do ratangulo: "<<r.area()<<"\n"<<endl;

    //com os pontos transladados
    r.translada(-3,4);
    cout<<"Pontos transladados: "<<endl;
    r.imprime();
    cout<<"Area do ratangulo transladado: "<<r.area()<<"\n"<<endl;

    //com os pontos rotacionados
    r.rotaciona(30);
    cout<<"Pontos rotacionados: "<<endl;
    r.imprime();
    cout<<"Area do ratangulo rotacionado: "<<r.area()<<"\n"<<endl;

return 0;
}
