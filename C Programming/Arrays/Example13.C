/*
The structure is a user-defined data type that can contain a collection of items of different types. 
Now, we will create a program that returns an array by using structure.
*/

#include <stdio.h>  
#include<malloc.h>  
struct array  
{  
    int arr[8];  
};  
struct array getarray()  
{  
    struct array y;  
    printf("Enter the elements in an array : ");  
    for(int i=0;i<8;i++)  
    {  
        scanf("%d",&y.arr[i]);  
    }  
    return y;  
}  
int main()  
{  
  struct array x=getarray();  
  printf("Elements that you have entered are :");  
  for(int i=0;x.arr[i]!='\0';i++)  
  {  
      printf("%d ", x.arr[i]);  
  }  
    return 0;  
}  