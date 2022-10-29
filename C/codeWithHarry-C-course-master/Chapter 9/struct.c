#include <stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct  employee e1;
    printf("Enter the code for employee e1: ");
    scanf("%d",&e1.code);
    printf("Enter the salary for employee e1: ");
    scanf("%f",&e1.salary);
    printf("Enter the name for employee e1: ");
    scanf("%s",e1.name);
    printf("%d , %f , %s" , e1.code , e1.salary , e1.name);
    return 0;
}