#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"


class Poligono
{
private:
    Point vertices[100];

public:
    Poligono();//construtor
    ~Poligono();//destrutor
    void setVertices(float mx, float my);
    float getVertices(void);
    float area(void);
    void translada(float a, float b);
    void rotaciona(float k, Point p);
    void imprime(void);
};

#endif // POLIGONO_H
