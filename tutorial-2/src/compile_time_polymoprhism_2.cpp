#include <iostream>
#include <string>

template <typename T>
class my_template
{
public:
    T foo;
    my_template() : foo(T()) {}
};

template <>
class my_template<int>
{
public:
    enum { foo = 42 }; // enum hack
};

int main()
{
    my_template<int> x;
    my_template<long> y;
    my_template<std::string> z;

    std::cout << x.foo << std::endl;
    std::cout << y.foo << std::endl;
    std::cout << z.foo << std::endl;

    return 0;
}
