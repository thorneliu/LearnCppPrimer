#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> ivec; //empty vec;
    int x = 0;

    cout << "Input some int numbers:" << endl;
    while(cin >> x)
    {
        ivec.push_back(x);
    }

    vector<int>::size_type length = ivec.size();
    for(vector<int>::size_type i = 0; i < length && (i + 1) < length; i = i + 2)
    {
        cout << ivec[i] + ivec[i+1] << endl;
    }

    if (length%2 != 0)
        cout << "the last element is NOT calculated." << endl;

    return 0;
}
