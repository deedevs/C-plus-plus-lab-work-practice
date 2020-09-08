#include <cstring>
#include "b.string.h"


/*
   char* str;		// pointer to my dynamic array of chars
   int size;		// size of the string (allocation will be only what
			//    is needed for storing the string)
			//    stored AS a c-string internally, so
			//    allocation will be size+1
*/

// friend functions

bool operator<  (const BString& x, const BString& y)
{

}

bool operator>  (const BString& x, const BString& y)
{

}

bool operator<= (const BString& x, const BString& y)
{

}

bool operator>= (const BString& x, const BString& y)
{

}

bool operator== (const BString& x, const BString& y)
{

}

bool operator!= (const BString& x, const BString& y)
{

}

BString operator+ (const BString& x, const BString& y)
{
    BString z;
    z.size = x.size + y.size;
    z.str    = new char[z.size+1];
    strcpy(z.str, x.str);
    strcpy(z.str, y.str);

    return z;
}

void BString :: display(){
    if (size == 0){
        cout << "string is empty " << str<<endl;
    }
    else
        cout << "Result is : " << str <<endl;


}

ostream& operator<< (ostream& os, const BString& s)
{
/*   for (int i = 0; i < s.size; i++)
      os << s.str[i];
*/
   os << s.str;
   return os;
}

istream& operator>> (istream& is, BString& s)
{

}

// member functions here

BString::BString()
// initialize an empty string
{
   size = 0;
   str = new char[1];
   str[0] = '\0';
}


BString::BString(const char* s)
{
   size = strlen(s);
   str = new char[size+1];
   strcpy(str,s);
}


BString::~BString()
{

}

BString::BString(const BString& s)
{

}

BString& BString::operator=(const BString& s)
{

}

BString& BString::operator+=(const BString& s)
{

}

int BString::getSize() const
{

}

void BString::Resize(int newsize)
{

}

