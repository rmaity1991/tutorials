/*
C gets() and puts() functions
The gets() and puts() are declared in the header file stdio.h. 
Both the functions are involved in the input/output operations of the strings.

C gets() function
The gets() function enables the user to enter some characters followed by the enter key. 
All the characters entered by the user get stored in a character array. 
The null character is added to the array to make it a string. The gets() allows the user to enter 
the space-separated strings. It returns the string entered by the user.

C puts() function
The puts() function is very much similar to printf() function. The puts() function is used to print 
the string on the console which is previously read by using gets() or scanf() function. The puts() function 
returns an integer value representing the number of characters being printed on the console. Since, it prints 
an additional newline character with the string, which moves the cursor to the new line on the console, 
the integer value returned by puts() will always be equal to the number of characters present in the string plus 1.

*/

#include<stdio.h>  
#include<string.h>
#include<stdio.h>
void main ()  
{  
    char s[30];  
    printf("Enter the string? ");  
    gets(s);  
    printf("You entered %s",s);  

    char str[20];   
   printf("Enter the string? ");  
   fgets(str, 20, stdin);   
   printf("%s", str);   
}  