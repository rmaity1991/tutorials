#include <stdio.h>
#include <string.h>
typedef struct account
{
    char name[20];
    int acc_number;
    int age;
    int branch_code;
} account;

void showStruct(struct account e1)
{
    printf("%s\n%d\n%d\n%d \n", e1.name , e1.age , e1.acc_number , e1.branch_code);
}
int main()
{
    account ac1;
    account *ptr;
    ptr = &ac1;
    strcpy(ptr ->name , "Tarun");
    (*ptr).acc_number = 1234;
    ptr -> age = 20;
    ptr -> branch_code = 1021;
    showStruct(ac1);
    return 0;
}