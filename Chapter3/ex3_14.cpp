#include<iostream>
#include<vector>
#include<string>
#include<cctype>

using namespace std;
string StringToUpCase(string Instr);

int main()
{
    vector<string> svec;
    string word;

    while(cin >> word)
    {
        svec.push_back(word);
    }

    int i  = 0;
    for(vector<string>::size_type s = 0; s != svec.size(); s++)
    {
        cout << StringToUpCase(svec[s]) << "\t";
        if ((++i)%8 == 0)
            cout << endl;
    }

    cout << endl;
    return 0;
}

string StringToUpCase(string Instr)
{
    string Outstr = Instr;

    for(string::size_type t = 0; t != Instr.size(); t++)
    {
        Outstr[t] =  toupper(Instr[t]);
    }

    return Outstr;

}
