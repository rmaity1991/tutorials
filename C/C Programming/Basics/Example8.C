/*
There is another way of using Boolean value, i.e., typedef. Basically, 
typedef is a keyword in C language, which is used to assign the name to the already existing datatype.
*/

#include <stdio.h>  
typedef enum {FALSE,TRUE} b;  
int main()  
{  
b x=FALSE; // variable initialization  
if(x==TRUE) // conditional statements  
{  
printf("The value of x is true");  
}  
else  
{  
printf("The value of x is false");  
}  
return 0;  
}  