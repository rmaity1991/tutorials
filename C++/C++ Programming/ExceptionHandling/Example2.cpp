/*
C++ User-Defined Exceptions
The new exception can be defined by overriding and inheriting exception class functionality.

C++ user-defined exception example
Let's see the simple example of user-defined exception in which std::exception class is used to define 
the exception.
*/
#include <iostream>  
#include <exception>  
using namespace std;  
class MyException : public exception{  
    public:  
        const char * what() const throw()  
        {  
            return "Attempted to divide by zero!\n";  
        }  
};  
int main()  
{  
    try  
    {  
        int x, y;  
        cout << "Enter the two numbers : \n";  
        cin >> x >> y;  
        if (y == 0)  
        {  
            MyException z;  
            throw z;  
        }  
        else  
        {  
            cout << "x / y = " << x/y << endl;  
        }  
    }  
    catch(exception& e)  
    {  
        cout << e.what();  
    }  
}  