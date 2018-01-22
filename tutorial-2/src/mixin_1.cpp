#include <iostream>

class MixinBase
{
public :
    void f() { std::cout << "HELLO" << std::endl; };
};

template <typename T>
class Mixin : public T
{
public:
    void f() {
        std::cout << "call from mixin f method" << std::endl;
        T::f();
    }
};

template<typename T>
class Mixin2 : public T
{
public :
    void g() {
        std::cout << "call from mixin2 g method" << std::endl;
        T::f();
    }
};

int main()
{
    Mixin2<Mixin <MixinBase> > mix;
    mix.g();

    return 0;
}
