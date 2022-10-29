/*
Pure Virtual Function
A virtual function is not used for performing any task. It only serves as a placeholder.
When the function has no definition, such function is known as "do-nothing" function.
The "do-nothing" function is known as a pure virtual function. A pure virtual function is a function declared in the base class that has no definition relative to the base class.
A class containing the pure virtual function cannot be used to declare the objects of its own, such classes are known as abstract base classes.
The main objective of the base class is to provide the traits to the derived classes and to create the base pointer used for achieving the runtime polymorphism.
*/

#include <iostream>  
using namespace std;  
class Base  
{  
    public:  
    virtual void show() = 0;  // This is a pure virtual function 
};  
class Derived : public Base  
{  
    public:  
    void show()  
    {  
        std::cout << "Derived class is derived from the base class." << std::endl;  
    }  
};  
int main()  
{  
    Base *bptr;  
    //Base b;  
    Derived d;  
    bptr = &d;  
    bptr->show();  
    return 0;  
}  