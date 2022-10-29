/*
C++ Function Overriding
If derived class defines same function as defined in its base class, it is known as function overriding in C++. 
It is used to achieve runtime polymorphism. It enables you to provide specific implementation of the function which is 
already provided by its base class.
*/

#include <iostream>  
using namespace std;  
class Animal {  
    public:  
void eat(){    
cout<<"Eating...";    
    }      
};   
class Dog: public Animal    
{    
 public:  
 void eat()    
    {    
       cout<<"Eating bread...";    
    }    
};  
int main(void) {  
   Dog d = Dog();    
   d.eat();  
   return 0;  
}  
