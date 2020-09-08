#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//Created a class called Calculate
class Calculate{
private:
    vector<int>myVec;
    int counter;
    int average;
    int sum;

public:
    //Function prototypes
    void Insert();
    void Delete();
    int Mean();
    void Minmum();
    void Maximum();
    void standardDeviation();
    void Median();
    void PrintValues();
};
//create an insert function to class Calculate
void Calculate:: Insert()
{
    cout << "Enter Input: "; //outputs Enter input to the user
    int input;
    cin >> input; //takes the user input and saves it in input variable
    myVec.push_back(input); //push_back vector function called on myVec
    //to enable elements to be inserted in the vector
}
//create a mean function to class Calculate
//calculates the mean of the elements in the vector
int Calculate::Mean()
{
    sum = counter= average = 0;
    //for loop to iterate through all the elements and sum them up,
    //at the same time keeping count with the counter variable
    for (size_t i=0; i < myVec.size(); i++)
    {
        sum+=myVec[i];
        counter++;
    }
    average = sum/counter;  //the sum is divided by the
    //number of counts and assigned to average
     return average;
}
//create a minimum function to class Calculate
//checks for the minimum value in the vector
void Calculate::Minmum()
{
    int min;
    min = myVec[0];
    for (size_t i=0; i < myVec.size(); i++)
    {
        if (min > myVec[i]) //compares first element withe second and so  on...
        min = myVec[i];
    }
    cout << "Minimum: " << min <<endl;
}
//create a Maximum function to class Calculate
//checks for the maximum value in the vector
void Calculate::Maximum()
{
    int max;
    max = myVec[0];
    for (size_t i=0; i < myVec.size(); i++)//compares first element withe second and so  on...
        {
        if (max < myVec[i])
            max = myVec[i];
    }

    cout << "Maximum is: " << max << endl;
}
//create a standard deviation function to class Calculate
//standard deviation is a quantity expressing by how much the
//members of a group differ from the mean value for the group.
void Calculate::standardDeviation()
{
   int avrg = Mean(),n,c=0,ans;
      for(unsigned int i = 0;i < myVec.size();i++){
        n += pow((myVec[i] - avrg),2); // calculates the each element in the
        //vector minus the average to the power of 2 and adds it to a variable n
        c++; // keeps count
      }
      ans = sqrt(n/c); //finally finds to square root of n/c and assigns to a variable ans
        cout << "Standard Deviation is: " << ans << endl;
}
//create a median function to class Calculate
void Calculate::Median()
{
    //insertion sort to sort the integers in the vector
    int i, key, j,n=0;
    for (i = 1; i < myVec.size(); i++) {
      key = myVec[i];
      j = i - 1;
      while (j >= 0 && myVec[j] > key) {
        myVec[j + 1] = myVec[j];
        j = j - 1;
      }
      myVec[j + 1] = key;
    }
    //prints out the sorted elements in the vector
    cout << "Sorted elements on Vector: " << endl;
    for(i = 0; i < myVec.size(); i++){
      cout<<myVec[i]<<" " <<endl;
      n++;
    }
    //calculating the median - median is the middle number in a set of given numbers
    //if the set of numbers is odd - the median is the middle one
    //if its even - then the median is the sum of the two numbers in the middle
    int middle;
    double median;

    middle = myVec.size()/2;
    //checks if the vector is odd or even
    if (myVec.size()%2==1)
    {
        median = myVec[middle]; //if odd, then the median is the middle element

        cout << "The Median is: " << median << endl;
    }
    else
    {
        //if even, then both numbers in the middle divided by 2
        median = (myVec[middle]+ myVec[middle - 1])/2.0;
        cout << "The Median is: " << median << endl;

    }

  }
  //create a print function to class Calculate
  //this function simply prints out the elements in the vector
void Calculate::PrintValues()
{
    cout << "Values are: " << endl;
    for (size_t i=0; i < myVec.size(); i++)
        cout <<  myVec[i] << " " << endl;
}

//Menu function
void menu(){
  cout<<"========MENU========="<<endl;
  cout<<"1. Input"<<endl;
  cout<<"2. Print Values"<<endl;
  cout<<"3. Minimum"<<endl;
  cout<<"4. Maximum"<<endl;
  cout<<"5. Mean"<<endl;
  cout<<"6. Median"<<endl;
  cout<<"7. Standard Deviation"<<endl;
  cout<<"8. Terminate the program"<<endl;
  cout<<"====================="<<endl;
}

int main()
{
    Calculate x; //created an object x of class calculate
    int option;//holds the value that will be used for the switch case
    menu(); // menu function is called

    while(1){
        cout << "Choose form the Menu above...: ";
        cin >> option;
        //switch case function is initialized and the object will be called on the
        //various functions of the class
        switch(option)
                    {
        case 1:
        x.Insert();
        cout<<"================="<<endl;
        break;

        case 2:
        x.PrintValues();
        cout<<"================="<<endl;
        break;

        case 3:

          x.Minmum();
          cout<<"================="<<endl;
            break;
        case 4:
            x.Maximum();
            cout<<"================="<<endl;
            break;
        case 5:
         cout << x.Mean() << endl;
            cout<<"================="<<endl;
            break;
        case 6:
          x.Median();
          cout<<"================="<<endl;
            break;
        case 7:
            x.standardDeviation();
            cout<<"================="<<endl;
            break;
        case 8:

            cout<<"Program Terminated.....";
            return 0;
            break;
        default:
            cout << "Invalid Option!! Please Select from the option above" << endl;
            break;

                }

    }



    return 0;
}

