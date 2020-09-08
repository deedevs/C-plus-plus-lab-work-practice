// Write a menu-driven C++ program that performs the following according to user’s choice:
// 1. Add
// 2. Subtract
// 3. Multiply
// 4. Quit
#include <iostream>
#include <cstdlib>

using namespace std;

void menu(){
  cout<<">>>>MENU<<<<\n";
  cout<<"1. Add\n";
  cout<<"2. Subtract\n";
  cout<<"3. Multiply\n";
  cout<<"4. Quit\n";
  cout<<">>>>>><<<<<<\n";
  cout<<endl;
}


int main() {
  int firstNum,secondNum,result;
  char option;
  menu();
  cout<<"Select your choice of operation from 1-4 on the menu..."<<endl;
  cin>>option;

    switch(option){
    case '1':
      cout<<"Enter any two intergers to calculate their result"<<endl;
      cout<<"First value: ";
      cin>>firstNum;
      cout<<"Second value: ";
      cin>>secondNum;
      result= firstNum + secondNum;
      cout<< firstNum << " "<< "+" << " " << secondNum<<" = "<< result <<endl;
    break;
    case '2':
      cout<<"Enter any two intergers to calculate their result"<<endl;
      cout<<"First value: ";
      cin>>firstNum;
      cout<<"Second value: ";
      cin>>secondNum;
      result= firstNum - secondNum;
      cout<< firstNum << " "<< "-" << " " << secondNum <<" = "<< result <<endl;
    break;
    case '3':
      cout<<"Enter any two intergers to calculate their result"<<endl;
      cout<<"First value: ";
      cin>>firstNum;
      cout<<"Second value: ";
      cin>>secondNum;
      result= firstNum * secondNum;
      cout<< firstNum << " "<< "*" << " " << secondNum <<" = "<< result <<endl;
    break;
    case '4':
      cout<<"You just exited from your program..."<<endl;
      _Exit(1);
    break;
    default:
      cout<<"I'm Sorry you have entered a wrong Option... Please try again"<<endl;
    break;
  }
}
