#include<stdio.h>

int main()  
{  
  int b=6;  
  int c=8;  
  printf("Value of b is:%d", b);  
  printf("\nValue of c is:%d",c); 


  b=10;  
  c= -10;  
  printf("Value of b is:%u", b);  
  printf("\nValue of c is:%u",c);  

  int a=0100;  
  printf("Octal value of a is: %o", a);  
  printf("\nInteger value of a is: %d",a);  

  int y=0xA;  
  printf("Hexadecimal value of y is: %x", y);  
  printf("\nHexadecimal value of y is: %X",y);  
  printf("\nInteger value of y is: %d",y);  

  float z=3.4;  
  printf("Floating point value of y is: %f", z);  

  float m=3;  
  printf("Exponential value of y is: %e", m);  

  float n=3.8;  
  printf("Float value of y is: %g", n); 

  y=5;  
  printf("Address value of y in hexadecimal form is: %p", &y); 

  char o='c';  
  printf("Value of a is: %c", o);    

  printf("%s", "javaTpoint"); 


  int x=900;  
  printf("The precision of the printed number is %8d", x);  
  printf("The precision of the printed number is \n%-8d",x);  

  x=12;  
  printf("The precision of the printed number is %08d", x);  


  float p=12.2;  
  printf("The precision of the printed number is %.2f", p);  
   
  
    return 0;  
}  