/*
The sizeof() operator is commonly used in C. It determines the size of the expression or the data type 
specified in the number of char-sized storage units. The sizeof() operator contains a single operand which 
can be either an expression or a data typecast where the cast is data type enclosed within parenthesis. 
The data type cannot only be primitive data types such as integer or floating data types, but it can also 
be pointer data types and compound data types such as unions and structs.

Need of sizeof() operator
Mainly, programs know the storage size of the primitive data types. Though the storage size of the data 
type is constant, it varies when implemented in different platforms. For example, we dynamically allocate 
the array space by using sizeof() operator:
*/

#include <stdio.h>  
int main()  
{  
    int x=89;    // variable declaration.  
    printf("size of the variable x is %d", sizeof(x));  // Displaying the size of ?x? variable.  
    printf("\nsize of the integer data type is %d",sizeof(int)); //Displaying the size of integer data type.  
    printf("\nsize of the character data type is %d",sizeof(char)); //Displaying the size of character data type.  
  
    printf("\nsize of the floating data type is %d",sizeof(float)); //Displaying the size of floating data type.  
return 0;  
}  
