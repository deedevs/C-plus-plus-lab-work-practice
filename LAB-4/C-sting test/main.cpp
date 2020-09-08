#include <iostream>
#include "b.string.h"
#include <cstring>

using namespace std;

int main()
{
   BString s1;		// default constructor (empty string)
   BString s2("Hello");
   BString s3("Babe");	// convert from c-string

  // cout << "s1 = " << s1 << '\n';
   //cout << "s2 = " << s2 << '\n';

   s1 = s2 +s3;
   s1.display();





return 0;

}
