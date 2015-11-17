#include<iostream> 
#include<vector>

using namespace std;

bool CompareTwoVector(vector<int> iveca, vector<int> ivecb);
bool CompareTwoArray(int a[], int b[], int la, int lb);

int main()
{
    int a[] = {0, 1, 2, 3};
    int b[] = {0, 1, 2, 3};
    int c[] = {1, 2, 3, 4};
    int d[] = {1, 2, 3, 4, 5};

    //cout << CompareTwoArray(a, b, sizeof(a)/sizeof(int), sizeof(b)/sizeof(int)) << endl;
    //cout << CompareTwoArray(a, c, sizeof(a)/sizeof(int), sizeof(c)/sizeof(int)) << endl;
    //cout << CompareTwoArray(a, d, sizeof(a)/sizeof(int), sizeof(d)/sizeof(int)) << endl;

    vector<int> iveca;
    vector<int> ivecb;

    int i = 0;
    cout << "Now init vector a:" << endl;
    while(cin >> i)
        iveca.push_back(i);

    cout << "Now init vector b:" << endl;
    while(cin >> i)
        ivecb.push_back(i);

    cout << CompareTwoVector(iveca, ivecb) << endl;

    return 0;
}

bool CompareTwoArray(int a[], int b[], int la, int lb)
{
    //input check
    if(NULL == a || 
       NULL == b ||
       la <= 0   ||
       lb <= 0)
    {
        return false;
    }

    if (la != lb)
    {
        return false;
    }

    int i = 0;
    for (i = 0; i < la; i++)
    {
        if(a[i] != b[i])
            break;
    }

    if (i == la)
    {    
        return true;}
    else
    {
        return false;}
}

bool CompareTwoVector(vector<int> iveca, vector<int> ivecb)
{
    return (iveca == ivecb);
}
