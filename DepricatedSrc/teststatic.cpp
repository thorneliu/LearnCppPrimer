#include<iostream>

using namespace std;


class Test {
    public:
        Test(const int p): price(p) { std::cout << "constructor Test." << std::endl; }
        void setRate(const double r) { this->rate = r; }
        double getRate() { return rate; };
    private:
        static double rate;  //declare
        int price;
};
double Test::rate = 0.53;  //define
int main(int argc, char *argv[]) {
        Test t(10);
        Test t1(20);
        std::cout << t.getRate() << std::endl;  
        std::cout << t1.getRate() << std::endl;
        t.setRate(2.22);
        std::cout << t.getRate() << std::endl;
        std::cout << t1.getRate() << std::endl;
}
