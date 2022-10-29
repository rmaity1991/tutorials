#include <stdio.h>
int main()
{
    int sub1,sub2,sub3,total = 100;
    int subtotal = sub1 + sub2 + sub3;
    printf("Enter marks in subject 1 \n");
    scanf("%d",&sub1);
    printf("Enter marks in subject 2 \n");
    scanf("%d",&sub2);
    printf("Enter marks in subject 3 \n");
    scanf("%d",&sub3);
    if(sub1&&sub2&&sub3 >= 33){
        if(subtotal >= 120){
            printf("Pass");
        }
        else
        {
            printf("Fail");
        }
        
    }
    else
    {
        printf("Fail");
    }
        
        return 0;
}