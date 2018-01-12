#ifndef __B_H_INCLUDED__
#define __B_H_INCLUDED__

#include "inheritance_ex_1_classA.h"

class B: public A
{
public:
    B()
    {
        a += 100;
        b += 100;
        c += 100;

        std::cout << "In B ctor" << std::endl;
        std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
    }

    void BB(int a, int b, int c)
    {
        this->a -= a;
        this->b -= b;
        this->c -= c;
    }

    void CC(int a, int b, int c)
    {
        this->a -= c;
        this->b -= b;
        this->c -= a;
    }

    void DD(int a, int b, int c)
    {
        this->a -= b;
        this->b -= a;
        this->c -= c;
    }
};

#endif
