#include <iostream>

using namespace std;

class Point{
  private:
      //data members
    int x1,y1;
  public:
      //default constructor
    Point(){}
    //parameterized constructor
    Point(int x_1=1,int y_1=1){
      set_x1(x_1);
      set_y1(y_1);
    }
    // copy constructor
    Point(const Point &copy):x1(copy.x1),y1(copy.y1){}
    // destructor
    ~Point(){}
    // set functions
    void set_x1(int x1){this->x1 = x1;}
    void set_y1(int y1){this->y1 = y1;}
    //get functions
    int get_x1()const{return x1;}
    int get_y1()const{return y1;}
    ////prints the point object using some format, e.g., [1,2]
    void print(){
      cout<<"["<<x1<<","<<y1<<"]"<<endl;
    }
};


class Line{
    // data composition
    Point p1;
    Point p2;
  public:
    // copy constructor
    Line(const Point& P1, const Point& P2): p1(P1), p2(P2){
   //   set_point1(); // calls the set point function
    //  set_point2();
    }
    // Destructor
    ~Line(){}

    // set functions of data composition, This set function could be called from the copy constructor and set the values passed, but i preferred to pass two point object from the main function.
    void set_point1(){
      p1.set_x1(5);
      p1.set_y1(20);
    }
    void set_point2(){
      p2.set_x1(10);
      p2.set_y1(50);
    }
    // calculates the slope value for each data composite member
    void get_slope(){
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
    void print(){
      //e.g., A line passing through [2,2] and [4,4] with slope = 1.0
      cout<<"A line passing through ";
      p1.print();
      cout << "and ";
      p2.print();
      cout<<"with slope = ";
      get_slope();
          }
};

int main() {
    // Prints out the main point object with 2 and 5 passed as parameters
  cout << "This is the main point object: " << endl;
  cout << "Point 1: ";
  Point mp(2,5);
  mp.print();
  cout << "Point 2: ";
  Point mp2(5,8);
  mp2.print();
  cout << "****************** " <<endl;
  cout<< "This is the Line object of two point objects passed as parameters: " << endl;
  // Line object initialized and i passed the two point object
  //created as parameters to the Line object
  Line lne(mp, mp2);
  lne.print();

}
