/*
C++ Void Pointer
A void pointer is a general-purpose pointer that can hold the address of any data type, but it is not associated with any data type.
In the above program, we declare two pointer variables of type void and int type respectively. We also create another integer type variable, i.e., 
'data'. After declaration, we store the address of variable 'data' in a void pointer variable, i.e., ptr. Now, we want to assign the void pointer to 
integer pointer, in order to do this, we need to apply the cast operator, i.e., (int *) to the void pointer variable. This cast operator tells the 
compiler which type of value void pointer is holding. For casting, we have to type the data type and * in a bracket like (char *) or (int *).
*/


#include <iostream>  
using namespace std;  
int main()  
{  
  void *ptr; // void pointer declaration  
  int *ptr1; // integer pointer declaration  
  int data=10; // integer variable initialization  
  ptr=&data;  // storing the address of data variable in void pointer variable  
  ptr1=(int *)ptr; // assigning void pointer to integer pointer  
  std::cout << "The value of *ptr1 is : " <<*ptr1<< std::endl;  
  return 0;  
}  