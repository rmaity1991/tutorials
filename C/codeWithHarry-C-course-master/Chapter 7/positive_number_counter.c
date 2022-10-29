//WAP to count number of postive integrs in an array
#include <stdio.h>
void getArray(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
}
// void countPositive(int arr[] , int n){
//     getArray(arr , n);
//     // int positiveCount = 0;
//     // for(int i=0 ; i<n ; i++){
//     //     if(arr[i]>0){
//     //         countPositive = countPositive++; //This is wrong due to wrong variable name
//     //     }
//     //     printf("The Number of positive integers is %d \n" , positiveCount);
//     // }
// }
void countPositive(int arr[] , int n){
    getArray(arr , n);
    int positiveCount = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>0){
            positiveCount++;
        }        
    }
    printf("The Number of positive integers is %d \n" , positiveCount);
}

int main()
{
    int size;
    printf("Enter the size of array \n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Elements of array\n");
    countPositive(arr , size);
    return 0;
}