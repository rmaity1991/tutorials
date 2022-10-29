#include <stdio.h>
int sum(int a){
    if (a==1){
        return 1;
    }
    else
    {
        return a + sum(a-1);
    }
    
}

int main()
{
    
    printf("%d" , sum(6));

    return 0;
}