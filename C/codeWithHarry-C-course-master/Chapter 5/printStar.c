#include <stdio.h>
void printStar(int n)
{
    int i = 1;
    do
    {
        printf("*");
        i++;
    } while (i = n);
}


int main()
{
    printStar(3);

    return 0;
}