#include <iostream>

using namespace std;
template<class T>
inline T area(T r,T h=1){
  float pi=3.142f;
  return pi*r*r*h;
}
int main() {
  int r,h,cir,cyl;
  cout << "Radius\n";
  cin>>r;
  cout << "Height\n";
  cin>>h;
  cir = area(r);
  cout << "Area of a Circle: "<<cir<<endl;
  cyl = area(r,h);
  cout << "Area of a Cylinder: "<<cyl<<endl;
  
}
