#include<iostream>

using namespace std;

int main(void)
{
    int base;
    cout << "Input a number:";

    if (cin >> base)
    {
        cout << "The number is : " << base << endl;
        
    }
    else
    {
        cout << "Bad input, bye"  << endl;

    }

    return 0;
}
