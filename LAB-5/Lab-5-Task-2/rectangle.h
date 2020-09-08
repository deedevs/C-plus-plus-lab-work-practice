#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle {
private:
    float length, breadth, area, circumference, diagonal;
    inline float Area();
    inline float Circumference();
    inline float Diagonal();
public:
    Rectangle();
    Rectangle(float,float);
   ~Rectangle();

    void setRectangle(float, float);
    void setLength(float);
    void setBreadth(float);
    float getLength();
    float getBreadth();
    float getArea();
    float getCircumference();
    float getDiagonal();
};


#endif // RECTANGLE_H
