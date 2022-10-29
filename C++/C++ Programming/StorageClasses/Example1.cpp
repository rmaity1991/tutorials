/*
C++ Storage Classes
Storage class is used to define the lifetime and visibility of a variable and/or function within a C++ program.

Lifetime refers to the period during which the variable remains active and visibility refers to the module of a program in which the variable is accessible.

There are five types of storage classes, which can be used in a C++ program

Automatic
Register
Static
External
Mutable

Automatic Storage Class
It is the default storage class for all local variables. The auto keyword is applied to all local variables automatically.

Register Storage Class
The register variable allocates memory in register than RAM. Its size is same of register size. It has a faster access than other variables.
It is recommended to use register variable only for quick access such as in counter.
Note: We can't get the address of register variable.

Static Storage Class
The static variable is initialized only once and exists till the end of a program. It retains its value between multiple functions call.
The static variable has the default value 0 which is provided by compiler.

*/

#include <iostream>  
using namespace std;  
void func() {    
   static int i=0; //static variable    
   int j=0; //local variable    
   i++;    
   j++;    
   cout<<"i=" << i<<" and j=" <<j<<endl;    
}    
int main()  
{  
{   
//auto x;  
float y = 3.45;  
register int counter=0;
}  
 func();    
 func();    
 func();    
}  
