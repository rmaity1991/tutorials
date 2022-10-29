#include <stdio.h>
int main()
{
    int i = 1 , num = 5 , fact = 1;
    while (i<=num)
    {
        fact = fact * i ;
        i++;
    }
    
    // for(i=1;i<=num;i++){
    //     fact = fact * i ;
    // }
    printf("%d", fact);

    return 0;
}