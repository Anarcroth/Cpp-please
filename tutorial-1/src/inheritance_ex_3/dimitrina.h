#ifndef __DIMITRINA_H_INCLUDED__
#define __DIMITRINA_H_INCLUDED__

#include <iostream>
#include <string>

#include "student.h"

class Dimitrina : public Student
{
public:
Dimitrina(const std::string& mjr, double g1, double g2, double g3) :
    Student(mjr, g1, g2, g3) { }

    void score(double g1, double g2, double g3)
    {
        grade1 += g1;
        grade2 -= g2;
        grade3 += g3;
    }

    void score()
    {
        grade1 += 5;
        grade2 -= 5;
        grade3 += 5;
    }

    void grade()
    {
        std::cout << "\n" << uni_major  << " - " << 6 * grade1 + 2 * grade2 + 2 * grade3 << std::endl;
    }
};

#endif
