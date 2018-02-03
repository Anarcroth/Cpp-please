#include <iostream>

int main()
{
    int * ipt = new int;

    std::cout << "ipt = " << ipt << std::endl;
    std::cout << "*ipt = " << *ipt << std::endl;
    *ipt = 1000;
    std::cout << "*ipt = " << *ipt << std::endl;

    delete ipt;

    std::cout << "ipt = " << ipt << std::endl;
    std::cout << "*ipt = " << *ipt << std::endl;
}

