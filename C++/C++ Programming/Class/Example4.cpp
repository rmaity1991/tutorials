/*
C++ Constructor
In C++, constructor is a special method which is invoked automatically at the time of object creation. It is used to initialize the data members of 
new object generally. The constructor in C++ has the same name as class or structure.

There can be two types of constructors in C++.

1) Default constructor
2) Parameterized constructor

*/

#include <iostream>  
using namespace std;  
class Employee  
 {  
   public:  
        Employee()    
        {    
            cout<<"Default Constructor Invoked"<<endl;    
        }    
};  
int main(void)   
{  
    Employee e1; //creating an object of Employee   
    Employee e2;   
    return 0;  
}  
