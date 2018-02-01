#ifndef __R_H_INCLUDED__
#define __R_H_INCLUDED__

#include <iostream>

#include "Q.h"

class R : public Q
{
public:
    void c()
    {
        D *pd = &v;
        pd->A();
        pd->M();
        pd->P();
    }
};

#endif
