#include <iostream>

using namespace std;

int main()
{
    float sumAarray[5];
    float sum=0;

    cout << "Enter 5 Floating point numbers to be added: "<< endl;
    for (int i=0; i<5; i++)
        cin >> sumAarray[i];


    for (int j=0; j<5; j++)
        sum+= sumAarray[j];


    cout << " Sum of Floating point number is: "<< sum << endl;


    return 0;
}
