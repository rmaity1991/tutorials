#include <stdio.h>  
int main()  
{  
    int a=100;  
    int b=200;  
    const int* ptr;  
    ptr=&a;  
    ptr=&b;  
    printf("Value of ptr is :%u",ptr);  
    return 0;  
}  