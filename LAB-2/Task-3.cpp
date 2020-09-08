// Write a menu-driven C++ program that performs the following according to user’s choice:
// 1. Add
// 2. Subtract
// 3. Multiply
// 4. Quit
#include <iostream>
#include <cstdlib>

using namespace std;

void menu(){
  cout<<"***>>>>MENU<<<<***\n";
  cout<<"1. + -> Add\n";
  cout<<"2. - -> Subtract\n";
  cout<<"3. x -> Multiply\n";
  cout<<"4. . -> Quit the program...\n";
  cout<<"***>>>>>><<<<<<***\n";
  cout<<endl;
}

int main() {
  int a,b,c;
  char oprt;
  menu();
  cout<<"Enter any two intergers to calculate their result"<<endl;
  cout<<"First value: ";
  cin>>a;
  cout<<"Second value: ";
  cin>>b;
  cout<<"Select your choice of operation from the menu..."<<endl;
  cin>>oprt;

  switch(oprt){
    case '+':
      c= a + b;
      break;
    case '-':
      c= a - b;
      break;
    case '*':
      c= a * b;
      break;
    case '.':
      cout<<"You just exited from your program..."<<endl;
      _Exit(1);
      break;
    default:
      cout<<"Oops, you entered a wrong choice... Try again"<<endl;
      break;
  }

  cout<< a << " "<< oprt << " " << b <<" = "<< c <<endl;
}
