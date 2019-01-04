#include<iostream>

class foo
{
};

class bar
{
    int i;
};

class joe
{
    void func(){};
};

class die
{
    virtual void func();
};

int main()
{
    foo _f;
    bar _b;
    std::cout << "empty class \nclass foo\n{\n};\nSize = " << sizeof(_f) << std::endl;
    std::cout << "Non empty class \nclass bar\n{\n\tint i\n};\nSize = " << sizeof(_b) << std::endl;

    joe _j;
    std::cout << "Non empty class with only one method: " << sizeof(_j) << std::endl;
    
    void *p = nullptr;
    std::cout << "void *p size in my system is : " << sizeof(p) << std::endl;
    std::cout << "Non empty class with only one virutal method: " << sizeof(die) << std::endl;
    return 0;
}
