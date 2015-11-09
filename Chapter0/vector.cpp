#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(10, 1);

    for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); iter++)
    {
        *iter = *iter * 2;
        cout << *iter << endl;
    }
    
    vector<int>::iterator mid = ivec.begin() + ivec.size()/2;

    return 0;
}
