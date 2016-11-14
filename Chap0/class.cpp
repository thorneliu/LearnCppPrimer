#include<iostream>

using namespace std;

class parent
{
public:
    parent(){cout << "New parent" << endl;};
    ~parent(){cout << "Kill parent" << endl;};
    void setCount(int count) {m_count = count;};
    int  getCount(){return m_count;};

    private:
        int m_count;
};

class child : public  parent
{
public:
    child(){cout << "New child" << endl;};
    ~child(){cout << "Kill child" << endl;};
    child operater() (int c){setCount(c);};
};

int main()
{
    child c1;
    c1.setCount(1);
    c1(3);
    c1(4);
    cout << c1.getCount() << endl;
    return 0;
}
