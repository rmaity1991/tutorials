/*
C++ OOPs Concepts
The major purpose of C++ programming is to introduce the concept of object orientation to the C programming language.

Object Oriented Programming is a paradigm that provides many concepts such as inheritance, data binding, polymorphism etc.

The programming paradigm where everything is represented as an object is known as truly object-oriented programming language. 
Smalltalk is considered as the first truly object-oriented programming language.

OOPs (Object Oriented Programming System)
Object means a real word entity such as pen, chair, table etc. Object-Oriented Programming is a methodology or paradigm to design 
a program using classes and objects. It simplifies the software development and maintenance by providing some concepts:

Object
Class
Inheritance
Polymorphism
Abstraction
Encapsulation
*/

#include <iostream>  
using namespace std;  
class Student {  
   public:  
      int id;//data member (also instance variable)      
      string name;//data member(also instance variable)
      float salary; //field or data member       
};  
int main() {  
    Student s1; //creating an object of Student   
    s1.id = 201;    
    s1.name = "Sonoo Jaiswal";   
    cout<<s1.id<<endl;  
    cout<<s1.name<<endl;  
    return 0;
}

