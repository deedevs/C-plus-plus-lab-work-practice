#ifndef COURSE_H
#define COURSE_H


using namespace std;

class Course{
  private:
    int creditHours;
    string courseTitle,courseCode;
  public:
    //Constructor
    Course();
    //Destructor
    ~Course();
    //Setter Function
    void setCourseInfo(int,string,string);
    //Getter Function
    void displayCourse();
};

#endif // COURSE_H
