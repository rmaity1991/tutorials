/*
The pointer in C language is a variable which stores the address of another variable. 
This variable can be of type int, char, array, function, or any other pointer. 
The size of the pointer depends on the architecture. However, in 32-bit architecture the size of a pointer is 2 byte.
The pointer in c language can be declared using * (asterisk symbol). 
It is also known as indirection pointer used to dereference a pointer.
*/


#include<stdio.h>  
int main(){  
int number=50;    
int *p;      
p=&number;//stores the address of number variable    
printf("Address of p variable is %x \n",p); // p contains the address of the number therefore printing p gives the address of number.     
printf("Value of p variable is %d \n",*p); // As we know that * is used to dereference a pointer therefore if we print *p, we will get the value stored at the address contained by p.    
return 0;  
}    