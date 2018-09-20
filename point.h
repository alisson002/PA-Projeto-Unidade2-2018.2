#ifndef POINT_H
#define POINT_H


class Point
{
private:
    float x;
    float y;
public:
    Point();
    ~Point();
    void setX(float mx);
    void setY(float my);
    void setXY(float mx, float my);
    float getX(void);
    float getY(void);
    void add(Point p);
    void sub(Point p);
};

#endif // POINT_H
