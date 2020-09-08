#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

//Created a class called userString
class userString{
private:
    string str;
public:
    //Function prototypes
    void createString();
    void insertString();
    void eraseString();
    void appendString();
    void reverseString();
    string printString();
};
//create string function to class userString
void userString::createString()
{
    cin.ignore(); //clearing one or more buffer from the input buffer
    cout<< "Enter a String" <<endl; // output
    getline(cin,str);//takes input from user, stores it in str
}
//insert string function to class userString
void userString::insertString()
{
    cin.ignore();//clearing one or more buffer from the input buffer
    string newString;
    int index;
    cout<< "Enter a string to insert" << endl;
    cin >> newString; //receives string from user and stores in newString
    //an index variable initialized to store index from the user
    //where the string should be inserted
    cout<< "Index From: "<<endl;
    cin>> index;
    str.insert(index, newString); //c++ insert function is called on str
    //and inserts the newstring at the specified index
    cout<< "Updated string is " << " "<< str<< endl; // outputs the updated string

}
//erase string function to class userString
void userString::eraseString()
{
    int start, finish;
    cout << "Erase from: " << endl;
    cin>> start;
    cout<< "To: " << endl;
    cin >> finish;
    str.erase(start,finish); // c++ erase function called on str..
    //This will erase strings from the specified start to finish index
    cout << "Erased successfully : " <<str <<endl;
}
//append string function to class userString
void userString::appendString()
{
    string strAppend;
    cout << "Enter the string you wish to append" << endl;
    cin >> strAppend;
    str.append(strAppend); //c++ string append function is called.. This appends
    //the strAppend string from the user at the end of the initial string
    cout << "Appended string is: "<< str <<endl;
}
//reverse string function to class userString
void userString::reverseString()
{
    reverse(str.begin(), str.end()); // this c++ string reverse function
    //reverses the string from end to front
    cout << "Reverse string is: " << str <<endl; //outputs the reversed string
}
string userString::printString()
{
    return str; //simply returns the string
}
//function for the menu
void menu(){
  cout<<"=======MENU======"<<endl;
  cout<<"1: Create"<<endl;
  cout<<"2: Insert"<<endl;
  cout<<"3: Erase"<<endl;
  cout<<"4: Append"<<endl;
  cout<<"5: Reverse"<<endl;
  cout<<"6: Print"<<endl;
  cout<<"7: Exit"<<endl;
  cout<<"================="<<endl;
}


int main()
{
    //created an object of class userString
    userString s;
    int option; //holds the value that will be used for the switch case
    menu();
    while(1){

    cout<< "Choose any option from the Menu above......" << endl;
    cin>> option;
    //switch case function is initialized and the object will be called on the
    //various functions of the class
    switch(option)
    {
        case 1:
        s.createString();
        cout<<"================="<<endl;
        break;

        case 2:
        s.insertString();
        cout<<"================="<<endl;
        break;

        case 3:

          s.eraseString();
          cout<<"================="<<endl;
            break;
        case 4:
            s.appendString();
            cout<<"================="<<endl;
            break;
        case 5:
            s.reverseString();
            cout<<"================="<<endl;
            break;
        case 6:
          cout<<  s.printString() << endl;
          cout<<"================="<<endl;
            break;
        case 7:
            cout << "Program Finished..." <<endl;
            return 0;
            break;
        default:
            cout << "You're out of bound, Please select a valid option above.." << endl;
            break;

                }

    }
    return 0;
}
