#include "Istrategy.hpp"
#include <memory>

class traveller
{
public:
    traveller(std::shared_ptr<Istrategy> strategy) : strategy_{strategy} {}
    void changeStrategy(std::shared_ptr<Istrategy> strategy)
    {
        std::cout << "change strategy.." << std::endl;
        strategy_ = strategy;
    }

    void travel()
    {
        strategy_->execute();
    }
private:
    std::shared_ptr<Istrategy> strategy_;
};
