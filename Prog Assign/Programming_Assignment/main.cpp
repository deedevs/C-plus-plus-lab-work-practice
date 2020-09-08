#include <iostream>
#include "DString.h"
using namespace std;

int main()
{
    DString str1;
    DString str2("Wifey");

    cout << "****** OPERATORS TEST ******" <<endl <<endl;

    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING ASSIGNMENT = OPERATOR........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    str1 = str2;
    cout << "Assignment Operation Successful.. str1 gets string stored in str2.. " << endl;
    cout << "Str1: " <<str1<<endl;
    cout << "Str2: " <<str2 <<endl<<endl;


    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING ADDITION + OPERATOR........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString str3 = "Good";
    DString str4("Morning");
    DString str5;
    str5 = str3 + str4;
    cout << "Addition Operation Successful.. str3 + str4 is assigned to str5.." <<endl;
    cout << "str3: " <<str3 <<endl;
    cout<<"str4: "<<str4 <<endl;
    cout <<"str5: "<<str5 <<endl<<endl;


    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING SHORT HAND ASSIGNMENT += OPERATOR........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    cout << "str4: "<<str4 <<endl;
    cout << "str3: " <<str3<<endl;
    cout << "After Short hand Assignment Operation...(str4+=str3)" <<endl;
    str4+=str3;
    cout << "str4: "<<str4 <<endl<<endl;


    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING IS EQUAL TO == OPERATOR........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString str6= "Good Evening";
    DString str7("Good Evening");
    cout <<"str6: "<< str6 <<endl;
    cout <<"str7: " <<str7<<endl;
    if (str6 == str7)
        cout << "Both Strings are Equal" <<endl<<endl;
    else
        cout << "They are not Equal" <<endl <<endl;

    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING IS NOT EQUAL TO != OPERATOR........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString str8 = "Whatsup";
    DString str9("Whatsup");
    cout << "str8: " <<str8<<endl;
    cout << "str9: " << str9<<endl;
    if (str8 != str9)
        cout << "Not Equal" <<endl<<endl;
    else
        cout << "They are Equal" <<endl <<endl;


    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING IS GREATER THAN > OPERATOR........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString str10("Everything");
    DString str11("Everyzzzzzzzz");
    cout <<"str10: " <<str10<<endl;
    cout <<"str11: "<<str11<<endl;
    if (str10 > str11)
        cout<<"String:" <<str10<< "....is greater than.... " <<"String:" << str11 <<endl<<endl;
    else
        cout<<"String:" <<str10<< "....is greater NOT than.... " <<"String:" << str11 <<endl<<endl;


    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING IS GREATER THAN OR EQUAL TO >= OPERATOR........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString str12("Everything");
    DString str13("Every");
    cout <<"str12: " <<str12<<endl;
    cout <<"str13: "<<str13<<endl;
    if(str12 >= str13)
        cout<<"String:" <<str12<< "....is greater than or equal to.... " <<"String:" << str13 <<endl<<endl;
    else
        cout<<"String:" <<str12<< "....is greater NOT than or equal to.... " <<"String:" << str13 <<endl<<endl;

    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING LESS THAN < OPERATOR........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString str14("Everything");
    DString str15("Every");
    cout <<"str14: " <<str14<<endl;
    cout <<"str15: "<<str15<<endl;
    if (str14 < str15)
        cout<<"String:" <<str14<< "....is less than.... " <<"String:" << str15 <<endl<<endl;
    else
        cout<<"String:" <<str14<< "....is not less than.... " <<"String:" << str15 <<endl<<endl;

    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING LESS THAN OR EQUAL TO <= OPERATOR........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString str16("Everything");
    DString str17("Every");
    cout <<"str16: " <<str16<<endl;
    cout <<"str17: "<<str17<<endl;
    if (str16 <= str17)
       cout<<"String:" <<str16<< "....is less than or equal to.... " <<"String:" << str17 <<endl<<endl;
    else
        cout<<"String:" <<str16<< "....is not less than or equal to.... " <<"String:" << str17 <<endl<<endl<<endl;


    cout << "****** CUSTOMIZED STRING FUNCTIONS TEST ******" <<endl <<endl;
    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING CUSTOMIZED Strlen function........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString s1("Everything will be fine");
    cout << "s1: " << s1 <<endl;
    cout <<"Length of String s1 is: " << s1.my_strlen() <<endl<<endl;

    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING CUSTOMIZED Strcmp function........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString s2("Hello");
    DString s3 = "World";
    int ret = s2.my_strcmp(s3);
    if(ret == 0)
        cout << "True";
    else if (ret > 0)
        cout << "false";
    else
        cout <<"hey";

    return 0;
}
