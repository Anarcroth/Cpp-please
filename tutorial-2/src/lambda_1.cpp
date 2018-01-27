#include <iostream>


int x = [](int arg1) { return arg1 + 5; } (5);
auto y = [](double arg2) { return arg2 + 3; };

int main()
{
    std::cout << x << std::endl;
    std::cout << y(4) << std::endl;

    return 0;
}
