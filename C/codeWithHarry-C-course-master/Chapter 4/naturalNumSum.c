#include <stdio.h>
int main()
{
    int i =1 , sum=0;
    do{
        sum = sum + i;
        i++;
    }while (i<11);
    
    printf("%d" , sum);

    return 0;
}