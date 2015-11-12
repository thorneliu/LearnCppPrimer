#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str1, str2; 
    
    cout << "Input two strings please:" << endl;
    cout << "Str1:";
    getline(cin,str1);
    cout << "Str2:";
    getline(cin,str2);

    //chekc if they are equal
    if (str1 ==  str2)
    {
        cout << "str1 == str2" << endl;
    }
    else
    {
        //find the larger one;
        string largerstr = (str1 > str2) ? str1:str2;
        cout << "Larger string: " << largerstr << endl;
    }

    if (str1.size() == str2.size())
    {
        cout << "same size" << endl;
    }
    else
    {
        string longerone  = (str1.size() > str2.size())? "str1":"str2";
        cout << "Longer str: " << longerone << endl;
    }

    return 0;
}

