/*
A variable is a name of the memory location. It is used to store data. Its value can be changed, 
and it can be reused many times.

It is a way to represent memory location through symbol so that it can be easily identified.

There are many types of variables in c:

local variable
global variable
static variable
automatic variable
external variable

A variable that is declared inside the function or block is called a local variable.

A variable that is declared outside the function or block is called a global variable. 
Any function can change the value of the global variable. It is available to all the functions.

A variable that is declared with the static keyword is called static variable.
It retains its value between multiple function calls.

All variables in C that are declared inside the block, are automatic variables by default. 
We can explicitly declare an automatic variable using auto keyword.

We can share a variable in multiple C source files by using an external variable. 
To declare an external variable, you need to use extern keyword.


*/
#include<stdio.h>

int main(){  
int x=10;//local variable (also automatic)  
auto y=20;//automatic variable  
}  

void function1(){  
int x=10;//local variable  
}  

void function1(){  
int x=10;//local variable  
static int y=10;//static variable  
x=x+1;  
y=y+1;  
printf("%d,%d",x,y);  
}  