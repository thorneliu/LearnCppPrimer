#include<iostream>
#include<string>

using namespace std;

int main()
{
    string instr, outstr;
    while(cin >> instr)
    {
        outstr = outstr + " " + instr;
    }

    cout << outstr << endl;

    return 0;
}

