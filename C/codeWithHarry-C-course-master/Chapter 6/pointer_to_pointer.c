//WAP to print value of a variable using pointer to pointer
#include <stdio.h>
int main()
{
    int a = 10;
    int *j = &a;
    int **k = &j;
    printf("%d" , *(*k));
    return 0;
}