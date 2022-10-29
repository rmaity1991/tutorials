#include <stdio.h>
int main()
{
    int a = 10;
    int *j = &a;
    printf("Address of a is %u \n" , j);
    printf("Value at j is %d" , *(&a));

    return 0;
}