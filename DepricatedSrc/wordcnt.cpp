#include <iostream>

using namespace std;

bool IsAPuctationchar(string str)
{
    return ((str == "?") ||
       (str == ".") ||
       (str == "<") ||
       (str == ">") ||
       (str == "+") ||
       (str == "-") ||
       (str == "*") ||
       (str == "{") ||
       (str == "}") ||
       (str == "&") 
      );
}

int main()
{
    string Oneword;
    int wordcnt = 0;

    while(cin >> Oneword)
    {
        //it seems that this word count is not correct.
        //some puctation should be omitted.
        if(!IsAPuctationchar(Oneword))
        wordcnt++;
    }

    cout << "Word count: " << wordcnt << endl;

    return 0;
}
