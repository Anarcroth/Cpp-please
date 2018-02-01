#ifndef __GEORGI_H_INCLUDED__
#define __GEORGI_H_INCLUDED__

#include <iostream>

class Georgi : public Student
{
public:
    Georgi(double x, double y, double z, char * w)
        {
            e = x;
            q = y;
            h = z;
            name = w;
        }

    void score(double x, double y, double z)
        {
            e += x;
            q += y;
            h += z;
        }
    void grade()
        {
            std::cout << name << 0.4 * e + 0.4 * q + 0.2 * h;
        }
};

#endif
