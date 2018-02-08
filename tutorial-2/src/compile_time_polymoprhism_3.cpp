#include <iostream>
#include <vector>
#include <memory>

class Animal
{
public:
    virtual void speak() = 0;
};

class SomethingSmart
{
public:
    std::string comment_a_thing()
    {
        return "The addition of a potential term to Schrodinger's equation sometimes leads to the occurrence of eigenvalues.  As an example, we now study the quantum-mechanical harmonic oscillator equation in one dimension, which in appropriate units is: -iut=uxx-x2u\n";
    }
};

class SomethingStupid
{
public:
    std::string comment_a_thing()
    {
        return "Gee-gosh that new art installation sure is beautiful! Shiny!!\n";
    }
};

template <typename T>
class Compliment: public T
{
public:
    std::string comment_a_thing()
    {
        return "That David sure is smart. " + T::comment_a_thing();
    }
};

template <typename T>
class Cutoff: public T
{
public:
    std::string comment_a_thing()
    {
        return "shh\n";
    }
};

template <typename T>
class Dog: private T, public Animal
{
public:
    void speak()
    {
        std::cout << "Woof. " << T::comment_a_thing();
    }
};

template <typename T>
class Cat: private T, public Animal
{
public:
    void speak()
    {
        std::cout << "Meow. " << T::comment_a_thing();
    }
};

int main() {

    std::vector<std::unique_ptr<Animal>> animals;

    animals.emplace_back(new Dog<Cutoff<SomethingStupid>>());
    animals.emplace_back(new Cat<Compliment<SomethingSmart>>());


    for (auto &animal : animals)
    {
        animal->speak();
        std::cout << std::endl;
    }

    return 0;

}
