#ifndef __D_H_INCLUDED__
#define __D_H_INCLUDED__

#include "classB.h"

class D
{
public:
    D()
    {
        std::cout << v.b;
    }

    void q()
    {
        p();
    }

    virtual void p()
    {
        v.print();
    }

protected:
    B v;
};

#endif
