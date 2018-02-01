#ifndef __GEORGI_H_INCLUDED__
#define __GEORGI_H_INCLUDED__

#include <iostream>
#include <string>

#include "student.h"

class Georgi : public Student
{
public:
    Georgi(const std::string& mjr, double g1, double g2, double g3) :
    Student(mjr, g1, g2, g3) { }

    void score(double g1, double g2, double g3)
    {
        grade1 -= g1;
        grade2 -= g2;
        grade3 -= g3;
    }

    void score()
    {
        grade1 -= 3;
        grade2 -= 3;
        grade3 -= 3;
    }

    void grade()
    {
        std::cout << "\n" << uni_major << " - " << 5 * grade1 + 4 * grade2 + 1 * grade3 << std::endl;
    }
};

#endif
