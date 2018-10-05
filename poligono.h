#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

/**
 * @brief The Poligono class: Uma classe que serve para representar polígonos convexos
 */
class Poligono{

private:

    Point vertices[100];
    int pontos = 0;

public:
    /**
     * @brief Poligono: Construtor
     */
    Poligono();
    /**
     * @brief ~Poligono: Destrutor
     */
    ~Poligono();
    /**
     * @brief setVertices: Define os vertices do polígono
     * @param mx: Ponto x do vertice
     * @param my: Ponto y do vertice
     */
    void setVertices(float mx, float my);
    /**
     * @brief getVertices: Recupera a quantidade de vertices do polígono
     * @return Retorna a quantidade de vertices
     */
    int getVertices(void);
    /**
     * @brief area: Calcula a área do polígono
     * @return Retorna a área do polígono
     */
    float area(void);
    /**
     * @brief translada: Translada todos os pontos do polígono em (+a,+b) utilizando o método translada da classe Point
     * @param a: Translada o ponto x
     * @param b: Translada o ponto y
     */
    void translada(float a, float b);
    /**
     * @brief rotaciona: Move o polígono para sua posição original e rotaciona o mesmo em theta grus em torno de um ponto definido pelo usuário
     * @param theta: Angulo
     * @param p: Ponto definido pelo usuário
     * @param a: Translada o x de volta pro valor original usando o metodo "sub" da classe Point
     * @param b: Translada o y de volta pro valor original usando o metodo "sub" da classe Point
     */
    void rotaciona(float theta, Point p, float a, float b);
    /**
     * @brief imprime: Imprime todos os pontos do polígono usando o método "imprime" da classe Point, na forma (x0,y0)→(x1,y1)→(x2,y2)→…​
     */
    void imprime(void);

};

#endif // POLIGONO_H
