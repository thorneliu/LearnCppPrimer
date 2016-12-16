#include<iostream>
#include<map>
#include<string>
#include<algorithm>

using robotStatusMap = std::map<int, bool>; //<robotId, isActive>

void printElement(const std::pair<int, bool> &element)
{
        std::string robotStatus = element.second ? "Active" : "InActive";
        std::cout << "robot " << element.first << " is " << robotStatus << std::endl;
}

int main()
{
        robotStatusMap map({{1, true}, {2, false}, {3, true}});
        std::for_each(map.begin(), map.end(), printElement);
        return 0;
}
