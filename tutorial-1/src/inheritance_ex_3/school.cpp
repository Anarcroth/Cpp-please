#include <iostream>
#include <string>
#include <vector>

#include "student.h"
#include "dimitrina.h"
#include "georgi.h"
#include "mitko.h"

int main()
{
    Dimitrina dimi("History", 40, 20, 30);
    Mitko mitak("Math", 50, 20, 10);
    Georgi gosho("Art", 20, 30, 40);

    std::vector<Student*> school;
    school.reserve(3);

    school.push_back(&dimi);
    school.push_back(&mitak);
    school.push_back(&gosho);

    for (auto& student : school)
    {
        //student->score();
        student->score(50, 30, 20);
        student->grade();
    }

    return 0;
}
