#ifndef __D_H_INCLUDED__
#define __D_H_INCLUDED__

#include <iostream>

class D
{
public:
    D() : x(0) { }

    void A()
    {
        x += 10;
    }

    void M()
    {
        x *= 2;
    }

    void P()
    {
        std::cout << "\nD(x) = " << x << "\n";
    }

protected:
    int x;
};

#endif
