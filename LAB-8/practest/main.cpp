#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

 class MyString {
    char* value;
    int len;
    int capacity;

public:
    MyString(){
    len = 0;
    value = new char[0];
    }

    ~MyString(){
        delete[] this -> value;
    }

    MyString(char *s){
    len = strlen(s);
    value = new char[len+1];
    strcpy(value,s);

    }


    /*MyString(const MyString &s){
       value = NULL;
       (*this) = s;

    }*/

    MyString(MyString &s){
        len = s.len;
        value = new char[len+1];
        strcpy(value,s.value);

    }


   /*MyString operator=(const MyString& rhs) {
  if ( this != &rhs ) {
    delete [] value;
    len = rhs.len;
    capacity = rhs.capacity;
    value = new char[capacity];
    for (int i=0; i<len; i++)
    value[i] = rhs.value[i];
  }
  return (*this);
}*/

MyString operator=( const MyString &rhs ){

    if (this == &rhs){
        return *this;
    }
    else{
        delete[] value;
        value = new char[strlen(rhs.value)+1];
        strcpy(value, rhs.value);
        return *this;
    }
}
MyString operator+= (const MyString &rhs) {

        if (this == &rhs){
            return *this;
        }
        delete[] value;
        value = new char[strlen(rhs.value)+1];
        strcat(value, rhs.value);
        return *this;

}









  friend MyString operator+(MyString x,MyString y)
{
    MyString z;
    z.len = x.len + y.len;
    z.value= new char[z.len+1];
    strcpy(z.value, x.value);
    strcat(z.value, y.value);

    return z;
}

 friend int operator==(MyString x,MyString y)
{
   int rel =0;

   if (strcmp(x.value, y.value)==0){
    rel =1;
   }
   return rel;
}
 friend int operator!=(MyString x,MyString y)
{
   int rel =0;

   if (strcmp(x.value, y.value)==-1){
    rel =1;
   }
   return rel;
}
///
friend int operator<(MyString x,MyString y)
{
   int rel =0;
   int result = 0;

   rel =  (strcmp(x.value, y.value));
   if (rel < 0)
   {
    result =1;
   }
   return result;
}

friend int operator<=(MyString x,MyString y)
{
   int rel =0;
   int result = 0;

   rel =  (strcmp(x.value, y.value));
   if (rel < 0 || rel == 0)
   {
    result =1;
   }
   return result;
}


friend int operator > (MyString x,MyString y)
{
   int rel =0;
   int result = 0;

   rel =  (strcmp(x.value, y.value));
   if (rel > 0)
   {
    result =1;
   }
   return result;
}



friend int operator >= (MyString x,MyString y)
{
   int rel =0;
   int result = 0;

   rel =  (strcmp(x.value, y.value));
   if (rel > 0 || rel ==0)
   {
    result =1;
   }
   return result;
}

char operator [] (int val){
    char rel;

    if (val > len){
        cout <<"invalid index" <<endl;
    }
    else{
        rel=value[val];
        cout << "result is: " << rel << endl;
    }
    return rel;
}


friend istream & operator >> (istream & ccin, MyString & obj){
    char val[20];
    cout << "enter a string " << endl;
    ccin >> val;

    obj.len = strlen(val);
    obj.value = new char [obj.len+1];
    strcpy(obj.value, val);
    return ccin;

}

friend ostream & operator << (ostream & ccout, MyString &obj){
    cout << "Entered string is " << obj.value << endl;
    return ccout;


}

inline size_t length() const {
	return len;
}




int my_strcmp(const MyString & rhs) const {

	if (len < rhs.len)
		return 1;
	else if (len > rhs.len)
		return -1;

	return strcmp(value, rhs.value);
}

int my_strncmp(const MyString & rhs, size_t num) const {

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





char *my_Strcpy (const MyString & rhs)const {


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
char *my_Strcpy (char * rhs)const {


           char * ptr = value;
           char * ptr2 = rhs;

          while (*ptr2 != '\0'){
                 *ptr = *ptr2;
                    ptr ++;
                    ptr2++;


                 }
                 *ptr = '\0';

                 return ptr;
}

char *my_Strncpy (const MyString & rhs, size_t num)const {


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




char *my_strcat(const MyString & rhs) const{
        char * ptr = value;
        char * ptr2 = rhs.value;

        char* strret = ptr;
        if((NULL != ptr) && (NULL != ptr2)){
    /* Iterate till end of dest string */
            while(NULL != *ptr)
            {
                ptr++;
            }
        /* Copy src string starting from the end NULL of dest */
            while(NULL != *ptr2)
            {
                *ptr++ = *ptr2++;
            }
    /* put NULL termination */
                *ptr = NULL;
            }
  return strret;

}
char *my_strncat(const MyString & rhs, size_t num) const{
        char * ptr = value;
        char * ptr2 = rhs.value;

        char* strret = ptr;
        if((NULL != ptr) && (NULL != ptr2) ){
    /* Iterate till end of dest string */
            while(NULL != *ptr)
            {
                ptr++;
            }
        /* Copy src string starting from the end NULL of dest */
            while(NULL != *ptr2 && num--)
            {
                *ptr++ = *ptr2++;
            }
    /* put NULL termination */
                *ptr = NULL;
            }
  return strret;

}

const char *my_strchr(int ch){
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

const char *my_strchrlast(int ch){
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

const char* my_StrStr(const MyString & rhs)
{
   if( const char *p = strstr(value, rhs.value) )
        std::cout << "Found: " << p << std::endl;
    else
        std::cout << "Not found!" << std::endl;

}
const char* my_Strtok(const MyString & rhs)
{
   char * token;
   token = strtok(value, rhs.value);

   while(token != NULL){
    cout << token << endl;

    token = strtok(NULL, rhs.value);
   }

}





    void display(){
        if (len == 0){
        cout << "string is empty " << endl;
            }
        else {
                cout << "Result is : " << value <<endl;

            }
 }




 };





 int main(){
    MyString str1("Baes");
    MyString str2("Babes");
    //cout <<  str2.length();

    MyString str3;
   // str1 += str2;
   // cout << str2;

  //  str1+=str2;
  //  cout << str1;

     //str2.Strtok("-");


    /*int  ret = str2.my_strncmp(str1, 3);
    if (ret == 0)
        cout << "hey ";
    else
        cout << "heyyyy";*/



    //str2.strchrlast('A');



   // str1.my_strcat(str2);
    //cout << str1 << endl;
     //str3.myStrncpy(str2, 2);
     //cout << str3 << endl;

    // str1.my_strcat(str2);
     //cout << str1 << endl;

     str1.my_strncat(str2, 2);
     cout << str1 << endl;


   // cout << str1;
  // str3.str_cpy(str2);
  // str3.display();
    //str3 = str1 + str2;
  //  str3.display();
    //str1.display();

   // if (str1 < str2){
       // cout << "True" <<endl;
   //}
    //else{
       //  cout << "False"<<endl;
   // }
//



 return 0;
 }
