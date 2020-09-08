#ifndef DSTRING_H
#define DSTRING_H
#include <string.h>

using namespace std;


class DString
{
    char *value;
    int len;

public:
    DString();
    DString(const char *s);
    DString(const DString &s);
    ~DString();
    DString operator=( const DString &rhs );
    friend DString operator+(DString &x, DString &y);
    DString& operator+= (const DString &rhs);
    friend int operator==(DString &x,DString &y);
    friend int operator!=(DString &x,DString &y);
    friend int operator<(DString &x,DString &y);
    friend int operator<=(DString &x,DString &y);
    friend int operator >(DString &x,DString &y);
    friend int operator >=(DString &x,DString &y);
    friend istream &operator >> (istream & ccin, DString & obj);
    friend ostream &operator << (ostream & ccout, DString &obj);

    int my_strlen() const;
    int my_strcmp(const DString & rhs) const;
    int my_strncmp(const DString & rhs, size_t num) const;

    char *my_Strcpy (const DString & rhs)const;
    char *my_Strncpy (const DString & rhs, size_t num)const;

    char *my_strcat(const DString & rhs) const;
    char *my_strncat(const DString & rhs, size_t num) const;

    const char *my_strchr(int ch);
    const char *my_strchrlast(int ch);

    const char *my_StrStr(const DString & rhs);

    const char *my_Strtok(const DString & rhs);



};

#endif // DSTRING_H
