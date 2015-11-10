#include<iostream>
#include<fstream>

int main()
{
    using namespace std;

    ofstream outFile;
    outFile.open("test.txt");

    string str = "This is a string and it will be write into the test file.";
    outFile << str<< endl;

    outFile.close();
    return 0;
}

