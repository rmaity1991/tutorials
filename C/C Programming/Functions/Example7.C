/*
Call by value in C
In call by value method, the value of the actual parameters is copied into the formal parameters. 

In other words, we can say that the value of the variable is used in the function call in the call by value method.

In call by value method, we can not modify the value of the actual parameter by the formal parameter.

In call by value, different memory is allocated for actual and formal parameters since the value of the 
actual parameter is copied into the formal parameter.

The actual parameter is the argument which is used in the function call whereas formal parameter is the 
argument which is used in the function definition

*/

#include<stdio.h>  
void change(int num) {    
    printf("Before adding value inside function num=%d \n",num);    
    num=num+100;    
    printf("After adding value inside function num=%d \n", num);    
}    
int main() {    
    int x=100;    
    printf("Before function call x=%d \n", x);    
    change(x);//passing value in function    
    printf("After function call x=%d \n", x);    
return 0;  
}    