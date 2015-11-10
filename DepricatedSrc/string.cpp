#include<iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string s1 = "Hello world.";
    string s2(s1);

    string s3;
    s3 = "I am string s3.";

    cout << "s1:" << s1 << endl;
    cout << "s2:" << s2 << endl;
    cout << "s3:" << s3 << endl;

    //Now let's testify the bool value of the empty string
    string s4; //s4 is empty, could not convert s4 to bool because it's a class(string) instance.
    if(s4.empty())
        cout << "s4.empty() bool true." << endl;
    else
        cout << "s4.empty() bool false." << endl;
    return 0;
}
