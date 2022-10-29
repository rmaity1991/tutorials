/*
Function Pointer in C++
As we know that pointers are used to point some variables; similarly, the function pointer is a pointer used to point functions. 
It is basically used to store the address of a function. We can call the function by using the function pointer, or we can also 
pass the pointer to another function as a parameter.

They are mainly useful for event-driven applications, callbacks, and even for storing the functions in arrays.

The following is the syntax for the declaration of a function pointer:

int (*FuncPtr) (int,int); 

The above syntax is the function declaration. As functions are not simple as variables, but C++ is a type safe, so function pointers 
have return type and parameter list. In the above syntax, we first supply the return type, and then the name of the pointer, i.e., 
FuncPtr which is surrounded by the brackets and preceded by the pointer symbol, i.e., (*). After this, we have supplied the parameter 
list (int,int). The above function pointer can point to any function which takes two integer parameters and returns integer type value.
*/

#include <iostream>  
using namespace std;  
int add(int a , int b)  
{  
    return a+b;  
}  
int main()  
{  
 int (*funcptr)(int,int);  // function pointer declaration  
 funcptr=add; // funcptr is pointing to the add function  
 int sum=funcptr(5,5);  
 std::cout << "value of sum is :" <<sum<< std::endl;  
  return 0;  
}  
