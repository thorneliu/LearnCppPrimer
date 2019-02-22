#include "Istrategy.hpp"

class trainStrategy : public Istrategy {
    void execute() override {
        std::cout << "You are going by train, toto.." << std::endl;
    }
}; 
