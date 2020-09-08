#include <iostream>
#include <math.h>>
using namespace std;

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


//Constructors & Destructor
Rectangle::Rectangle()
{
    setRectangle(length=0,breadth=0);
}
Rectangle::Rectangle(float l, float b)
{
    setRectangle(l=0, b=0);
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
void menu(){
  cout<<"1: Set Rectangle"<<endl;
  cout<<"2: Calculate Area"<<endl;
  cout<<"3: Calculate Circumference"<<endl;
  cout<<"4: Calculate Diagonal"<<endl;
  cout<<"5: Exit Program"<<endl;
}

int main()
{
     Rectangle r;
  float l,b,ans;
  int option;
  menu();

  while(1){
    cout<<endl<<" [Choose any option from the MENU] "<<endl;
    cin>>option;
    switch(option){
      case 1:
        cout<<"Set a function"<<endl;
        cout<<"Rectangle Length: ";
        cin>>l;
        cout<<"Rectangle Breadth: ";
        cin>>b;
        r.setLength(l);
        r.setBreadth(b);
        break;
      case 2:
        ans = r.getArea();
        cout<<"Area of Rectangle is "<<ans<<" square."<<endl;
        break;
      case 3:
        ans = r.getCircumference();
        cout<<"Circumference of Rectangle is "<<ans<<" units."<<endl;
        break;
      case 4:
        ans = r.getDiagonal();
        cout<<"Diagonal of Rectangle is "<<ans<<" units."<<endl;
        break;
      case 5:
        cout<<"Program Exited"<<endl;
        return 0;
        break;
      default:
        cout<<"Option is not available, Please select from the options above"<<endl;
        break;
    }
  }
    return 0;
}
