#ifndef __MITKO_H_INCLUDED__
#define __MITKO_H_INCLUDED__

#include <iostream>
#include <string>

#include "student.h"

class Mitko : public Student
{
public:
    Mitko(const std::string& mjr, double g1, double g2, double g3) :
    Student(mjr, g1, g2, g3) { }

    void score(double g1, double g2, double g3)
    {
        grade1 += g1;
        grade2 += g2;
        grade3 += g3;
    }

    void score()
    {
        grade1 += 8;
        grade2 += 8;
        grade3 += 8;
    }

    void grade()
    {
        std::cout << "\n" << uni_major << " - " << 4 * grade1 + 4 * grade2 + 2 * grade3 << std::endl;
    }
};

#endif
