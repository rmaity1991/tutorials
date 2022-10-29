/*
Function	Description
1)	strlen(string_name)	returns the length of string name.
2)	strcpy(destination, source)	copies the contents of source string to destination string.
3)	strcat(first_string, second_string)	concats or joins first string with second string. The result of the string is stored in first string.
4)	strcmp(first_string, second_string)	compares the first string with second string. If both strings are same, it returns 0.
5)	strrev(string)	returns reverse string.
6)	strlwr(string)	returns string characters in lowercase.
7)	strupr(string)	returns string characters in uppercase.
*/

#include<stdio.h>  
#include <string.h>
#include<stdio.h>
    
int main(){    
char name[50];    
printf("Enter your name: ");    
gets(name); //reads string from user    
printf("Your name is: ");    
puts(name);  //displays string    
return 0;    
}    