#include <iostream>
#include <string>
#include "course.h"

using namespace std;

    //Constructor
    Course::Course(){
      creditHours = 0;
    }
    //Destructor
    Course::~Course(){};
    //Set Function
    void Course::setCourseInfo(int creditH,string courseC,string courseT){
      creditHours = creditH;
      courseCode = courseC;
      courseTitle = courseT;
    }
    //Get Function
    void Course::displayCourse(){
      cout<<courseCode<<"-"<<courseTitle<<endl;
    }
