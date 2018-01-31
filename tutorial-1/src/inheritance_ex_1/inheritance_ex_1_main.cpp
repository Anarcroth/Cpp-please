#include <iostream>
#include "inheritance_ex_1_classA.h"
#include "inheritance_ex_1_classB.h"
#include "inheritance_ex_1_classC.h"

#include <vector>

int main()
{
    C c_obj;

    std::cout << "\n\n";

    A *a_ptr = &c_obj;

    //        a  b  c
    a_ptr->BB(2, 3, 4);
    a_ptr->print();

    //        a   b   c
    a_ptr->CC(10, 20, 30);
    a_ptr->print();

    //        a   b   c
    a_ptr->DD(90, 50, 10);
    c_obj.print();

    std::vector<int> grades.
    return 0;
}
