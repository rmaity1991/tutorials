#include <stdio.h>
int main()
{
    int number = 8 , i = 0 , sum = 0;
    int table;
    while( i <11){
        table = i * number;
        sum = sum + table;
        i++;
    }
    printf("%d" , sum);

    return 0;
}