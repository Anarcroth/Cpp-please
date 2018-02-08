#include <iostream>
#include <vector>
#include <memory>

class Plane
{
public:
    int fuel;
};

int main()
{
    std::vector< std::unique_ptr<Plane> > airport;
    airport.reserve(10);

    for (int i = 0; i < 10; i++)
    {
        airport.push_back(std::make_unique<Plane>());
        airport.at(i)->fuel = 4000;
        std::cout << airport.at(i)->fuel << std::endl;
    }

    for (auto &v : airport)
    {
        std::cout << (v ? "not null" : "null") << std::endl;
    }

    //airport.clear();

    airport.erase(airport.begin(), airport.begin() + 5);

    for (auto &v : airport)
    {
        std::cout << (v ? "I survived" : "dead") << std::endl;
    }

    return 0;
}
