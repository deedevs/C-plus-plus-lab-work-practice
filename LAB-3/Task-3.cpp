#include <iostream>

inline void swap(char *a,char *b){
  char temp = *a;
  *a = *b;
  *b = temp;
}

inline void swap(char &a,char &b){
  char temp = a;
  a = b;
  b = temp;
}

int main() {
  char a='L',b='A';
  std::cout<<a<<b<<std::endl;
  swap(a,b);
  std::cout<<a<<b<<std::endl;
  swap(&a,&b);
  std::cout<<a<<b<<std::endl;
}
