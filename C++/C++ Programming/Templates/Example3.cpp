/*
Overloading a Function Template
We can overload the generic function means that the overloaded template functions can differ in the parameter list.
*/
#include <iostream>  
using namespace std;  
template<class X> 
void fun(X a)  
{  
    std::cout << "Value of a is : " <<a<< std::endl;  
}  

template<class X,class Y> 
void fun(X b ,Y c)  
{  
    std::cout << "Value of b is : " <<b<< std::endl;  
    std::cout << "Value of c is : " <<c<< std::endl;  
}  
int main()  
{  
   fun(10);  
   fun(20,30.5);  
   return 0;  
}  