/*
Register
The variables defined as the register is allocated the memory into the CPU registers depending upon 
the size of the memory remaining in the CPU.
We can not dereference the register variables, i.e., we can not use &operator for the register variable.
The access time of the register variables is faster than the automatic variables.
The initial default value of the register local variables is 0.
The register keyword is used for the variable which should be stored in the CPU register. However, 
it is compiler?s choice whether or not; the variables can be stored in the register.
We can store pointers into the register, i.e., a register can store the address of a variable.
Static variables can not be stored into the register since we can not use more than one storage 
specifier for the same variable.
*/

#include <stdio.h>  
int main()  
{  
register int a; // variable a is allocated memory in the CPU register. The initial default value of a is 0.   
printf("%d",a);  
}  