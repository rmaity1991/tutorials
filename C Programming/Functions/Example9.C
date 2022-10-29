/*
Call by reference in C
In call by reference, the address of the variable is passed into the function call as the actual parameter.
The value of the actual parameters can be modified by changing the formal parameters since the address of the 
actual parameters is passed.
In call by reference, the memory allocation is similar for both formal parameters and actual parameters. All 
the operations in the function are performed on the value stored at the address of the actual parameters, 
and the modified value gets stored at the same address.
*/

#include<stdio.h>  
void change(int *num) {    
    printf("Before adding value inside function num=%d \n",*num);    
    (*num) += 100;    
    printf("After adding value inside function num=%d \n", *num);    
}      
int main() {    
    int x=100;    
    printf("Before function call x=%d \n", x);    
    change(&x);//passing reference in function    
    printf("After function call x=%d \n", x);    
return 0;  
}    
