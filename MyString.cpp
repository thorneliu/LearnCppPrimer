#include "MyString.hpp"

MyString::MyString()
{
    data_ = new char[1];
    data_[0] = '\0';
}

MyString::~MyString()
{
    if (data_)
    {
        delete[] data_;
        data_ = nullptr;
    }
}

MyString::MyString(const char* str)
{
    int len = strlen(str) + 1;
    data_ = new char[len];
    strcpy(data_, str);
}

MyString::MyString(const MyString& other)
{
    int len = strlen(other.data_) + 1;
    data_ = new char[len];
    strcpy(data_, other.data_);
}

MyString& MyString::operator=(const MyString& other)
{
    if (this != &other)
    {
        if (data_) delete[] data_;
        int len = strlen(other.data_) + 1;
        data_ = new char[len];
        strcpy(data_, other.data_);
    }

    return *this;
}


MyString::MyString operator+(const MyString& other);
{
    MyString newStr;
    delete[] newStr.data_;
    int len = strlen(data_) + strlen(other.data_) + 1;
    newStr.data_ = new char[len];
    strcpy(newStr.data_
}


bool MyString::empty() const
{
    return strlen(data_) == 0;
}
