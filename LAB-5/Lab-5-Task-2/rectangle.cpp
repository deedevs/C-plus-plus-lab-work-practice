#include <iostream>
#include <math.h>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle()
{
    setRectangle(0,0);
}
Rectangle::Rectangle(float l, float b)
{
    setRectangle(l, b);
}
Rectangle::~Rectangle(){};



//Setters or Mutators
void Rectangle::setRectangle(float l, float b)
{
    setLength(l);
    setBreadth(b);
}
void  Rectangle::setLength(float l)
{
    length = l;
}
void Rectangle::setBreadth(float b)
{
    breadth = b;
}


//Getters or Accessors
float Rectangle::getLength()
{
    return length;
}
float Rectangle::getBreadth()
{
    return breadth;
}
float Rectangle::getArea()
{
    return Area();
}
float Rectangle::getCircumference()
{
    return Circumference();
}
float Rectangle::getDiagonal()
{
    return Diagonal();
}



//Data Member functions
inline float Rectangle::Area()
{
    return area = length * breadth;
}
inline float Rectangle::Circumference()
{
    return circumference =  2*(length+breadth);
}
inline float Rectangle::Diagonal()
{
    return diagonal = sqrt((pow(length,2) + pow(breadth,2)));
}

