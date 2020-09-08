#include <iostream>
#include "DString.h"
#include <string.h>


using namespace std;

// DEFAULT CONSTRUCTOR
DString::DString()
{
  len = 0;
  value = new char[0];
  value[0]= '\0';
}
// PARAMETERIZED CONSTRUCTOR
DString::DString(const char *s){
    int sz=0;
    while(s[sz]!='\0')
        sz++;
    len = sz;
    value = new char[len+1];
    for(int i=0;i<len;i++)
        value[i] = s[i];
    value[len]='\0';
}

// COPY CONSTRUCTOR
DString::DString(const DString &s)
{
    delete[] value;
    len = s.len;
    value = new char[len+1];
    for(int i=0;i<len;i++)
        value[i] = s.value[i];
    value[len]='\0';
}
// DESTRUCTOR
DString::~DString()
{
    delete[] this -> value;
}

//................OPERATOR  OVERLOADING................

// ASSIGNMENT OPERATOR
DString DString::operator=(const DString &rhs){
    if (this == &rhs){
        return *this;
    }
    else{
            delete[] value;
    len = rhs.len;
    value = new char[len+1];
    for(int i=0;i<len;i++)
        value[i] = rhs.value[i];
    value[len]='\0';

        //delete[] value;
        //value = new char[strlen(rhs.value)+1];
        //value = rhs.value;
        //strcpy(value, rhs.value);
        return *this;
    }
}
//ADDITION OPERATOR
DString operator+(DString &x, DString &y){
     DString z;
    z.len = x.len + y.len;
    z.value= new char[z.len+1];
    strcpy(z.value, x.value);
    strcat(z.value, y.value);
    return z;

}

//SHORT HAND ASSIGNMENT OPERATOR
DString& DString::operator+=(const DString &rhs){

        if (this == &rhs){
            return *this;
        }
        delete[] value;
        //value = new char[strlen(rhs.value)+1];
        strcat(value, rhs.value);
        return *this;
}

// EQUAL TO OPERATOR
int operator==(DString &x,DString &y)
{
    int rel =0;

   if (strcmp(x.value, y.value)==0){
    rel =1;
   }
   return rel;

}

//NOT EQUAL TO OPERATOR
int operator!=(DString &x,DString &y){
    int rel =0;

   if (strcmp(x.value, y.value)==0){
    rel =1;
   }
   return rel;
}

// LESS THAN OPERATOR
int operator<(DString &x,DString &y){
    int rel =0;
   int result = 0;

   rel =  (strcmp(x.value, y.value));
   if (rel < 0)
   {
    result =1;
   }
   return result;

}

// LESS THAN OR EQUAL TO OPERATOR
int operator<=(DString &x,DString &y){
    int rel =0;
   int result = 0;

   rel =  (strcmp(x.value, y.value));
   if (rel < 0 || rel == 0)
   {
    result =1;
   }
   return result;


}

// GREATER THAN OPERATOR
int operator > (DString &x,DString &y){
    int rel =0;
   int result = 0;

   rel =  (strcmp(x.value, y.value));
   if (rel > 0)
   {
    result =1;
   }
   return result;
}

// GREATER THAN OR EQUAL TO
int operator >= (DString &x,DString &y){

    int rel =0;
   int result = 0;

   rel =  (strcmp(x.value, y.value));
   if (rel > 0 || rel ==0)
   {
    result =1;
   }
   return result;

}


//INSERTION OPERATOR
istream & operator >> (istream & ccin, DString & obj){
    char val[20];
    cout << "enter a string " << endl;
    ccin >> val;

    obj.len = strlen(val);
    obj.value = new char [obj.len+1];
    strcpy(obj.value, val);
    return ccin;


}

//EXTRACTION OPERATOR
ostream & operator << (ostream & ccout, DString &obj){
    cout << obj.value;
    return ccout;

}


//*********CUSTOMIZED MEMBER FUNCTIONS***********

