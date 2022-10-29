/*
Structure in c is a user-defined data type that enables us to store the collection of different data types. 
Each element of a structure is called a member. Structures ca; simulate the use of classes and templates as 
it can store various information
We can declare a variable for the structure so that we can access the member of the structure easily. 
There are two ways to declare structure variable:

By struct keyword within main() function
By declaring a variable at the time of defining the structure.
*/

#include<stdio.h>  
#include <string.h>    
struct employee      
{   int id;      
    char name[50];      
}e1;  //declaring e1 variable for structure    
int main( )    
{    
   //store first employee information    
   e1.id=101;    
   strcpy(e1.name, "Sonoo Jaiswal");//copying string into char array    
   //printing first employee information    
   printf( "employee 1 id : %d\n", e1.id);    
   printf( "employee 1 name : %s\n", e1.name);    
return 0;  
}    

