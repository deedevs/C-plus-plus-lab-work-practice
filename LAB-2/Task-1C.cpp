// a. Asks user to specify five floating-point values, adds them, and then displays the result to the screen,
// b. Asks user to specify five integers, finds the smallest one, and then displays the result to the screen,
// c. Calculates the power of n raised by m, where n and m are user-specified values.
#include <iostream>

using namespace std;

int main() {
  int a,b,x;
  cout << "Enter your number or base.\n";
  cin>>a;
  cout << "Enter your exponent or power.\n";
  cin>>b;

  x = a;

  if(b==0){
    a=1;
    cout<<a;
  }
  else if(b==1){
    cout<<a;
  }
  else{
    for(int i = 1; i < b;i++)
      a = a * x;
    cout<< "Result = "<<a;
  }
}
