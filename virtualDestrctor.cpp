#include<iostream>

class Base
{
public:
    Base(){std::cout << "Base constructed..." << std::endl;}
    ~Base(){std::cout << "Base destoryed..." << std::endl;}
};

class Derived : public Base
{
public:
    Derived(){std::cout << "Derived constructed..." << std::endl;}
    ~Derived(){std::cout << "Derived destoryed..." << std::endl;}
};

class Foo
{
public:
    Foo(int i):_i(i) {std::cout << "Foo contructed with i = " << i << std::endl; } 
    Foo():_i(0) {std::cout << "Default Foo contructed with i = 0" << std::endl; } 
    virtual ~Foo() {std::cout << "Foo destroyed..." << std::endl;}
    virtual void doSomething() = 0;
private:
    int _i;
};

class Bar : public Foo
{
public:
    Bar(int i, int j) : Foo(i), _j(j)
    {
        std::cout << "Bar constructed with i = " << i << " and j = " << j << std::endl;
    }
    Bar(int i) : _j(i)
    {
        std::cout << "Bar constructed with i = " << i << std::endl;
    }
    ~Bar()
    {
        std::cout << "Bar destroyed..." << std::endl;
    }

    void doSomething() override
    {
        std::cout << "I am doing something...." << std::endl;
    }
private:
    int _j;
};

int main()
{
    //Derived d;
    //Bar b(1,2);
    //b.doSomething();
    //Bar b2(1);

    Foo* pf = new Bar(1);
    delete pf;
    return 0;
}
