/*
Storage classes in C are used to determine the lifetime, visibility, memory location, and initial value of a variable. There are four types of storage classes in C

1) Automatic
2) External
3) Static
4) Register

Automatic
Automatic variables are allocated memory automatically at runtime.
The visibility of the automatic variables is limited to the block in which they are defined.
The scope of the automatic variables is limited to the block in which they are defined.
The automatic variables are initialized to garbage by default.
The memory assigned to automatic variables gets freed upon exiting from the block.
The keyword used for defining automatic variables is auto.
Every local variable is automatic in C by default.
*/

#include <stdio.h>  
int main()  
{  
int a; //auto  
char b;  
float c;   
printf("%d %c %f",a,b,c); // printing initial default value of automatic variables a, b, and c.   
return 0;  
}  