#ifndef __C_H_INCLUDED__
#define __C_H_INCLUDED__

#include "inheritance_ex_1_classB.h"

class C: public B
{
public:
    C()
    {
        a += 1000;
        b += 1000;
        c += 1000;

        std::cout << "In C ctor" << std::endl;
        std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
    }

    void BB(int a, int b, int c)
    {
        this->a += a;
        this->b += b;
        this->c += c;
    }

    void CC(int a, int b, int c)
    {
        this->a += c;
        this->b += b;
        this->c += a;
    }

    void DD(int a, int b, int c)
    {
        this->a += b;
        this->b += a;
        this->c += c;
    }
};

#endif
