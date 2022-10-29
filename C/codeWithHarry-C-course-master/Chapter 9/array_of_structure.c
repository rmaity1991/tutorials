#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee facebook[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the code for employee %d: ",i+1);
        scanf("%d", &facebook[i].code);
        printf("Enter the salary for employee %d: ",i+1);
        scanf("%f", &facebook[i].salary);
        printf("Enter the name for employee %d: ",i+1);
        scanf("%s", facebook[i].name);
    }
    for (int i = 0; i < 3; i++){
        printf("%d , %f , %s \n " , facebook[i].code , facebook[i].salary , facebook[i].name);
    }
    return 0;
}