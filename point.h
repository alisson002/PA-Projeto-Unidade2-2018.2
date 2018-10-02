#ifndef POINT_H
#define POINT_H


class Point{

private:

    float x;
    float y;

public:

    Point();                            //construtor
    ~Point();                           //destrutor
    void setX(float mx);                //atualiza o valor do ponto
    void setY(float my);                //atualiza o valor do ponto
    void setXY(float mx, float my);     //pontos x e y
    float getX(void);                   //resgata o valor do ponto x, da o return
    float getY(void);                   //resgata o valor do ponto y, da o return
    void add(Point p);                  //soma um novo ponto ao original
    void sub(Point p);                  //subtrai um novo ponto do original
    float norma(void);                  //norma do ponto, sqrt(x²+y²)
    void translada(float a, float b);   //trasnlada o ponto cliente em (x+a,y+b)
    void imprime(void);                 //printa o ponto cliente

};

#endif // POINT_H
