#include <iostream>
#include <vector>
#include <algorithm>

int x = [](int arg1) { return arg1 + 5; } (5);
auto y = [](double arg2) { return arg2 + 3; };

int main()
{
    std::cout << x << std::endl;
    std::cout << y(4) << std::endl;

    std::vector<double> grades = {3.4, 1.9, 4.0, 2.4, 3.5, 3.4, 3.65};

    double pass = 2.5;

    for_each(grades.begin(), grades.end(), [pass](double x) { if (pass < x) { std::cout << "passed" << std::endl;} else { std::cout << "failed" << std::endl; } });

    //for_each(grades.begin(), grades.end(), [pass](double& x) { x += 0.5; pass -= 0.1; }); compilation error!
    for_each(grades.begin(), grades.end(), [&pass](double& x) { x += 0.5; pass -= 0.1; });

    std::cout << "pass = " << pass << std::endl;

    for_each(grades.begin(), grades.end(), [](double x) { std::cout << x << std::endl; });

    return 0;
}
