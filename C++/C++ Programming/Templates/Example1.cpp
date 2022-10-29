/*
C++ Templates
A C++ template is a powerful feature added to C++. It allows you to define the generic classes and generic functions and thus provides support 
for generic programming. Generic programming is a technique where generic types are used as parameters in algorithms so that they can work for 
a variety of data types.

Templates can be represented in two ways:

1) Function templates
2) Class templates

Function Templates:

We can define a template for a function. For example, if we have an add() function, we can create versions of the add function for adding the 
int, 
float or double type values.

Class Template:

We can define a template for a class. For example, a class template can be created for the array class that can accept the array of various 
types 
such as int array, float array or double array.


Function Template
Generic functions use the concept of a function template. Generic functions define a set of operations that can be applied to the various 
types of data.
The type of the data that the function will operate on depends on the type of the data passed as a parameter.
For example, Quick sorting algorithm is implemented using a generic function, it can be implemented to an array of integers or array of floats.
A Generic function is created by using the keyword template. The template defines what function will do.

*/
#include <iostream>  
using namespace std;  
template<class T> 
T add(T &a,T &b)  
{  
    T result = a+b;  
    return result;  
      
}  
int main()  
{  
  int i =2;  
  int j =3;  
  float m = 2.3;  
  float n = 1.2;  
  cout<<"Addition of i and j is :"<<add(i,j);  
  cout<<'\n';  
  cout<<"Addition of m and n is :"<<add(m,n);  
  return 0;  
}  