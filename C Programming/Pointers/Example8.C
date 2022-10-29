#include <stdio.h>            
void main(){            
int number=50;        
int *p;//pointer to int      
p=&number;//stores the address of number variable        
printf("Address of p variable is %u \n",p);        
p=p-1;       
printf("After decrement: Address of p variable is %u \n",p); // P will now point to the immidiate previous location. 

p=p+3;   //adding 3 to pointer variable    
printf("After adding 3: Address of p variable is %u \n",p);    

p=p-3; //subtracting 3 from pointer variable    
printf("After subtracting 3: Address of p variable is %u \n",p);     

p = p + 3;  
    printf("Pointer Subtraction: %d - %d = %d",p, temp, p-temp);  

    
}      