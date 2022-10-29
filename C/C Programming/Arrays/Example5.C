/*
The two-dimensional array can be defined as an array of arrays. 
The 2D array is organized as matrices which can be represented as the collection of rows and columns. 
However, 2D arrays are created to implement a relational database lookalike data structure. 
It provides ease of holding the bulk of data at once which can be passed to any number of functions wherever required.
*/

#include<stdio.h>  
int main(){      
int i=0,j=0;    
int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};     
//traversing 2D array    
for(i=0;i<4;i++){    
 for(j=0;j<3;j++){    
   printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);    
 }//end of j    
}//end of i    
return 0;  
}    
