#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
    string InStr, OutStr;
    
    cout << "Input one string:" << endl;
    getline(cin, InStr);

    string::size_type length = InStr.size();
    
    for (string::size_type i = 0; i != length; i++)
    {
        if (!ispunct(InStr[i]))
        {
            OutStr = OutStr + InStr[i];
        }
    }

    cout << "No punct string: \n" << OutStr << endl;

    return 0;
}
