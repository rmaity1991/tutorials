/*Create an array of 10 elemets verify that ptr+2 points the third element of array. 
where ptr = pointer of first element of array*/
#include <stdio.h>
int main()
{
    // char ch;
    // char *ptr = &ch;
    // printf("The value of ptr is %u\n",ptr);
    // ptr++;
    // printf("The value of ptr is %u\n",ptr);

    // if(ptr == &ch){
    //     printf("Yes");
    // }
    int arr[10];
    int *ptr = &arr[0];
    int *ptr3 = &arr[2];
    ptr = ptr + 2;
    if(ptr == ptr3){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}