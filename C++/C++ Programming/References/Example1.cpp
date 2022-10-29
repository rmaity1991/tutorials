/*
C++ References
Till now, we have read that C++ supports two types of variables:

An ordinary variable is a variable that contains the value of some type. For example, we create a variable of type int, which means that the 
variable can hold the value of type integer.
A pointer is a variable that stores the address of another variable. It can be dereferenced to retrieve the value to which this pointer points to.
There is another variable that C++ supports, i.e., references. It is a variable that behaves as an alias for another variable.

C++ provides two types of references:
References to non-const values
References as aliases


*/

#include <iostream>  
using namespace std;  
int main()  
{  
int a=10;  
int &value=a;  
std::cout << value << std::endl;  
return 0;  
}  
