/*
In C, there are cases where we need to store multiple attributes of an entity. 
It is not necessary that an entity has all the information of one type only. 
It can have different attributes of different data types. 
For example, an entity Student may have its name (string), roll number (int), marks (float). 
To store such type of information regarding an entity student, we have the following approaches:

Construct individual arrays for storing names, roll numbers, and marks.
Use a special data structure to store the collection of different data types.
*/

#include<stdio.h>  
void main ()  
{  
  char names[2][10],dummy; // 2-dimensioanal character array names is used to store the names of the students   
  int roll_numbers[2],i;  
  float marks[2];  
  for (i=0;i<3;i++)  
  {  
      
    printf("Enter the name, roll number, and marks of the student %d",i+1);  
    scanf("%s %d %f",&names[i],&roll_numbers[i],&marks[i]);  
    scanf("%c",&dummy); // enter will be stored into dummy character at each iteration  
  }  
  printf("Printing the Student details ...\n");  
  for (i=0;i<3;i++)  
  {  
    printf("%s %d %f\n",names[i],roll_numbers[i],marks[i]);  
  }  
}  
