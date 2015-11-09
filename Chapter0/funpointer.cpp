#include<iostream>

using namespace std;

typedef int (*pf)(int );
typedef int (*PF)(int*, int);

int PFtypeFunc(int*, int)
{
    cout << "Calling PFtypeFunc ..." << endl;
    return 0;
}

PF returnFunpPF(void)
{
    return PFtypeFunc;
}


int func(int x)
{
    cout << "Calling func with argument x = " << x << endl;
    return x;
}

int bar(int x)
{
    cout << "Calling bar with argument x = " << x << endl;
    return x;
}

int baz(int x)
{
    cout << "Calling baz with argument x = " << x << endl;
    return x;
}

int foo(int y, pf fun)
{
    return fun(y);
}

int main()
{
    pf myintfun = NULL;
    myintfun = func;
    myintfun(5);
    foo(1, bar);
    foo(2, baz);
    foo(3, func);
    PF f = returnFunpPF();
    int *p = NULL;
    f(p, 0);

    return 0;
}
