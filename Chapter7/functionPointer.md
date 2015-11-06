Functions, like data items, have addresses. Ponters to functions is a type of 
pointer with its value storing an address of a function.

# Function pointer basics
> * Obtaining the address of a function : funcation name
> * Declaring a Pointer to a function:
    ``` C
        double pam(int); //prototype
    ```
    So a pointer to this kind of function can be declared as :
    ``` C
        double (*pf)(int); // pf is a pointer function which
                           // return double
                           // input  int
    ```
    So just simply replace the function name of a prototype with (*pf).
    And this pointer can be assigned to a fun.
    ``` C
        pf = pam;
    ```

> * So calling a function using a pf:
    ``` C
        double dRet = pf(3);
    ```
