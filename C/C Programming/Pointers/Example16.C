/*
As we know that we can create a pointer of any data type such as int, char, float, we can also create a pointer pointing to a function. The code of a function always resides in memory, which means that the function has some address. We can get the address of memory by using the function pointer.

return type (*ptr_name)(type1, type2…);  
int (*ip) (int); 
float (*fp) (float);  

In the above declaration, *fp is a pointer that points to a function that returns a float value and accepts a 
float value as an argument.

We can observe that the declaration of a function is similar to the declaration of a function pointer except 
that the pointer is preceded by a '*'. So, in the above declaration, fp is declared as a function rather than a pointer.

Till now, we have learnt how to declare the function pointer.


float (*fp) (int , int);    // Declaration of a function pointer.  
float func( int , int );    // Declaration of  function.  
fp = func;                     // Assigning address of func to the fp pointer.  

*/

#include <stdio.h>  
int add(int,int);  
int main()  
{  
   int a,b;  
   int (*ip)(int,int);  
   int result;  
   printf("Enter the values of a and b : ");  
   scanf("%d %d",&a,&b);  
   ip=add;  
   result=(*ip)(a,b);  
   printf("Value after addition is : %d",result);  
    return 0;  
}  
int add(int a,int b)  
{  
    int c=a+b;  
    return c;  
}  