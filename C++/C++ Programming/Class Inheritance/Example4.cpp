/*
How to make a Private Member Inheritable
The private member is not inheritable. If we modify the visibility mode by making it public, but this takes away the advantage of data hiding.

C++ introduces a third visibility modifier, i.e., protected. The member which is declared as protected will be accessible to all the member 
functions within the class as well as the class immediately derived from it.

Visibility modes can be classified into three categories:

C++ Inheritance
Public: When the member is declared as public, it is accessible to all the functions of the program.
Private: When the member is declared as private, it is accessible within the class only.
Protected: When the member is declared as protected, it is accessible within its own class as well as the class immediately derived from it.
*/

/*
C++ Multi Level Inheritance Example
When one class inherits another class which is further inherited by another class, it is known as multi level inheritance in C++. 
Inheritance is transitive so the last derived class acquires all the members of all its base classes.
*/

#include <iostream>  
using namespace std;  
 class Animal {  
   public:  
 void eat() {   
    cout<<"Eating..."<<endl;   
 }    
   };  
   class Dog: public Animal   
   {    
       public:  
     void bark(){  
    cout<<"Barking..."<<endl;   
     }    
   };   
   class BabyDog: public Dog   
   {    
       public:  
     void weep() {  
    cout<<"Weeping...";   
     }    
   };   
int main(void) {  
    BabyDog d1;  
    d1.eat();  
    d1.bark();  
    d1.weep();  
     return 0;  
}  
