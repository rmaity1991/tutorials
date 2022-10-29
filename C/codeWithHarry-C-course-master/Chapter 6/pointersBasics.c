#include <stdio.h>
int main()
{
    int i = 33;
    int *j = &i; //j will store address of i
    printf("%d" , *j);
    printf("%u" , &i);
    return 0;
}