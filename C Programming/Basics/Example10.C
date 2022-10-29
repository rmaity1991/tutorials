/*

Static is a keyword used in C programming language. It can be used with both variables and functions, 
i.e., we can declare a static variable and static function as well. An ordinary variable is limited 
to the scope in which it is defined, while the scope of the static variable is throughout the program.

Static keyword can be used in the following situations:

1) Static global variable
When a global variable is declared with a static keyword, then it is known as a static global variable. 
It is declared at the top of the program, and its visibility is throughout the program.
2) Static function
When a function is declared with a static keyword known as a static function. Its lifetime is throughout the program.
3) Static local variable
When a local variable is declared with a static keyword, then it is known as a static local variable. 
The memory of a static local variable is valid throughout the program, but the scope of visibility of 
a variable is the same as the automatic local variables. However, when the function modifies the static 
local variable during the first function call, then this modified value will be available for the next 
function call also.
4) Static member variables
When the member variables are declared with a static keyword in a class, then it is known as static 
member variables. They can be accessed by all the instances of a class, not with a specific instance.
5) Static method
The member function of a class declared with a static keyword is known as a static method. It is 
accessible by all the instances of a class, not with a specific instance.
*/

#include <stdio.h>  
int main()  
{  
 printf("%d",func());  
printf("\n%d",func());  
 return 0;  
}  
int func()  
{   
    int count=0; // variable initialization  
    count++; // incrementing counter variable  
  
   return count; }  

int func()  
{  
    static int count=0;  
    count++;  
    return count;  
}  

static void func1()  
{  
    printf("Hello javaTpoint");  
}  