/*
In C, Boolean is a data type that contains two types of values, i.e., 0 and 1. 
Basically, the bool type value represents two types of behavior, either true or false. 
Here, '0' represents false value, while '1' represents true value.

In C Boolean, '0' is stored as 0, and another integer is stored as 1. We do not 
require to use any header file to use the Boolean data type in C++, but in C, we 
have to use the header file, i.e., stdbool.h. If we do not use the header file, 
then the program will not compile.
*/

#include <stdio.h>  
#include<stdbool.h>  
int main()  
{  
bool x=false; // variable initialization.  
if(x==true) // conditional statements  
{  
printf("The value of x is true");  
}  
else  
printf("The value of x is FALSE");  
return 0;  
}  