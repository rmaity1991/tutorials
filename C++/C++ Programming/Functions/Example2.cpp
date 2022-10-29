/*
Call by value and call by reference in C++
There are two ways to pass value or data to function in C language: call by value and call by reference. 
Original value is not modified in call by value but it is modified in call by 
reference.

Call by value in C++
In call by value, original value is not modified.

In call by value, value being passed to the function is locally stored by the function parameter in stack memory location. 
If you change the value of function parameter, it is changed 
for the current function only. It will not change the value of variable inside the caller method such as main().

*/
#include <iostream>  
using namespace std;  
void change(int data);  
int main()  
{  
int data = 3;  
change(data);  
cout << "Value of the data is: " << data<< endl;  
return 0;  
}  
void change(int data)  
{  
data = 5;  
}  


