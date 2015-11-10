#include <iostream>
class Foo
{
            public:
                        Foo(int x) { std::cout << "Foo's constructor with int x = " << x << std::endl; 
                        }
};
class Bar : public Foo
{
            public:
                        Bar() : Foo(10)
                        { std::cout << "Bar's constructor" << std::endl; }

                        int GetFieldinBar()
                        {
                            return Fox;
                        }
                        
            private:
                    int Fox;

};

int main()
{
                   Bar bar;
                   std::cout << "Bar's field is :" << bar.GetFieldinBar() << std::endl;
                   return 0;
            }
