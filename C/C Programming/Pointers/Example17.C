#include <stdio.h>  
// Passing a function's address as an argument to other function
void func1(void (*ptr)());  
void func2();  
int main()  
{  
    func1(func2);  
     return 0;  
}  
void func1(void (*ptr)())  
{  
    printf("Function1 is called");  
    (*ptr)();  
}  
void func2()  
{  
    printf("\nFunction2 is called");  
}  