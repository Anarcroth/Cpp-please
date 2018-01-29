#include <iostream>

int main()
{
	double y = 5.5;

	auto f = [] { std::cout << "bair minimum lambda expression!" << std::endl; }; // minimalistic lambda
	auto z = [=] (int x) { return x + y; }; // implicit return type
	auto x = [y] { if (y) return 1.4; else return 2; }; // error! too complex body
	auto a = [y]() { return (y) ? 1 : 2; }; // implicit return
	auto q = [y]() ->int { if (y) return 1; else return 2; }; // OK! explicit return

	f();
	std::cout << "z = " << z(2) << std::endl;
	std::cout << "x = " << x() << std::endl;
	std::cout << "a = " << a() << std::endl;
	std::cout << "q = " << q() << std::endl;

	return 0;
}
