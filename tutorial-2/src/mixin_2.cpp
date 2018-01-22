#include <iostream>

class Number
{
private:
    int num;

public:
    typedef int val;

    Number() {}
    Number(int n) : num(n) {}
    virtual ~Number() {}

    virtual void set_num(int num) { this->num = num; }
    int get_num() const { return num; }
};

template <typename T, typename Num = typename T::val>
class Redo : public T
{
private:
    Num next;

public:
    Redo() {}
    Redo(Num b) : T(b) {}
    virtual ~Redo() {}

    virtual void set_num(Num num) { T::set_num(num); next = num; }
    void redo() { T::set_num(next); }
};

template <typename T, typename Num = typename T::val>
class Undo : public T
{
private:
    Num prev;

public:
    Undo() {}
    Undo(Num b) : T(b) {}
    virtual ~Undo() {}

    virtual void set_num(Num num) { prev = T::get_num(); T::set_num(num); }
    void undo() { T::set_num(prev); }
};

int main()
{
    Redo<Undo <Number> > n(3);

    std::cout << n.get_num() << std::endl;

    n.set_num(4);
    n.set_num(5);

    std::cout << n.get_num() << std::endl;

    n.undo();

    std::cout << n.get_num() << std::endl;

    n.redo();

    std::cout << n.get_num() << std::endl;
}
