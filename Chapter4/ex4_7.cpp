#include<iostream>
#include<vector>

using namespace std;

int main()
{
    const int iArraySize = 10;
    vector<int> iveca;
    vector<int> ivecb;

    for (int j = 0; j < iArraySize; j++)
    {
        iveca.push_back(j);
    }

    ivecb = iveca;
    for(vector<int>::iterator iter = iveca.begin(); iter != iveca.end(); iter++)
    {
        cout << *iter << endl; 
    }

    for(vector<int>::iterator iter = ivecb.begin(); iter != ivecb.end(); iter++)
    {
        cout << *iter << endl; 
    }

    return 0;
}
