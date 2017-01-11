#include<iostream>
#include<string>

using namespace std; 

int main()
{
    string name, color;
    cout << "What's your name?" << endl;
    cin >> name;
    cout << "Hi, " << name << "! What's your favorate color?" << endl;
    cin >> color;
    cout << "It's " << color << "." << endl;

    return 0;
}
