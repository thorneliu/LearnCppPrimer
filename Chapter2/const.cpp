#include<iostream>
using namespace std;

int main()
{
    const int i = 3; //Yes, init a const var 
    int j;
    const int k = j; //Is it ok to init const int k by values give by user
    //So a const var can be inited as compile time and also in runtime
    // A const var is a read only var, we could not change it's value once inited.

    //CONST AND POINTER
    const int *cpint = &i; // cpint is a pointer to const var 
    //*cpint = 5; //error, could not change a 
    cpint = &j;


    const int* p = &i;
    p =  &j; // how about this? OK!!    
        
    int * const p2 = &j;
    int *p3 = p2;

    return 0;
}
