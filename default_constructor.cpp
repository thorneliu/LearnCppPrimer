#include<iostream>

class foo
{
public:
        foo(){};
        foo(int i) : _i(i){};
        int _i;
};

class bar
{
public:
        bar(){};
        bar(int x) : _foo(x) {};
        void showi(){std::cout << "i in foo: " << _foo._i << std::endl;}
private:
        foo _foo;
};

int main()
{
        bar b1;
        b1.showi();

        bar b2(2);
        b2.showi();

        return 0;
}
