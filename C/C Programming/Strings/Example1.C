/*
The string can be defined as the one-dimensional array of characters terminated by a null ('\0'). 
The character array or the string is used to manipulate text such as word or sentences. Each character in 
the array occupies one byte of memory, and the last character must always be 0. The termination character 
('\0') is important in a string since it is the only way to identify where the string ends. When we define a 
string as char s[10], the character s[10] is implicitly initialized with the null in the memory.

There are two ways to declare a string in c language.

By char array
By string literal
*/

#include<stdio.h>  
#include <string.h>    
int main(){    
  char ch[11]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};    
   char ch2[11]="javatpoint";    
    
   printf("Char Array Value is: %s\n", ch);    
   printf("String Literal Value is: %s\n", ch2);    
 return 0;    
}    
