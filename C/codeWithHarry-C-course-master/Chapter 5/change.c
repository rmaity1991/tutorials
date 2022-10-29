#include <stdio.h>
void change(int a);
int main()
{
    int a = 22;
    printf("Value before change %d \n" , a);
    change(a);
    printf("Value after change %d" , a);
    return 0;
}

void change(int a) {
    a = 66;
}