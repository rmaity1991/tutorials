/*
In c, we can divide a large program into the basic building blocks known as function. 
The function contains the set of programming statements enclosed by {}. A function can be 
called multiple times to provide reusability and modularity to the C program. In other words, 
we can say that the collection of functions creates a program. The function is also known as 
procedureor subroutinein other programming languages.

There are three aspects of a C function.

Function declaration-> A function must be declared globally in a c program to tell the compiler about the function name, 
function parameters, and return type.

Function call -> Function can be called from anywhere in the program. The parameter list must not differ in function 
calling and function declaration. We must pass the same number of functions as it is declared in the function 
declaration.

Function definition ->  It contains the actual statements which are to be executed. It is the most important aspect 
to which the control comes when the function is called. Here, we must notice that only one value can be returned 
from the function.

There are two types of functions in C programming:

Library Functions: are the functions which are declared in the C header files such as scanf(), printf(), gets(), 
puts(), ceil(), floor() etc.

User-defined functions: are the functions which are created by the C programmer, so that he/she can use it many 
times. It reduces the complexity of a big program and optimizes the code.


*/
#include<stdio.h>

void printName();  

void main ()  
{  
    printf("Hello ");  
    printName();  
}  

void printName()  
{  
    printf("Javatpoint");  
}  

void hello(){  
printf("hello c");  
} 

float getFloat(){  
return 10.2;  
} 

int getInt(){  
return 10;  
}  