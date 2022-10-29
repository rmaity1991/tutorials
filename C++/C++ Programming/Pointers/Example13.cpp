/*
Passing a function pointer as a parameter
The function pointer can be passed as a parameter to another function.
*/
#include <iostream>  
using namespace std;  
void func1()  
{  
    cout<<"func1 is called";  
}  
void func2(void (*funcptr)())  
{  
    funcptr();  
}  
int main()  
{  
  func2(func1);  
  return 0;  
}  