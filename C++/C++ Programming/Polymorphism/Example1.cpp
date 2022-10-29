/*
C++ Polymorphism
The term "Polymorphism" is the combination of "poly" + "morphs" which means many forms. It is a greek word. 
In object-oriented programming, we use 3 main concepts: inheritance, encapsulation, and polymorphism.

Compile time polymorphism: The overloaded functions are invoked by matching the type and number of arguments. 
This information is available at the compile time and, therefore, compiler selects the appropriate function at the compile time. 
It is achieved by function overloading and operator overloading which is also known as static binding or early binding. 
Now, let's consider the case where function name and prototype is same.

Run time polymorphism: Run time polymorphism is achieved when the object's method is invoked at the run time instead of compile time. 
It is achieved by method overriding which is also known as dynamic binding or late binding.

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
    {           cout<<"Eating bread...";      
    }      
};    
int main(void) {    
   Dog d = Dog();      
   d.eat();    
   return 0;    
}    
