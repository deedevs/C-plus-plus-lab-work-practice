#ifndef B_STRING_H
#define B_STRING_H

#include <iostream>
#include <string.h>
using namespace std;

class BString
{
   friend bool operator<  (const BString& x, const BString& y);
   friend bool operator>  (const BString& x, const BString& y);
   friend bool operator<= (const BString& x, const BString& y);
   friend bool operator>= (const BString& x, const BString& y);
   friend bool operator== (const BString& x, const BString& y);
   friend bool operator!= (const BString& x, const BString& y);

   friend BString operator+ (const BString& x, const BString& y);

   friend ostream& operator<< (ostream& os, const BString& s);
   friend istream& operator>> (istream& is, BString& s);

public:
   BString();		// default constructor (sets to empty string)
   BString(const char* );	// conversion from c-string to object
   ~BString();			// for cleanup!

   // deep copy features
   BString(const BString& s);	// copy constructor!
   BString& operator=(const BString& s);	// assignment

   // short-cut assignment with +
   BString& operator+=(const BString& s);	// assignment

   int getSize() const;		// get the size of the string

   void display();


private:
   char* str;		// pointer to my dynamic array of chars
   int size;		// size of the string (allocation will be only what
			//    is needed for storing the string)

   void Resize(int newsize);	// resize TO size "newsize"
};

#endif

