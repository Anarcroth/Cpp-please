#include <iostream>

class SquareItem
{
public:
    void draw()
    {
        std::cout << "SquareC" << std::endl;
    }
};

class CircleItem
{
public:
    void draw()
    {
        std::cout << "CircleC" << std::endl;
    }
};

template <typename T, typename Y>
void drawTheItemsC()
{
    T t1;
    t1.draw();

    Y y1;
    y1.draw();
}


int main()
{
    drawTheItemsC<SquareItem,CircleItem>();

    return 0;
}
