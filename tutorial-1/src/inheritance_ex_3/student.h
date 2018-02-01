#ifndef __STUDENT_H_INCLUDED__
#define __STUDENT_H_INCLUDED__

#include <iostream>
#include <string>

class Student
{
public:
    Student() { }
    Student(const std::string& mjr, double g1, double g2, double g3) :
    uni_major(mjr), grade1(g1), grade2(g2), grade3(g3) { }

    void score(double g1, double g2, double g3)
    {
        grade1 = g1;
        grade2 = g2;
        grade3 = g3;
    }

    virtual void score()
    {
        grade1 = 69;
        grade2 = 69;
        grade3 = 69;
    }

    virtual void grade() = 0;

protected:
    std::string uni_major = "No Major";
    double grade1 = 0.0;
    double grade2 = 0.0;
    double grade3 = 0.0;
};

#endif
