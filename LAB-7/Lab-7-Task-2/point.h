#ifndef POINT_H
#define POINT_H


class Point{
  private:
      //data members
    int x1,y1;
  public:
      //default constructor
    Point();
    //parameterized constructor
    Point(int,int);
    // copy constructor
    Point(const Point &copy);
    // destructor
    ~Point();
    // set functions
    void set_x1(int);
    void set_y1(int);
    //get functions
    int get_x1();
    int get_y1();
    ////prints the point object using some format, e.g., [1,2]
    void print();
};

#endif // POINT_H
