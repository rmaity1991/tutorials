#include<stdio.h>
#include<stdlib.h>

#define max_size 100

void insertionBegin(int *arr,int item,int *size){


    for(int i=(*size-1);i>=0;i--){
        (arr)[i+1]=(arr)[i];
    }

    (arr)[0]=item;
    *size=*size+1;
}

void insertionLast(int *arr,int item,int *size)
    {
        int _temp=(*size)-1;
        (arr)[_temp]=item;

        *size=*size+1;
    }

void show(int *arr,int *size){

    for(int i=0;i<(*size);i++){
        printf("%d \n",(arr)[i]);
    }

}
    


int main(){
    //int arr[max_size]={2,5,6,8,1,3};

    int *arr=(int*)malloc(max_size*sizeof(int));

    arr[0]=2;
    arr[1]=6;
    arr[2]=7;
    int *size=(int*)malloc(sizeof(int));
    *size=3;

    show(arr,size);

    insertionBegin(arr,12,size);

    show(arr,size);
}


