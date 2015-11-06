#include<iostream>
#include<string>

using namespace std;

void displaystr(string str[], int size);
const int size  = 5;

int main()
{
    int i = 0;
    string str[size];
    cout << "please input five strings:" << endl;
    for(i = 0; i < size; i++)
    {
        cout << i << ":";
        getline(cin, str[i]);
    }

    //now print the string
    cout << "You inputed:" << endl;
    displaystr(str, size);
    return 0;
}

void displaystr(string str[], int size)
{
    int i  = 0;
    for(i = 0; i < size; i++)
    {
        cout << i << ":" << str[i] << endl;
    }

    return;
}
