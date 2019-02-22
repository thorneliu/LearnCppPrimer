#include "Istrategy.hpp"

class airplaneStrategy : public Istrategy {
    void execute() override {
        std::cout << "You are going by airplane, flying.." << std::endl;
    }
}; 
