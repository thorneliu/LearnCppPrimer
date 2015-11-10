#include<iostream>

using namespace std;

// This is a function that ask the user input the 
// base and exponent to get a result
// 1. only UINT numbers are accepted
// 2. result overflow is NOT considered
// 3. a^(0) == 1 

int main(void)
{
    int base;
    int exponent;
    double result = 1.0;

    cout << "Please input the base and the exponent:" << endl;
    if (cin >> base >> exponent)
    {
        int i  = 1;

        // this is a exponent >= 0  case
        for (i = 1; i <= exponent; i++)
        {
            result  = result * base;
        }

        cout << "The result is : " << result << endl;
        
    }
    else
    {
        cout << "Bad input, bye"  << endl;

    }

    return 0;
}
