// #include <stdio.h>
  
// int main() 
// { 
//     // int arr[10]; 
//     int i,sum;

    
  

//  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     /*Read array elements*/

  
     
//     /*calculate sum and product*/
//     sum=0;
//     for(i=0; i<10; i++)
//     {
   
//      sum=sum+arr[i]*arr[i];//main algo
        
//     }
//      printf("\nsquare Sum of array is : %d"  ,sum); 
       
 


//     printf("\n"); 

  
//     return 0; 
// }



int f1 (int n)
{
 if(n == 0 || n == 1)
return n;
 else
 return (2*f1(n-1) + 3*f1(n-2));
}






#include<stdio.h>
int main()
{


int output = f1(8);

printf("%d",output);

return 0;


}