/*
C++ Arrays
Like other programming languages, array in C++ is a group of similar types of elements that have contiguous memory location.

In C++ std::array is a container that encapsulates fixed size arrays. In C++, array index starts from 0. We can store only fixed set of elements in C++ array.

C++ Array Types
There are 2 types of arrays in C++ programming:

Single Dimensional Array
Multidimensional Array

*/

#include <iostream>  
using namespace std;  
int main()  
{  
 int arr[5]={10, 0, 20, 0, 30};  //creating and initializing array    
        //traversing array    
        for (int i = 0; i < 5; i++)    
        {    
            cout<<arr[i]<<"\n";    
        }    
}  
