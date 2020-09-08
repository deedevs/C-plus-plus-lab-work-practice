// a. Asks user to specify five floating-point values, adds them, and then displays the result to the screen,
// b. Asks user to specify five integers, finds the smallest one, and then displays the result to the screen,
// c. Calculates the power of n raised by m, where n and m are user-specified values.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int random[5],min,x;

  cout<< "Enter 5 random values to calcute the Minimum value armong them" <<endl;
  cin>>min;
  random[0] = min;

  for(int i = 1; i < 5; i++){
    cin>>random[i];
    x = random[i];
    if(min > x)
      min = x;
  }

  for(int i = 0; i <5;i++)
    cout<< setw(3)<<a[i];
  cout<<endl<< "The minimum value is "<< min<<endl;
}
