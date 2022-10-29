// #include<stdio.h>

// void printArray(int* A, int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d " , A[i]);
//         /* code */
//     }
//     printf("\n");
    
// }

// void bubbleSort(int *A, int n){
//     int temp;
//     int isSorted = 0;
//     for (int i = 0; i < n-1; i++) // For number of 
//     {   
//         printf("Working  on pass number %d\n" , i+1);
        
    
//         for (int j = 0; j <n-1-i; j++) //For comparison in each pass
//         {
//             if(A[j]>A[j+1])
//             {
//                 temp = A[j];
//                 A[j]= A[j+1];
//                 A[j+1] = temp;
         
//                 /* code */
//             }
            
          
         
            
//             /* code */
//         }
        
//     }
    


// }


// void bubbleSortAdaptive(int *A, int n){
//     int temp;
//     int isSorted = 0;
//     for (int i = 0; i < n-1; i++) // For number of 
//     {   
//         printf("Working  on pass number %d\n" , i+1);
        
//         isSorted = 1;
//         for (int j = 0; j <n-1-i; j++) //For comparison in each pass
//         {
//             if(A[j]>A[j+1])
//             {
//                 temp = A[j];
//                 A[j]= A[j+1];
//                 A[j+1] = temp;
//                 isSorted = 0;
//                 /* code */
//             }
            
//             if(isSorted)
//             {
//                 return;
//                 /* code */
//             }
            
//             /* code */
//         }
        
//     }


// }





// int main()

// {
    
    
    
// int A[] = {12, 54, 65, 7, 23, 9,4,53,233};
// // int A[] = {1, 2, 3, 4, 5, 6};

// int n = 9;

// printArray(A, n);//Printing the array before sorting
// bubbleSort(A,n);//Function to sort the array
// printArray(A, n);//Printing the array \before sorting


// return 0;
// }




















#include<stdio.h>
 
void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}





void bubbleSort(int *A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1); 
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp; 
            }
        }  
    } 
}
 
void bubbleSortAdaptive(int *A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1);
        isSorted = 1;
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
        } 
        if(isSorted){
            return;
        }
    } 
}
 
int main(){
    // int A[] = {12, 54, 65, 7, 23, 9};
    int A[] = {1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987};
    // int A[] = {1, 2, 3, 4, 5, 6};
    int n = 11;

    printArray(A, n); // Printing the array before sorting
    bubbleSortAdaptive(A, n);
    // bubbleSort(A, n); // Function to sort the array
    printArray(A, n); // Printing the array before sorting
    return 0;
}