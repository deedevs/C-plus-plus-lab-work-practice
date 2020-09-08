#include <iostream>
#include "Line.h"
#include "point.h"
using namespace std;

int main()
{
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
    return 0;
}
