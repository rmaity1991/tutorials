/*

Static
The variables defined as static specifier can hold their value between the multiple function calls.
Static local variables are visible only to the function or the block in which they are defined.
A same static variable can be declared many times but can be assigned at only one time.
Default initial value of the static integral variable is 0 otherwise null.
The visibility of the static global variable is limited to the file in which it has declared.
The keyword used to define static variable is static.

*/
#include<stdio.h>  
void sum()  
{  
static int a = 10;  
static int b = 24;   
printf("%d %d \n",a,b);  
a++;   
b++;  
}  
void main()  
{  
int i;  
for(i = 0; i< 3; i++)  
{  
sum(); // The static variables holds their value between multiple function calls.    
}  
}  