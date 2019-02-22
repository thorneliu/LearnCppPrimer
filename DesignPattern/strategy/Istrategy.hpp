#ifndef ISTRATEGY
#define ISTRATEGY

#include<iostream>
#include<memory>

class Istrategy{
public:
    virtual void execute() = 0;
};

#endif // ISTRATEGY
