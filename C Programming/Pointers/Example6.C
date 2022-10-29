/*
Pointer Arithmetic in C
We can perform arithmetic operations on the pointers like addition, subtraction, etc. 
However, as we know that pointer contains the address, the result of an arithmetic operation 
performed on the pointer will also be a pointer if the other operand is of type integer. 
In pointer-from-pointer subtraction, the result will be an integer value. Following arithmetic 
operations are possible on the pointer in C language:

Increment
Decrement
Addition
Subtraction
Comparison
*/

#include<stdio.h>  
int main(){  
int number=50;        
int *p;//pointer to int      
p=&number;//stores the address of number variable        
printf("Address of p variable is %u \n",p);        
p=p+1;        
printf("After increment: Address of p variable is %u \n",p); // in our case, p will get incremented by 4 bytes.      
return 0;  
}    
