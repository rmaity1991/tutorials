/*
External
The external storage class is used to tell the compiler that the variable defined as 
extern is declared with an external linkage elsewhere in the program.
The variables declared as extern are not allocated any memory. It is only declaration and intended 
to specify that the variable is declared elsewhere in the program.
The default initial value of external integral type is 0 otherwise null.
We can only initialize the extern variable globally, i.e., we can not initialize the external 
variable within any block or method.
An external variable can be declared many times but can be initialized at only once.
If a variable is declared as external then the compiler searches for that variable to be initialized 
somewhere in the program which may be extern or static. If it is not, then the compiler will show an error.
*/

#include <stdio.h>  
int a;   
int main()  
{  
extern int a; // variable a is defined globally, the memory will not be allocated to a  
printf("%d",a);  
}  