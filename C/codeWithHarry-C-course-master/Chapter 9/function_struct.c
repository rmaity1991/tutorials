#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[10];
} employee;

void showStruct(struct employee e1)
{
    printf("%d , %f , %s", e1.code, e1.salary, e1.name);
}
int main()
{
    employee e1;
    employee *ptr;
    ptr = &e1;
    ptr->code = 23;
    ptr->salary = 232.12;
    strcpy(ptr->name, "Tarun");
    showStruct(e1);
    return 0;
}