#include <stdio.h>
void printTable(int *arr, int num)
{
    for (int i = 0; i < 10; i++)
    {
        arr[i] = num * (i + 1);
    }
    printf("Table of %d is : \n" , num);
    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d \n", num, i, arr[i]);
    }
}
int main()
{
    int nos;
    printf("How many tables you want to print? \n");
    scanf("%d",&nos);
    int arr[nos];
    printf("Enter the numbers you want to print the table\n");
    for(int i=0 ; i<nos ; i++){
        scanf("%d",&arr[i]);
    }
    int mulTable[nos][10];
    for(int i=0 ; i<nos ; i++){
        printTable(mulTable[i],arr[i]);
    }
    

    return 0;
}