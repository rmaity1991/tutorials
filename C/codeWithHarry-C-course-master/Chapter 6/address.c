#include <stdio.h>
void address(int *j);
int main()
{
    int i = 10;
    int *j = &i;
    printf("Address of i is %u\n",j);
    address(&i);
    return 0;
}

void address(int *j){
    printf("Address is %u\n" , j);
}