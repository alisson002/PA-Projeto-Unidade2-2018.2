#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
#include "point.h"


class Retangulo: public Poligono{

private:

    float x,y,altura,largura;

public:

    Retangulo(float x, float y, float largura, float altura);//construtor
    ~Retangulo();//destrutor

};

#endif // RETANGULO_H
