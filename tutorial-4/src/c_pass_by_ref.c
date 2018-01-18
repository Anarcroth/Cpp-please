#include <stdio.h>

void f(int *j)
{
    (*j)++;
}

int main()
{
    int i = 20;
    int *p = &i;
    f(p); // or f(&i); will yield the same result
    printf("i = %d\n", i);

    return 0;
}
