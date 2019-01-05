#include <iostream>

class MyString{
public:
    MyString();
    ~MyString();
    MyString(const char* str);
    MyString(const MyString& other);
    MyString& operator=(const MyString& other);
    //MyString& operator+(const MyString& other);
    bool empty() const;
    //int size() const;

friend std::ostream& operator<<(std::ostream& out, const MyString& str)
{
    out << str.data_;
    return out;
}
protected:
    char* data_;
};

