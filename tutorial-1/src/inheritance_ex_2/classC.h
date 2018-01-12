#ifndef __C_H_INCLUDED__
#define __C_H_INCLUDED__

#include "classA.h"

class C : public A
{
public:
    C()
    {
        a = 0;
        b = 1;

        std::cout << "In C ctor:" << std::endl;
        std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
    }

    virtual void r()
    {
        std::cout << "r is called";
        a = 0;
        b = 1;
        c += 500;
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

        std::cout << b << " -- "<< c << "\n";
    }

    friend class E;
};

#endif
