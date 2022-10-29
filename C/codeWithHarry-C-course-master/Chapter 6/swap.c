#include <stdio.h>
void swap(int *a , int *b);

int main()
{
    int a=1 , b=2;
    printf("Values of a and b before swap is %d and %d \n",a,b);
    swap(&a,&b);
    printf("Values of a and b after swap is %d and %d \n",a,b);
    return 0;
}
void swap(int *a , int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}