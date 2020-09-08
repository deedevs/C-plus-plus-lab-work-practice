#include <iostream>
#include "DString.h"
using namespace std;

int main()
{


    cout << "****** OPERATORS TEST ******" <<endl <<endl;

    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING ASSIGNMENT = OPERATOR........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString str1;
    DString str2("Wifey");
    cout << "String str1: " << str1 <<endl;
    cout << "String str2: " << str2 <<endl;
    str1 = str2;
    cout << "Assignment Operation Successful.. str1 gets stored in str2.. " << endl;
    cout << "Str1: " <<str1<<endl;
    cout << "Str2: " <<str2 <<endl<<endl;


    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING ADDITION + OPERATOR........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString str3 = "Good ";
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
    DString str8 = "up";
    DString str9("Whatsup");
    cout << "str8: " <<str8<<endl;
    cout << "str9: " << str9<<endl;
    if (str8 != str9)
        cout << "They are Equal" <<endl<<endl;
    else
        cout << "Not Equal" <<endl <<endl;


    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING IS GREATER THAN > OPERATOR........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString str10("Everything is Everywhere");
    DString str11("Everything");
    cout <<"str10: " <<str10<<endl;
    cout <<"str11: "<<str11<<endl;
    if (str10 > str11)
        cout<<"String:" <<str10<< "....is greater than.... " <<"String:" << str11 <<endl<<endl;
    else
        cout<<"String:" <<str10<< "....is NOT greater than.... " <<"String:" << str11 <<endl<<endl;


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
    DString str14("Every");
    DString str15("Everything");
    cout <<"str14: " <<str14<<endl;
    cout <<"str15: "<<str15<<endl;
    if (str14 < str15)
        cout<<"String:" <<str14<< "....is less than.... " <<"String:" << str15 <<endl<<endl;
    else
        cout<<"String:" <<str14<< "....is not less than.... " <<"String:" << str15 <<endl<<endl;

    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING LESS THAN OR EQUAL TO <= OPERATOR........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString str16("Every");
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
    DString s2("World");
    DString s3 = "World";
    cout <<"String s2: "<<s2 <<endl;
    cout <<"String s3: "<<s3 <<endl;
    int ret = s2.my_strcmp(s3);
    if(ret == 1)
        cout <<"String s2: "<< s2 << " is less than String s3: "<<s3 <<endl<<endl;
    else if (ret == -1)
        cout <<"String s2: "<< s2 << " is more than String s3:"<<s3 <<endl<<endl;
    else
        cout <<"String s3:" <<s2 << " is EQUAL to String s3:" <<s3 <<endl <<endl;

    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING CUSTOMIZED Strncmp function........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString s4("Hello");
    DString s5= "World";
    cout <<"String s4: "<<s4 <<endl;
    cout <<"String s5: "<<s5 <<endl;
    int rel = s4.my_strncmp(s5, 2);
    if(rel == 0)
        cout <<"EQUAL "<<endl<<endl;
    else
        cout << "NOT EQUAL" <<endl <<endl;

    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING CUSTOMIZED Strcpy function........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString s6("Hello");
    DString s7;
    cout <<"String s6: "<<s6 <<endl;
    cout <<"String s7: "<<s7 <<endl;
    s7.my_Strcpy(s6);
    cout << "After copying s6 to s7" <<endl;
    cout <<"String s6: "<<s6 <<endl;
    cout <<"String s7: "<<s7 <<endl;

    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING CUSTOMIZED Strncpy function........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString s8("Hello");
    DString s9;
    cout <<"String s8: "<<s8 <<endl;
    cout <<"String s9: "<<s9 <<endl;
    s9.my_Strncpy(s8, 2);
    cout << "After copying 2 characters from s8 to s9" <<endl;
    cout <<"String s8: "<<s8 <<endl;
    cout <<"String s9: "<<s9 <<endl<<endl;

    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING CUSTOMIZED Strcat function........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString s10("Hello ");
    DString s11 = "David";
    cout <<"String s10: "<<s10 <<endl;
    cout <<"String s11: "<<s11 <<endl;
    s10.my_strcat(s11);
    cout <<"String s10 is now: "<<s10 <<endl<<endl;

    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING CUSTOMIZED Strncat function........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString s12("Hello ");
    DString s13("Kate");
    cout <<"String s12: "<<s12 <<endl;
    cout <<"String s13: "<<s13 <<endl;
    s12.my_strncat(s13, 2);
    cout <<"String s13 is now: "<<s12 <<endl<<endl;

    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING CUSTOMIZED Strchr function........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString s14("object oriented Programming");
    cout <<"String s14: "<<s14 <<endl;
    s14.my_strchr('o');
    cout <<endl;

    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING CUSTOMIZED Strrchr function........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString s15("i love Programming");
    cout <<"String s15: "<<s15 <<endl<<endl;
    s15.my_strchrlast('o');

    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING CUSTOMIZED Strstr function........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString s16("i love to Program most times");
    DString s17("most");
    cout <<"String s16: "<<s16 <<endl;
    cout <<"String s17: "<<s17 <<endl;
    s16.my_StrStr(s17);
    cout <<endl;

    cout<<"***************************************************************************************"<<endl;
    cout << "TESTING CUSTOMIZED Strtok function........" <<endl;
    cout<<"***************************************************************************************"<<endl;
    DString s18("i-love -to -Program -most -times");
    cout <<"String s18: "<<s18 <<endl;
    cout << "Result after strtok Operation: " <<endl;
    s18.my_Strtok("-");







    return 0;
}
