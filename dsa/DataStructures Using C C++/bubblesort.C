#include<stdio.h>
#include<stdlib.h>

void bubblesort(int *arr,int size){

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
}

void printarray(int *arr,int size){
    for(int i=0;i<size;i++){

        printf("%d \n",arr[i]);

    }
}

int main(){

    int arr[10]={56,45,23,78,90,23,67,40,35,58};
    bubblesort(arr,10);
    printarray(arr,10);

    return 0;

}