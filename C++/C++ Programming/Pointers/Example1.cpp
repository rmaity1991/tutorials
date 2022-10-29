/*
C++ Pointers
The pointer in C++ language is a variable, it is also known as locator or indicator that points to an address of a value.
Advantage of pointer

1) Pointer reduces the code and improves the performance, it is used to retrieving strings, trees etc. and used with arrays, structures and functions.

2) We can return multiple values from function using pointer.
3) It makes you able to access any memory location in the computer's memory.

Usage of pointer

There are many usage of pointers in C++ language.

1) Dynamic memory allocation

In c language, we can dynamically allocate memory using malloc() and calloc() functions where pointer is used.

2) Arrays, Functions and Structures

Pointers in c language are widely used in arrays, functions and structures. It reduces the code and improves the performance.
*/
#include <iostream>  
using namespace std;  
int main()  
{  
int number=30;    
int* p;      
p=&number;//stores the address of number variable    
cout<<"Address of number variable is:"<<&number<<endl;    
cout<<"Address of p variable is:"<<p<<endl;    
cout<<"Value of p variable is:"<<*p<<endl;    
   return 0;  
}  