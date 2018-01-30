#ifndef __A_H_INCLUDED__
#define __A_H_INCLUDED__

#include <iostream>

class A
{
public:
    A() : a(0), b(0), c(1000)
    {
        std::cout << "In A ctor:" << std::endl;
        std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
    }

    virtual void r()
    {
        a = 0;
        b = 0;
        c *= 5;
    }

    void t()
    {
        int d;
        r();
        d = a;
        a = b;
        b = d;
    }

    virtual void print()
    {
        t();
        std::cout << "\nDady\n";
    }

protected:
    int a; int b; int c;
};

#endif
