#include <stdio.h>
void printArray(int *ptr , int n){
    for(int i=0 ; i<n ; i++){
        printf("The value of element %d is %d \n" , i+1 , *(ptr+i));
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    printArray(arr , 5);
    return 0;
}