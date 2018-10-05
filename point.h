#ifndef POINT_H
#define POINT_H

/**
 * @brief The Point class: Uma classe que serve para representar pontos
 */
class Point{

private:

    float x;
    float y;

public:
    /**
     * @brief Point: Construtor
     */
    Point();
    /**
     * @brief ~Point: Destrutor
     */
    ~Point();
    /**
     * @brief setX: Define o valor da coordenada x do ponto.
     * @param mx: Ponto x
     */
    void setX(float mx);
    /**
     * @brief setY: Define o valor da coordenada y do ponto.
     * @param my: Ponto y
     */
    void setY(float my);
    /**
     * @brief setXY: Define, em uma mesma função, os valores da coordenadas x e y do ponto.
     * @param mx: Ponto x
     * @param my: Ponto y
     */
    void setXY(float mx, float my);
    /**
     * @brief getX: Recupera o valor da coordenada x do ponto.
     * @return: Retorna o valor ponto x
     */
    float getX(void);
    /**
     * @brief getY: Recupera o valor da coordenada y do ponto.
     * @return: Retorna o valor ponto y
     */
    float getY(void);
    /**
     * @brief add: Adiciona as coordenadas (x,y) do ponto com as coordenadas de um ponto P1(x1,y1) fornecido, armazenando o resultado (x+x1,y+y1) nas coordenadas de um novo ponto, que deverá ser retornado para o cliente da classe.
     * @param p: Ponto que ira ser somado ao cliente da classe
     */
    void add(Point p);
    /**
     * @brief sub: Subtrai as coordenadas (x,y) do ponto com as coordenadas de um ponto P1(x1,y1) fornecido, armazenando o resultado (x−x1,y−y1) nas coordenadas de um novo ponto, que deverá ser retornado para o cliente da classe.
     * @param p: Ponto que ira ser subtraido do cliente da classe
     */
    void sub(Point p);
    /**
     * @brief sub: Subtrai as coordenadas (x,y) do ponto com as coordenadas de um ponto (x1,y1) fornecido, armazenando o resultado (x−x1,y−y1) nas coordenadas de um novo ponto, que deverá ser retornado para o cliente da classe.
     * @param a: Ponto que será subtraido do ponto x do cliente da classe
     * @param b: Ponto que será subtraido do ponto y do cliente da classe
     */
    void sub(float a, float b);
    /**
     * @brief norma: Calcula a distância do ponto para a origem do sistema de coordenadas.
     * @return Retorna a distância do ponto para a origem do sistema de coordenadas
     */
    float norma(void);
    /**
     * @brief translada: Translada o ponto (x,y) de (+a,+b), de modo que, após a execução do método, as coordenadas do ponto serão (x+a,y+b).
     * @param a: Translada o ponto x
     * @param b: Translada o ponto y
     */
    void translada(float a, float b);
    /**
     * @brief imprime: Imprime o ponto na forma (xpos, ypos).
     */
    void imprime(void);

};

#endif // POINT_H
