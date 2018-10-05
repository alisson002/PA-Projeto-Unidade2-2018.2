#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
#include "point.h"

/**
 * @brief The Retangulo class: Uma classe herdeira da classe "Poligono" que serve para representar retângulos
 */
class Retangulo: public Poligono{

private:

    float x,y,altura,largura;

public:
    /**
     * @brief Retangulo: Construtor com argumentos
     * @param x: Define a origem do retângulo junto com o ponto y
     * @param y: Define a origem do retângulo junto com o ponto x
     * @param largura: Base do retângulo
     * @param altura: Altura do retângulo
     */
    Retangulo(float x, float y, float largura, float altura);
    /**
     * @brief ~Retangulo: Destrutor
     */
    ~Retangulo();

};

#endif // RETANGULO_H
