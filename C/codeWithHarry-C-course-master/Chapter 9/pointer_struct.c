#include <stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct  employee e1[3];
    struct  employee *ptr;

    ptr = &e1;
    printf("%d" , e1[0].code);
    return 0;
}