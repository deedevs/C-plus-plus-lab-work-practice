#include <iostream>
#include <stdio.h>
#include <string.h>
#include "course.h"

using namespace std;


void menu(){
  cout<<"1: Set Course"<<endl;
  cout<<"2: Retrieve Course Details"<<endl;
  cout<<"3: End Program"<<endl;

}

int main() {
  Course crs;
  char title[30],crsCode[10];
  int option,crdtHrs;
  menu();

 while(1){
    cout<<endl<<"[Choose any option from the MENU]"<<endl;
    cin>>option;
    switch(option){
      case 1:
        cin.ignore();
        cout<<"Enter Course info...."<<endl;
        //Using c string function "gets" to get input from the user
        cout<<"Name of the Course: ";
        gets(title);
        cout<<"Course Code: ";
        gets(crsCode);
        cout<<"Credit hours: ";
        cin>>crdtHrs;
        crs.setCourseInfo(crdtHrs, crsCode, title);
        break;
      case 2:
        crs.displayCourse();
        break;
      case 3:
        cout<<"Program Terminated"<<endl;
        return 0;
        break;
      default:
        cout<<"Option not available.. Please choose from the options above.."<<endl;
        break;
    }
 }
  return 0;
}
