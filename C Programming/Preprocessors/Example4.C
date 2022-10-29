// The #define preprocessor directive is used to define constant or micro substitution. It can use any basic data type.

#include <stdio.h>  
#define PI 3.14  

#define MIN(a,b) ((a)<(b)?(a):(b)) 

#define number 15  
int square=number*number;  
#undef number  


main() { 

   printf("%f",PI); 

   printf("Minimum between 10 and 20 is: %d\n", MIN(10,20)); 

   printf("%d",square);  
}  