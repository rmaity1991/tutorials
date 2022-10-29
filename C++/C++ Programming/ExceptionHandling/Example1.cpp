/*
C++ Exception Handling
Exception Handling in C++ is a process to handle runtime errors. We perform exception handling so the 
normal flow of the application can be 
maintained even after runtime errors.

In C++, exception is an event or object which is thrown at runtime. All exceptions are derived from 
std::exception class. It is a runtime error 
which can be handled. If we don't handle the exception, it prints exception message and terminates the 
program.

Advantage
It maintains the normal flow of the application. In such case, rest of the code is executed even after 
exception.

C++ Exception Classes
In C++ standard exceptions are defined in <exception> class that we can use inside our programs.

C++ Exception Handling Keywords
In C++, we use 3 keywords to perform exception handling:

try
catch, and
throw

In C++ programming, exception handling is performed using try/catch statement. The C++ try block is 
used to place the code that may 
occur exception. The catch block is used to handle the exception.

*/
#include <iostream>  
using namespace std;  
float division(int x, int y) {  
   if( y == 0 ) {  
      throw "Attempted to divide by zero!";  
   }  
   return (x/y);  
}  
int main () {  
   int i = 25;  
   int j = 0;  
   float k = 0;  
   try {  
      k = division(i, j);  
      cout << k << endl;  
   }catch (const char* e) {  
      cerr << e << endl;  
   }  
   return 0;  
}  