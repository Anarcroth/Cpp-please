#ifndef __F_H_INCLUDED__
#define __F_H_INCLUDED__

#include <iostream>

#include "D.h"

class F : public D
{
public:
    F()
    {
        x = 1000;
    }

    void A()
    {
        x +=
            1000;
    }

    void M()
    {
        x *= 5;
    }

    void P()
    {
        std::cout << "\nF(x) = " << x << "\n";
    }
};

#endif
