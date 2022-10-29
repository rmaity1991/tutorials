/*
Array of Pointer to Strings
An array of pointer to strings is an array of character pointers that holds the address of the first character of a string or 
we can say the base address of a string.

The following are the differences between an array of pointers to string and two-dimensional array of characters:

An array of pointers to string is more efficient than the two-dimensional array of characters in case of memory consumption because 
an array of pointer to strings consumes less memory than the two-dimensional array of characters to store the strings.
In an array of pointers, the manipulation of strings is comparatively easier than in the case of 2d array. We can also easily change 
the position of the strings by using the pointers.
Let's see how to declare the array of pointers to string.
*/

#include <iostream>  
using namespace std;  
int main()  
{  
  char *names[5] = {"john",  
                    "Peter",  
                    "Marco",  
                    "Devin",  
                    "Ronan"};  
for(int i=0;i<5;i++)  
    {  
        std::cout << names[i] << std::endl;  
    }  
    return 0;  
}  
