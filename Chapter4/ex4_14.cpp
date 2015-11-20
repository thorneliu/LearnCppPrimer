#include<iostream>

using namespace std;

int main()
{
    int *p = NULL;
    int a  = 10;

    p = &a;
    cout << "The value of P is address of int a: " << p << endl;

    //now change the a value via p
    *p = 20;
    cout << "a value is changed by p: " << a << endl;

    return 0;
}
