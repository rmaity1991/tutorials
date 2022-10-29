#include <stdio.h>
int factorial(int x)
{

    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}
int main()
{
    int a = 5;
    printf("%d", factorial(a));
    return 0;
}