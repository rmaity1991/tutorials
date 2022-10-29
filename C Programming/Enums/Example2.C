#include <stdio.h>  
 enum weekdays{Sunday=1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}; 

 enum months{jan=1, feb, march, april, may, june, july, august, september, october, november, december};  

 int main()  
{  
 enum weekdays w; // variable declaration of weekdays type  
 w=Monday; // assigning value of Monday to w.  
 printf("The value of w is %d",w);  
    return 0; 


    // printing the values of months  
 for(int i=jan;i<=december;i++)  
 {  
 printf("%d, ",i);  
 }   
}  