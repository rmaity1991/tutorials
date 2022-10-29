/*
In C, there are various general problems which requires passing more than one variable of the same type to a function. 
For example, consider a function which sorts the 10 elements in ascending order. Such a function requires 10 numbers 
to be passed as the actual parameters from the main function. Here, instead of declaring 10 different numbers and 
then passing into the function, we can declare and initialize an array and pass that into the function. This will 
resolve all the complexity since the function will now work for any number of values.

As we know that the array_name contains the address of the first element. Here, we must notice that we need to pass 
only the name of the array in the function which is intended to accept an array. The array defined as the formal 
parameter will automatically refer to the array specified by the array name defined as an actual parameter.
*/

#include<stdio.h>  
int minarray(int arr[],int size){    
int min=arr[0];    
int i=0;    
for(i=1;i<size;i++){    
if(min>arr[i]){    
min=arr[i];    
}    
}//end of for    
return min;    
}//end of function    
    
int main(){      
int i=0,min=0;    
int numbers[]={4,5,7,3,8,9};//declaration of array    
  
min=minarray(numbers,6);//passing array with size    
printf("minimum number is %d \n",min);    
return 0;  
}    
