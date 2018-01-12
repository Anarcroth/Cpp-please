#ifndef __E_H_INCLUDED__
#define __E_H_INCLUDED__

#include "classD.h"
#include "classC.h"

class E : public D {
public:
    E()
    {
        std::cout << u.a << " -- " << u.b << " -- " << u.c << std::endl;
    }

    void p()
    {
        u.print();
    }

private:
    C u;
};

#endif
