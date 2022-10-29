/*
The if-else statement in C is used to perform the operations based on some specific condition. 
The operations specified in if block are executed if and only if the given condition is true.

There are the following variants of if statement in C language.

If statement
If-else statement
If else-if ladder
Nested if
*/

#include<stdio.h>    
int main(){    
int number=0;    
printf("Enter a number:");    
scanf("%d",&number);    
if(number%2==0){    
printf("%d is even number",number);    
}    
return 0;  
}    