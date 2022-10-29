#include<stdio.h>


//linerSearch
int linearSearch(int arr[],int size,int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element){
            return i;
        
        }    /* code */
        return -1;
        
        
    }
    
}



//binarySearch
int binarySearch(int arr[],int size,int element){
    int low,mid,high;
    low = 0;
    high = size-1;
    
    
    //Keep searching until low <= high conversion
    while (low<=high)
    {
   
    
    mid=(low+high)/2;
    if(arr[mid]==element){
        return mid;
        }
        if (arr[mid]<element)
        {
           low = mid +1;   
        }
        else
        {
            high= mid -1;
        }
        
             
    }
    return -1;
    
    
}


int main()
{
    // Unsorted array for linear search
    // int arr[]= {1,2,3,4,5,6,7,8,23,232,23,24};
    // int size = sizeof(arr)/sizeof(int);

    
    // sorted array for Binary search
     int arr[]= {1,2,3,4,5,6,7,8,9,43,643};
     int size = sizeof(arr)/sizeof(int);
    
    int element = 643;
    // int searchIndex = linearSearch(arr,size,element);
    int searchIndex = binarySearch(arr,size,element);

    printf("The element %d was found at index %d \n", element,searchIndex);
    
return 0;
}