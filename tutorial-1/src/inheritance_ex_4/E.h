#ifndef __E_H_INCLUDED__
#define __E_H_INCLUDED__

#include <iostream>

#include "D.h"

class E : public D
{
public:
    E()
    {
        x = 100;
    }

    void A()
    {
        x += 100;
    }

    void M()
    {
        x *=3;
    }

    void P()
    {
        std::cout << "\nE(x) = " << x << "\n";
    }
};

#endif
