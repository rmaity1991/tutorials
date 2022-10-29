#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter four numbers \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("%d is greater ", a);
    }
    else if (b>a && b>c && b>d){
        printf("%d is greater ", b);
    }
    else if (c>a && c>b && c>d){
        printf("%d is greater ", c);
    }
    else
    {
        printf("%d is greater ", d);
    }
    
    {
        /* code */
    }
    
    {
        /* code */
    }
    
    return 0;
}