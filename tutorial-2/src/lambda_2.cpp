#include <iostream>

int main()
{
	double grade = 2.9; // local variable
	
	// capture local var by value, but don't mutate it
	// will result in an error
	//auto y = [=]() { grade += 0.6; std::cout << "the grade is " << grade << std::endl; };

	// capture local var by value, but be able to mutate it
	auto y = [=]() mutable { grade += 0.6; std::cout << "the grade is " << grade << std::endl; };

	y();

	std::cout << "the actual grade is " << grade << std::endl;

	return 0;
}
