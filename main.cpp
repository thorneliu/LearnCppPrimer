#include <iostream>
#include "MyString.hpp"

int main()
{
    MyString s1;
    MyString s2("Hello");
    MyString s3 = s2;
    std::cout << s1.empty() << std::endl;
    std::cout << s2.empty() << std::endl;
    std::cout << s3.empty() << std::endl;
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;
    return 0;
}
