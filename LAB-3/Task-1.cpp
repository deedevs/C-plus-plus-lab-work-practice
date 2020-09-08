#include <iostream>
#include <cmath>

using namespace std;

inline int distance(int y1,int y2,int x1,int x2){
  return sqrt(  pow(y2 + y1,2) + pow(x2 + x1,2)  );
}

inline float distance(float y1,float y2,float x1,float x2){
  return sqrt(  pow(y2 + y1,2) + pow(x2 + x1,2)  );
}

int main() {
  int x1=2,x2=5,y1=4,y2=6,result;
  float x_1=1.0f,x_2=2.0f,y_1=5.0f,y_2=4.0f,rslt;

  result = distance(y1,y2,x1,x2);
  rslt = distance(y_1,y_2,x_1,x_2);
  cout<<"Result for the Interger value number: "<<result<<endl;
  cout<<"Result for the floating value number: "<<rslt<<endl;
}
