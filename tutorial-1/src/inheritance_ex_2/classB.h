#ifndef __B_H_INCLUDED__
#define __B_H_INCLUDED__

#include "classA.h"

class B : public A {
public:
    B()
    {
        a = 1;
        b = 0;

        std::cout << "In B ctor:" << std::endl;
        std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
    }

    void r()
    {
        b = 1;
        a = 0;
        c -= 500;
    }

    virtual void print()
    {
        t();

        if(a)
        {
            std::cout << "Mama:\t";
        }
        else
        {
            std::cout << "Dady:\t";
        }

        std::cout << c << "\n";
    }

    friend class D;
};

#endif
