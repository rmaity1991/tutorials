/*
CLASS TEMPLATE
Class Template can also be defined similarly to the Function Template. When a class uses the concept of Template, then the class is known as generic class.

Ttype is a placeholder name which will be determined when the class is instantiated. We can define more than one generic data type using a comma-separated list. 
The Ttype can be used inside the class body.

Now, we create an instance of a class

where class_name: It is the name of the class.

type: It is the type of the data that the class is operating on.
*/
#include <iostream>  
using namespace std;  
template<class T>  
class A   
{  
    public:  
    T num1 = 5;  
    T num2 = 6;  
    void add()  
    {  
        std::cout << "Addition of num1 and num2 : " << num1+num2<<std::endl;  
    }  
      
};  
  
int main()  
{  
    A<int> d;  
    d.add();  
    return 0;  
}  
