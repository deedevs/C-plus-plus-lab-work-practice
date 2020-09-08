#include <iostream>
#include "point.h"
using namespace std;

Point::Point()
{
}
Point:: Point(int x_1=1,int y_1=1){
      set_x1(x_1);
      set_y1(y_1);
    }
Point:: Point(const Point &copy):x1(copy.x1),y1(copy.y1){}

Point:: ~Point(){}

void Point:: set_x1(int x1){this->x1 = x1;}
void Point::  set_y1(int y1){this->y1 = y1;}

Point:: get_x1(){return x1;}

Point:: get_y1(){return y1;}
    ////prints the point object using some format, e.g., [1,2]
void Point:: print(){
      cout<<"["<<x1<<","<<y1<<"]"<<endl;
    }
