#include <iostream>
#include <functional>

typedef void(*Fun)(int);
// new style
typedef std::function<int(int)> dummyHandler;

void add42(int x)
{
    std::cout << "invoke add 42 with x = " << x << std::endl;
    int y = x + 42;
    return;
}

int add1(int x)
{
    std::cout << "now add1 + ..." << x << std::endl;
    return x + 1;
}

int gowithHandlers(int x, dummyHandler handler)
{
    std::cout << "now you are in go with Handlers, haha" << std::endl;
    return handler(x);
}

int main()
{
    Fun pfun = add42;
    pfun(1);
    (*pfun)(1);
    
    std::function<int(int)> a = add1;
    std::cout << "a(100)" << a(100) << std::endl;
    std::cout << sizeof(pfun) << std::endl;
    std::cout << "gowithHandlers(12, a)" << gowithHandlers(12, a) << std::endl;
    //sizeof(add42);


    return 0;
}
