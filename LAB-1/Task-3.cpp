
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x = 3.141559f;


    cout << 4 << endl;
    cout << "  " << 4 << endl;
    cout << 4 << "  " << endl;
    cout << x << endl;
    cout <<fixed<<setprecision(2)<<x<< endl;
    cout <<"  "<<fixed<<setprecision(2)<<x<< endl;

    return 0;
}
