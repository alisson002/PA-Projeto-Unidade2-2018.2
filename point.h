#ifndef POINT_H
#define POINT_H


class Point
{
private:
    float x;
    float y;
public:
    Point();                            //construtor
    ~Point();                           //destrutor
    void setX(float mx);                //ponto x, e atualiza o valor
    void setY(float my);                //ponto y, e atualiza o valor
    void setXY(float mx, float my);     //pontos x e y
    float getX(void);                   //resgata o valor do ponto x, da o return
    float getY(void);                   //resgata o valor do ponto y, da o return
    void add(Point pt);                  //soma um novo ponto ao original
    void sub(Point pt);                  //subtrai um novo ponto do original
    float norma(void);                  //norma do ponto, sqrt(x²+y²)
};

#endif // POINT_H
