#ifndef LINE_H
#define LINE_H

#include "point.h"


class Line{
    // data composition
    Point p1;
    Point p2;
  public:
    // copy constructor
    Line(const Point& P1, const Point& P2);
    // Destructor
    ~Line();

    // set functions of data composition, This set function could be called from
    //the copy constructor and set the values passed, but i preferred to pass two
    //point object from the main function.
    void set_point1();
    void set_point2();


    // calculates the slope value for each data composite member
    void get_slope();
    void print();

};

#endif // LINE_H
