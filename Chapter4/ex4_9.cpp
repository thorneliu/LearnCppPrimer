#include<iostream>

using std::cout;
using std::endl;

int main()
{
    int a[10]; //an array of 10 int, uninitialized

    for(int i = 0; i < 10; i++)
    {
        a[i] = i;
    }

    //output the array
    for(int i  = 0; i < 10; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    return 0;
}

