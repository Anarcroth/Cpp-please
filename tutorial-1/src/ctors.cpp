#include <iostream>
#include <string>
#include <algorithm>

template<typename T>
class MyObject
{
public:
    MyObject();
    MyObject(std::string& v1, T v2, int n);

    MyObject& operator=(const MyObject& rhs);
    MyObject& operator=(MyObject& rhs);

//private:
    std::string& value1;
    T value2;
    const int id; // cannot be used in copy constructors
};

template<typename T>
MyObject<T>::MyObject(std::string& v1, T v2, int n) : value1(v1), value2(v2), id(n)
{}

// Normal copy assignment operator
template<typename T>
MyObject<T>& MyObject<T>::operator=(const MyObject& rhs)
{
    if (this == &rhs) return *this;
    value1 = rhs.value1;
    value2 = rhs.value2;

    return *this;
}

// Copy assignment using swap
template<typename T>
MyObject<T>& MyObject<T>::operator=(MyObject& rhs)
{
    std::swap(value1, rhs.value1);
    std::swap(value2, rhs.value2);

    return *this;
}

int main()
{
    std::string val1 = "Hello", val2 = "Greetings";

    MyObject<int> V1(val1, 42, 3);
    MyObject<int> V2(val2, 71, 4);

    std::cout << V1.value1 << " " << V1.value2 << " " << V1.id << std::endl;
    std::cout << V2.value1 << " " << V2.value2 << " " << V2.id << std::endl;

    V1 = V2; // copy assignment

    std::cout << "swapped!" << std::endl;

    std::cout << V1.value1 << " " << V1.value2 << " " << V1.id << std::endl;
    std::cout << V2.value1 << " " << V2.value2 << " " << V2.id << std::endl;

    return 0;
}
