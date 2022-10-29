/*
An array is defined as the collection of similar type of data items stored at contiguous memory locations. 
Arrays are the derived data type in C programming language which can store the primitive type of data such 
as int, char, double, float, etc. It also has the capability to store the collection of derived data types, 
such as pointers, structure, etc. The array is the simplest data structure where each data element can be 
randomly accessed by using its index number.

C array is beneficial if you have to store similar elements. For example, if we want to store the marks of 
a student in 6 subjects, then we don't need to define different variables for the marks in the different subject. 
Instead of that, we can define an array which can store the marks in each subject at the contiguous memory locations.

By using the array, we can access the elements easily. Only a few lines of code are required to access the 
elements of the array.

Each element of an array is of same data type and carries the same size, i.e., int = 4 bytes.
Elements of the array are stored at contiguous memory locations where the first element is stored at the 
smallest memory location.
Elements of the array can be randomly accessed since we can calculate the address of each element of the array 
with the given base address and the size of the data element.
*/

#include<stdio.h>  
int main(){      
int i=0;    
int marks[5];//declaration of array       
marks[0]=80;//initialization of array    
marks[1]=60;    
marks[2]=70;    
marks[3]=85;    
marks[4]=75;    
//traversal of array    
for(i=0;i<5;i++){      
printf("%d \n",marks[i]);    
}//end of for loop     
return 0;  
}    
