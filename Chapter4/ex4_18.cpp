#include<iostream>

using namespace std;

int main()
{
    int *p = NULL;
    int a[]  = {10, 11, 12, 13, 14, 19, 22};

    unsigned int length = sizeof(a)/sizeof(int);
    int i = 0;
    for (p = a; p != (a+length); p++)
    {
        *p = 0;
        std::cout << a[i] << std::endl;
        i++;
    }

    return 0;
}
