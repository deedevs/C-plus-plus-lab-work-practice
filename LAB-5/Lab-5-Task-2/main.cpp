#include <iostream>
#include "rectangle.h"

using namespace std;
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
    cout<<endl<<"****** |Choose any option from the MENU| ******"<<endl;
    cin>>option;
    switch(option){
      case 1:
        cout<<"Set a function"<<endl;
        cout<<"Length: ";
        cin>>l;
        cout<<"Breadth: ";
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
        cout<<"Program Terminated"<<endl;
        return 0;
        break;
      default:
        cout<<"Option is not available, Please select from the options above"<<endl;
        break;
    }
  }

    return 0;
}
