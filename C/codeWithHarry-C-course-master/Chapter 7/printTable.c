#include <stdio.h>
void printTable(int num){
    int arr[11];
    for(int i=0 ; i<11 ; i++){
        arr[i] = num * i;
    }
     for(int i=0 ; i<11 ; i++){
         printf("%d\n" , arr[i]);
     }
}
int main()
{
    int num;
    printf("Enter a number \n ");
    scanf("%d" , &num);
    printTable(num);
    return 0;
}