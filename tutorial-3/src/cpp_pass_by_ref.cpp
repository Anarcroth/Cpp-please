#include <iostream>

void f(int& a)
{
    a += 1;
}

int main()
{
    int a = 5;
    f(a);
    std::cout << "a = " << a << std::endl;

    return 0;
}
