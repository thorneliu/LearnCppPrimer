#include "traveller.hpp"
#include "shipStrategy.hpp"
#include "airplaneStrategy.hpp"
#include "trainStrategy.hpp"

int main()
{
    traveller Jim(std::make_shared<shipStrategy>());
    Jim.travel();
    Jim.changeStrategy(std::make_shared<trainStrategy>());
    Jim.travel();

    return 0;
}
