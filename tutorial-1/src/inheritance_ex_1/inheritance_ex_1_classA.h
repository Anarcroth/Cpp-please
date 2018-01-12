#ifndef __A_H_INCLUDED__
#define __A_H_INCLUDED__

#include <iostream>

class A
{
public:
    // Initialization of protected vars
    A() : a(10), b(10), c(10)
    {
        std::cout << "In A ctor" << std::endl;
        std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
    }

    void BB(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    virtual void CC(int a, int b, int c)
    {
        this->a = c;
        this->b = b;
        this->c = a;
    }

    void DD(int a, int b, int c)
    {
        this->a = b;
        this->b = a;
        this->c = c;
    }

    void print()
    {
        std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
    }

protected: // Using protected scope in order to gain access to the vars
    int a;
    int b;
    int c;
};

#endif
