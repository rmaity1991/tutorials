#include <stdio.h>
void reverseArray(int *arr , int n){
    for(int i=0 ; i<n/2 ; i++){
        int temp;
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
int main()
{
    int arr[4] = {1,2,3,4};
    reverseArray(arr , 4);
    for (int i = 0; i < 4 ;i++)
    {
        printf("%d  ", arr[i]);
    }
    
    return 0;
}