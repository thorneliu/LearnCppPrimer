#include <iostream>

using namespace std;

int main()
{
    int i = 3;
    int *p = &i;
    int &ri = *p;
    ri = 5;

    cout << i << endl;
    cout << ri << endl;
    cout << *p << endl;

    return 0;
}
