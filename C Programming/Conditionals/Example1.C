
/*
The conditional operator is also known as a ternary operator. The conditional statements are the 
decision-making statements which depends upon the output of the expression. It is represented by 
two symbols, i.e., '?' and ':'.
*/

#include <stdio.h>  
int main()  
{  
    int age;  // variable declaration  
    printf("Enter your age");  
    scanf("%d",&age);   // taking user input for age variable  
    (age>=18)? (printf("eligible for voting")) : (printf("not eligible for voting"));  // conditional operator  


    int a=5,b;  // variable declaration  
   b=((a==5)?(3):(2)); // conditional operator  
   printf("The value of 'b' variable is : %d",b);  
  
    return 0;  
}  