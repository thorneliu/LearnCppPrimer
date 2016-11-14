#include<iostream>
using namespace std;

int main()
{

    float f = 42.0;
    int   i = 42.0;

    const int  &r1 = f; //r1 reference to a temp variable
    const int  &r2 = i;

    cout << "&f:" << &f << endl;
    cout << "&r1:" << &r1 << endl;

    cout << "&i:" << &i << endl;
    cout << "&r2:" << &r2 << endl;

    int i2 = 2;
    const int &rc = i2; //one read-only reference to i2
    int &ri = i2;       //one read-write reference to i2

    //rc = 3; // it's ilegal to cheange the value of i2 by read-only reference rc
    ri = 4;   // but we can change the value of i2 by non-const reference ri

    cout << rc << "\t" << ri << "\t" << i2 << endl;
    

    const int a(3);
    cout << a << endl;

    return 0;
}
