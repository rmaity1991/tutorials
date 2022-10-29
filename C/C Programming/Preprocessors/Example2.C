/*
A macro is a segment of code which is replaced by the value of macro. Macro is defined by #define directive. 
There are two types of macros:

Object-like Macros
Function-like Macros
Object-like Macros
The object-like macro is an identifier that is replaced by value. It is widely used to represent numeric constants. 
For example:

#define PI 3.14

*/

#include<stdio.h> 
#include<conio.h>
#include<stdlib.h>
// Predefined Macros
int main(){    
   printf("File :%s\n", __FILE__ );    
   printf("Date :%s\n", __DATE__ );    
   printf("Time :%s\n", __TIME__ );    
   printf("Line :%d\n", __LINE__ );    
   
   return 0;  
 }  