// STRLEN FUNCTION
int DString::my_strlen() const
{
    return len;
}

// STRCMP FUNCTION
int DString::my_strcmp(const DString & rhs)const {
    if (len < rhs.len)
		return 1;
	else if (len > rhs.len)
		return -1;

	return strcmp(value, rhs.value);

}

//STRNCMP FUNCTION
int DString::my_strncmp(const DString & rhs, size_t num)const{
    char *s1 = value;
    char *s2 = rhs.value;

  unsigned char u1, u2;
  while (num-- > 0)
    {
      u1 = (unsigned char) *s1++;
      u2 = (unsigned char) *s2++;
      if (u1 != u2)
        return u1 - u2;
      if (u1 == '\0')
        return 0;
    }
}

//STRCPY FUNCTION
char* DString::my_Strcpy(const DString & rhs)const {

          char * ptr = value;
           char * ptr2 = rhs.value;

          while (*ptr2 != '\0'){
                 *ptr = *ptr2;
                    ptr ++;
                    ptr2++;


                 }
                 *ptr = '\0';

                 return ptr;

}

// STRNCPY FUNCTION
char* DString::my_Strncpy(const DString & rhs, size_t num)const {

           char * ptr = value;
           char * ptr2 = rhs.value;

          while (*ptr2 && num--){
                 *ptr = *ptr2;
                    ptr ++;
                    ptr2++;


                 }
                 *ptr = '\0';

                 return ptr;
}

// STRCAT FUNCTION
char* DString::my_strcat(const DString & rhs) const{
        char * ptr = value;
        char * ptr2 = rhs.value;

        char* strret = ptr;
        if((NULL != ptr) && (NULL != ptr2)){
    // Iterate till end of dest string
            while(NULL != *ptr)
            {
                ptr++;
            }
        //Copy src string starting from the end NULL of dest
            while(NULL != *ptr2)
            {
                *ptr++ = *ptr2++;
            }
    // put NULL termination
                *ptr = NULL;
            }
  return strret;

}

// STRCAT FUNCTION
char*  DString::my_strncat(const DString & rhs, size_t num)const{

        char * ptr = value;
        char * ptr2 = rhs.value;

        char* strret = ptr;
        if((NULL != ptr) && (NULL != ptr2) ){
    //Iterate till end of dest string
            while(NULL != *ptr)
            {
                ptr++;
            }
        // Copy src string starting from the end NULL of dest
            while(NULL != *ptr2 && num--)
            {
                *ptr++ = *ptr2++;
            }
    // put NULL termination
                *ptr = NULL;
            }
  return strret;
}


//STRCHR FUNCTION
const char* DString::my_strchr(int ch){

    int index = 0;
    char *p = value;

    if (NULL == p)
       return NULL;

    for (int i=0; *p!= '\0'; i++){
        if(*p == (char)ch){
                index = i;
            cout << "Found Character " << "\""<<(char)ch <<"\"""at index: " << index <<endl;

    }
            *p++;

    }

    return NULL;
}

// STRRCHR FUNCTION
const char* DString::my_strchrlast(int ch){

    int index = 0;
    char *p = value;

    if (NULL == p)
       return NULL;

    for (int i=0; *p!= '\0'; i++){
        if(*p == (char)ch){
                index = i;

    }
            *p++;


    }
    cout << "Found Character " << "\""<<(char)ch <<"\"""at index: " << index <<endl;

    return NULL;
}


// STRSTR FUNCTION
const char*  DString::my_StrStr(const DString & rhs){

     if( const char *p = strstr(value, rhs.value) )
        std::cout << "Found: " << p << std::endl;
    else
        std::cout << "Not found!" << std::endl;

}

//STRTOK FUNCTION
const char* DString::my_Strtok(const DString & rhs){

   char * token;
   token = strtok(value, rhs.value);

   while(token != NULL){
    cout << token << endl;

    token = strtok(NULL, rhs.value);
   }
}






