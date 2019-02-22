#include "Istrategy.hpp"

class shipStrategy : public Istrategy {
    void execute() override {
        std::cout << "You are going by ship, boating.." << std::endl;
    }
}; 
