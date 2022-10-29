/*
The bitwise operators are the operators used to perform the operations on the data at the bit-level. 
When we perform the bitwise operations, then it is also known as bit-level programming. It consists of 
two digits, either 0 or 1. It is mainly used in numerical computations to make the calculations faster.

Bitwise AND operator is denoted by the single ampersand sign (&). Two integer operands are written on 
both sides of the (&) operator. If the corresponding bits of both the operands are 1, then the output 
of the bitwise AND operation is 1; otherwise, the output would be 0.

The bitwise OR operator is represented by a single vertical sign (|). Two integer operands are written 
on both sides of the (|) symbol. If the bit value of any of the operand is 1, then the output would be 1, otherwise 0.

Bitwise exclusive OR operator is denoted by (^) symbol. Two operands are written on both sides of the
exclusive OR operator. If the corresponding bit of any of the operand is 1 then the output would be 1, otherwise 0.

The bitwise complement operator is also known as one's complement operator. It is represented by the symbol
tilde (~). It takes only one operand or variable and performs complement operation on an operand. When we 
apply the complement operation on any bits, then 0 becomes 1 and 1 becomes 0.

Two types of bitwise shift operators exist in C programming. The bitwise shift operators will shift the bits 
either on the left-side or right-side. Therefore, we can say that the bitwise shift operator is divided into 
two categories:

Left-shift operator
Right-shift operator




*/
#include <stdio.h>  
int main()  
{  
   int a=6, b=14;  // variable declarations  
   printf("The output of the Bitwise AND operator a&b is %d",a&b);  

   printf("The output of the Bitwise OR operator a|b is %d",a|b);  

   printf("The output of the Bitwise exclusive OR operator a^b is %d",a^b);  

   printf("The output of the Bitwise complement operator ~a is %d",~a);  

   printf("The value of a<<2 is : %d ", a<<2);  

   printf("The value of a>>2 is : %d ", a>>2);  


   return 0;  
}  