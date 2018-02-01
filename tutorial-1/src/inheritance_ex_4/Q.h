#ifndef __Q_H_INCLUDED__
#define __Q_H_INCLUDED__

#include <iostream>

#include "E.h"
#include "F.h"

class Q
{
public:
    void c()
    {
        D *pd = &w;
        pd->A();
        pd->M();
        pd->P();
    }

protected:
    E w;
    F v;
};

#endif
