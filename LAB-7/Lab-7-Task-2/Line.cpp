#include <iostream>
#include "point.h"

#include "Line.h"
using namespace std;

Line:: Line(const Point& P1, const Point& P2): p1(P1), p2(P2){
   //   set_point1(); // calls the set point function
    //  set_point2();
    }
Line::~Line(){}
void Line:: set_point1(){
      p1.set_x1(5);
      p1.set_y1(20);
    }
void Line:: set_point2(){
      p2.set_x1(10);
      p2.set_y1(50);
    }
 void Line:: get_slope(){
      int a,x,m,x1,x2,y1,y2;
      x1 = p1.get_x1();
      x2 = p2.get_x1();
      y1 = p1.get_y1();
      y2 = p2.get_y1();
      m=(y2 - y1);
      x= (x2 - x1);
      a = m/x;
      cout << a << endl;
    }
void Line:: print(){
      //e.g., A line passing through [2,2] and [4,4] with slope = 1.0
      cout<<"A line passing through ";
      p1.print();
      cout << "and ";
      p2.print();
      cout<<"with slope = ";
      get_slope();
          }
