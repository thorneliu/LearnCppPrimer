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

    cout << CompareTwoArray(a, b, sizeof(a)/sizeof(int), sizeof(b)/sizeof(int)) << endl;
    cout << CompareTwoArray(a, c, sizeof(a)/sizeof(int), sizeof(c)/sizeof(int)) << endl;
    cout << CompareTwoArray(a, d, sizeof(a)/sizeof(int), sizeof(d)/sizeof(int)) << endl;

    return 0;
}

bool CompareTwoArray(int a[], int b[], int la, int lb)
{
    cout << "la = " << la << "\tlb = " <<  lb << endl;

    //input check
    if(NULL == a || 
       NULL == b ||
       la <= 0   ||
       lb <= 0)
    {
        cout << "return p1" << endl;
        return false;
    }

    if (la != lb)
    {
        cout << "return p2" << endl;
        return false;
    }

    int i = 0;

    for (int i; i < la; i++)
    {
        cout << "inloop:" << i << endl;
        if(a[i] != b[i])
            break;
    }

    cout << "out loop: " << i << endl;

    if (i == la)
    {    cout << "return p3" << endl;
        return true;}
    else
    {
        cout << "return p4" << endl;
        return false;}
}

bool CompareTwoVector(vector<int> iveca, vector<int> ivecb)
{
    return (iveca == ivecb);
}
