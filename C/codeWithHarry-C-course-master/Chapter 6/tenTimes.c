//WAP to change value of a variable to its 10 times using a function which pass call by reference
#include <stdio.h>
void tenTimes(int j);
int main()
{
    int i = 230;
    tenTimes(i);
    printf("%d", i);
    return 0;
}

void tenTimes(int j){
    int ans;
    ans = 10 * j;
    printf("%d \n" , ans);
}