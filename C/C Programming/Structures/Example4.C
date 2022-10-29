/*
The typedef is a keyword used in C programming to provide some meaningful names to the already existing 
variable in the C program. It behaves similarly as we define the alias for the commands. In short, we can 
say that this keyword is used to redefine the name of an already existing variable.
*/
#include <stdio.h>  
typedef struct student  
{  
char name[20];  
int age;  
}stud;  
int main()  
{  
stud s1;  
printf("Enter the details of student s1: ");  
printf("\nEnter the name of the student:");  
scanf("%s",&s1.name);  
printf("\nEnter the age of student:");  
scanf("%d",&s1.age);  
printf("\n Name of the student is : %s", s1.name);  
printf("\n Age of the student is : %d", s1.age);  
return 0;  
}  