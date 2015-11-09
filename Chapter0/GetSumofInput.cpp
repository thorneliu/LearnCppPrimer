#include <iostream>

using namespace std;

int main()
{
    int input = 0;
    int sum = 0;

    while(cin >> input, input)
    {
        sum = sum + input;
        cout << "sum = " << sum << endl;
    }

    return 0;
}
