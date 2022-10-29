/*
we create a bool type array. The Boolean array can contain either true or false value, 
and the values of the array can be accessed with the help of indexing.
*/
#include <stdio.h>  
#include<stdbool.h>  
int main()  
{  
bool b[2]={true,false}; // Boolean type array  
for(int i=0;i<2;i++) // for loop  
{  
printf("%d,",b[i]); // printf statement  
}  
return 0;  
}  